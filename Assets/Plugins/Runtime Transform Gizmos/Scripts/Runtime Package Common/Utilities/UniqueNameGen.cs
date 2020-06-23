using System.Collections.Generic;

namespace RTG
{
    public static class UniqueNameGen
    {
        public static string Generate(string desiredName, IEnumerable<string> existingNames)
        {
            string finalName = desiredName;
            int suffix = 0;

            while(true)
            {
                bool found = false;
                foreach(var name in existingNames)
                {
                    if (name == finalName)
                    {
                        finalName = desiredName + suffix.ToString();
                        ++suffix;

                        found = true;
                        break;
                    }
                }

                if (!found || suffix == int.MaxValue) break;
            }

            return finalName;
        }
    }
}
