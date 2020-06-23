using UnityEngine;

namespace RTG
{
    public class ColorTransition
    {
        public enum State
        {
            /// <summary>
            /// This is the state the transition exists in after it has
            /// completed a fade-in operation.
            /// </summary>
            CompleteFadeIn,
            /// <summary>
            /// This is the state the transition exists in after it has
            /// completed a fade-out operation.
            /// </summary>
            CompleteFadeOut,
            /// <summary>
            /// The transition is fading in.
            /// </summary>
            FadingIn,
            /// <summary>
            /// The transition is fading out.
            /// </summary>
            FadingOut,
            /// <summary>
            /// The transition is in a ready state. This is the state in which the
            /// transition exists when it is created. After a fade is performed, 
            /// it can never go back to this state.
            /// </summary>
            Ready
        }

        public delegate void ColorTransitionBeginHandler(ColorTransition colorTransition);
        public event ColorTransitionBeginHandler TransitionBegin;

        public delegate void ColorTransitionEndHandler(ColorTransition colorTransition);
        public event ColorTransitionEndHandler TransitionEnd;

        private ColorRef _colorRef;
        private Color _fadeInColor;
        private Color _fadeOutColor;
        private State _state = State.Ready;
        private float _durationInSeconds;
        private float _elapsedTimeInSeconds;
        private bool _isActive;

        public State TransitionState { get { return _state; } }
        public Color FadeInColor { get { return _fadeInColor; } set { _fadeInColor = value; } }
        public Color FadeOutColor { get { return _fadeOutColor; } set { _fadeOutColor = value; } }
        public float DurationInSeconds { get { return _durationInSeconds; } set { _durationInSeconds = Mathf.Max(value, 0.0f); } }
        public bool IsActive { get { return _isActive; } }

        public ColorTransition(ColorRef colorRef)
        {
            _colorRef = colorRef;
            _fadeInColor = colorRef.Value;
            _fadeOutColor = colorRef.Value;
        }

        public void BeginFadeIn(bool startFromCurrentColor)
        {
            if (startFromCurrentColor) FadeOutColor = _colorRef.Value;
            _state = State.FadingIn;

            _isActive = true;
            _elapsedTimeInSeconds = 0.0f;

            if (TransitionBegin != null) TransitionBegin(this);
        }

        public void BeginFadeOut(bool startFromCurrentColor)
        {
            if (startFromCurrentColor) FadeInColor = _colorRef.Value;
            _state = State.FadingOut;

            _isActive = true;
            _elapsedTimeInSeconds = 0.0f;

            if (TransitionBegin != null) TransitionBegin(this);
        }

        public void Update(float elapsedTime)
        {
            if (!_isActive) return;

            Color sourceColor = _fadeOutColor;
            Color destColor = _fadeInColor;
            if(_state == State.FadingOut)
            {
                sourceColor = _fadeInColor;
                destColor = _fadeOutColor;
            }

            _elapsedTimeInSeconds += elapsedTime;
            _elapsedTimeInSeconds = Mathf.Clamp(_elapsedTimeInSeconds, 0.0f, _durationInSeconds);

            float t = _elapsedTimeInSeconds / _durationInSeconds;
            if (MathEx.AlmostEqual(t, 1.0f, 1e-4f))
            {
                _colorRef.Value = destColor;
                End();
            }
            else _colorRef.Value = Color.Lerp(sourceColor, destColor, t);
        }

        private void End()
        {
            if (_isActive)
            {
                _isActive = false;
                
                if (_state == State.FadingOut) _state = State.CompleteFadeOut;
                else if (_state == State.FadingIn) _state = State.CompleteFadeIn;

                if (TransitionEnd != null) TransitionEnd(this);
            }
        }
    }
}
