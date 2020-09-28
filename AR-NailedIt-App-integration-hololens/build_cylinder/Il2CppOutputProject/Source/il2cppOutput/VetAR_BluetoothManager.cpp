#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// VetAR_BluetoothManager.vetarManager
struct vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeField* U3CPrivateImplementationDetailsU3E_tFA42FDA7F4F90F3D6068EBEF179F9B15E5DC8D35____D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0_FieldInfo_var;
IL2CPP_EXTERN_C const uint32_t vetarManager__ctor_mE74373D404E06F4ED4F84258F47E785956965B1E_MetadataUsageId;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tE098B44B99FF6A8B90EEBE03291DC38B65978C36 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// VetAR_BluetoothManager.vetarManager
struct  vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A  : public RuntimeObject
{
public:
	// System.Single[] VetAR_BluetoothManager.vetarManager::drillBuffer
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___drillBuffer_0;
	// System.Single[] VetAR_BluetoothManager.vetarManager::handleBuffer
	SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* ___handleBuffer_1;
	// System.Boolean VetAR_BluetoothManager.vetarManager::isDrillActive
	bool ___isDrillActive_2;
	// System.Boolean VetAR_BluetoothManager.vetarManager::isHandleActive
	bool ___isHandleActive_3;
	// System.Byte[] VetAR_BluetoothManager.vetarManager::readSensorData
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___readSensorData_4;

public:
	inline static int32_t get_offset_of_drillBuffer_0() { return static_cast<int32_t>(offsetof(vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A, ___drillBuffer_0)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_drillBuffer_0() const { return ___drillBuffer_0; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_drillBuffer_0() { return &___drillBuffer_0; }
	inline void set_drillBuffer_0(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___drillBuffer_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___drillBuffer_0), (void*)value);
	}

	inline static int32_t get_offset_of_handleBuffer_1() { return static_cast<int32_t>(offsetof(vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A, ___handleBuffer_1)); }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* get_handleBuffer_1() const { return ___handleBuffer_1; }
	inline SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5** get_address_of_handleBuffer_1() { return &___handleBuffer_1; }
	inline void set_handleBuffer_1(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* value)
	{
		___handleBuffer_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___handleBuffer_1), (void*)value);
	}

	inline static int32_t get_offset_of_isDrillActive_2() { return static_cast<int32_t>(offsetof(vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A, ___isDrillActive_2)); }
	inline bool get_isDrillActive_2() const { return ___isDrillActive_2; }
	inline bool* get_address_of_isDrillActive_2() { return &___isDrillActive_2; }
	inline void set_isDrillActive_2(bool value)
	{
		___isDrillActive_2 = value;
	}

	inline static int32_t get_offset_of_isHandleActive_3() { return static_cast<int32_t>(offsetof(vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A, ___isHandleActive_3)); }
	inline bool get_isHandleActive_3() const { return ___isHandleActive_3; }
	inline bool* get_address_of_isHandleActive_3() { return &___isHandleActive_3; }
	inline void set_isHandleActive_3(bool value)
	{
		___isHandleActive_3 = value;
	}

	inline static int32_t get_offset_of_readSensorData_4() { return static_cast<int32_t>(offsetof(vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A, ___readSensorData_4)); }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* get_readSensorData_4() const { return ___readSensorData_4; }
	inline ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821** get_address_of_readSensorData_4() { return &___readSensorData_4; }
	inline void set_readSensorData_4(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* value)
	{
		___readSensorData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___readSensorData_4), (void*)value);
	}
};


// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D11
struct  __StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2 
{
public:
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2__padding[11];
	};

public:
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// <PrivateImplementationDetails>
struct  U3CPrivateImplementationDetailsU3E_tFA42FDA7F4F90F3D6068EBEF179F9B15E5DC8D35  : public RuntimeObject
{
public:

public:
};

struct U3CPrivateImplementationDetailsU3E_tFA42FDA7F4F90F3D6068EBEF179F9B15E5DC8D35_StaticFields
{
public:
	// <PrivateImplementationDetails>___StaticArrayInitTypeSizeU3D11 <PrivateImplementationDetails>::D1F70F5F3CB9163C05E7A2E57216B964056C7E8D
	__StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2  ___D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0;

public:
	inline static int32_t get_offset_of_D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0() { return static_cast<int32_t>(offsetof(U3CPrivateImplementationDetailsU3E_tFA42FDA7F4F90F3D6068EBEF179F9B15E5DC8D35_StaticFields, ___D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0)); }
	inline __StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2  get_D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0() const { return ___D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0; }
	inline __StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2 * get_address_of_D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0() { return &___D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0; }
	inline void set_D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0(__StaticArrayInitTypeSizeU3D11_t4F53E6700DEC9C9F0A2C71E69F89EA0AB26E23B2  value)
	{
		___D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0 = value;
	}
};


// System.RuntimeFieldHandle
struct  RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF 
{
public:
	// System.IntPtr System.RuntimeFieldHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};



// System.Void System.Runtime.CompilerServices.RuntimeHelpers::InitializeArray(System.Array,System.RuntimeFieldHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A (RuntimeArray * ___array0, RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  ___fldHandle1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VetAR_BluetoothManager.vetarManager::StartBleDeviceWatcher()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vetarManager_StartBleDeviceWatcher_mB3CDB613CF723F71FE383234F08A7EAC96882EA1 (vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VetAR_BluetoothManager.vetarManager::writeDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vetarManager_writeDataAsync_m5D22D80FE3835580975D9EA88A8A283B9B4556CE (vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VetAR_BluetoothManager.vetarManager::readDataAsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vetarManager_readDataAsync_mD0BE8A176DD3A3C914B598FE9633F3F0917CE5F0 (vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Void VetAR_BluetoothManager.vetarManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void vetarManager__ctor_mE74373D404E06F4ED4F84258F47E785956965B1E (vetarManager_t03695D4E26A7B1C926B8C43295D480FD2A9F300A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (vetarManager__ctor_mE74373D404E06F4ED4F84258F47E785956965B1E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_0 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_drillBuffer_0(L_0);
		SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5* L_1 = (SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5*)SZArrayNew(SingleU5BU5D_tA7139B7CAA40EAEF9178E2C386C8A5993754FDD5_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->set_handleBuffer_1(L_1);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_2 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)11));
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = L_2;
		RuntimeFieldHandle_t844BDF00E8E6FE69D9AEAA7657F09018B864F4EF  L_4 = { reinterpret_cast<intptr_t> (U3CPrivateImplementationDetailsU3E_tFA42FDA7F4F90F3D6068EBEF179F9B15E5DC8D35____D1F70F5F3CB9163C05E7A2E57216B964056C7E8D_0_FieldInfo_var) };
		RuntimeHelpers_InitializeArray_m29F50CDFEEE0AB868200291366253DD4737BC76A((RuntimeArray *)(RuntimeArray *)L_3, L_4, /*hidden argument*/NULL);
		__this->set_readSensorData_4(L_3);
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
