﻿#include "il2cpp-config.h"

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

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// UnityEngine.Texture2D
struct Texture2D_t3840446185;
// UnityEngine.Object
struct Object_t631007953;
// UnityEngine.DisallowMultipleComponent[]
struct DisallowMultipleComponentU5BU5D_t3936143868;
// UnityEngine.ExecuteInEditMode[]
struct ExecuteInEditModeU5BU5D_t3239458680;
// UnityEngine.RequireComponent[]
struct RequireComponentU5BU5D_t2245623724;
// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall>
struct List_1_t584821570;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t2498835369;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_t3050769227;
// System.Action`1<System.Boolean>
struct Action_1_t269755560;
// System.Action`2<System.Boolean,System.String>
struct Action_2_t1290832230;
// UnityEngine.SocialPlatforms.Impl.AchievementDescription[]
struct AchievementDescriptionU5BU5D_t1886727686;
// UnityEngine.SocialPlatforms.Impl.UserProfile[]
struct UserProfileU5BU5D_t1895532524;
// UnityEngine.SocialPlatforms.Impl.LocalUser
struct LocalUser_t365094499;
// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard>
struct List_1_t1309380474;
// UnityEngine.SendMouseEvents/HitInfo[]
struct HitInfoU5BU5D_t1685002053;
// UnityEngine.Camera[]
struct CameraU5BU5D_t1709987734;
// UnityEngine.RemoteSettings/UpdatedEventHandler
struct UpdatedEventHandler_t1027848393;
// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall>
struct List_1_t4176035766;
// UnityEngine.GameObject
struct GameObject_t1113636619;
// UnityEngine.Camera
struct Camera_t4157153871;
// UnityEngine.Events.UnityAction
struct UnityAction_t3245792599;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest>
struct Queue_1_t1200778106;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t2750080073;
// System.Threading.ManualResetEvent
struct ManualResetEvent_t451242010;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Type
struct Type_t;
// System.Void
struct Void_t1185182177;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct Leaderboard_t1065076763;
// UnityEngine.SocialPlatforms.IScore
struct IScore_t2559910621;
// UnityEngine.SocialPlatforms.IScore[]
struct IScoreU5BU5D_t527871248;
// System.String[]
struct StringU5BU5D_t1281789340;
// UnityEngine.Playables.PlayableBinding[]
struct PlayableBindingU5BU5D_t829358056;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// UnityEngine.Events.ArgumentCache
struct ArgumentCache_t2187958399;
// System.IAsyncResult
struct IAsyncResult_t767004451;
// System.AsyncCallback
struct AsyncCallback_t3962456242;
// UnityEngine.SocialPlatforms.IUserProfile[]
struct IUserProfileU5BU5D_t909679733;

struct Object_t631007953_marshaled_com;



#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef ACHIEVEMENTDESCRIPTION_T3217594527_H
#define ACHIEVEMENTDESCRIPTION_T3217594527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.AchievementDescription
struct  AchievementDescription_t3217594527  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Title
	String_t* ___m_Title_0;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Image
	Texture2D_t3840446185 * ___m_Image_1;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_AchievedDescription
	String_t* ___m_AchievedDescription_2;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_3;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Hidden
	bool ___m_Hidden_4;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.AchievementDescription::m_Points
	int32_t ___m_Points_5;
	// System.String UnityEngine.SocialPlatforms.Impl.AchievementDescription::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;

public:
	inline static int32_t get_offset_of_m_Title_0() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Title_0)); }
	inline String_t* get_m_Title_0() const { return ___m_Title_0; }
	inline String_t** get_address_of_m_Title_0() { return &___m_Title_0; }
	inline void set_m_Title_0(String_t* value)
	{
		___m_Title_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_0), value);
	}

	inline static int32_t get_offset_of_m_Image_1() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Image_1)); }
	inline Texture2D_t3840446185 * get_m_Image_1() const { return ___m_Image_1; }
	inline Texture2D_t3840446185 ** get_address_of_m_Image_1() { return &___m_Image_1; }
	inline void set_m_Image_1(Texture2D_t3840446185 * value)
	{
		___m_Image_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_1), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_2() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_AchievedDescription_2)); }
	inline String_t* get_m_AchievedDescription_2() const { return ___m_AchievedDescription_2; }
	inline String_t** get_address_of_m_AchievedDescription_2() { return &___m_AchievedDescription_2; }
	inline void set_m_AchievedDescription_2(String_t* value)
	{
		___m_AchievedDescription_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_2), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_3() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_UnachievedDescription_3)); }
	inline String_t* get_m_UnachievedDescription_3() const { return ___m_UnachievedDescription_3; }
	inline String_t** get_address_of_m_UnachievedDescription_3() { return &___m_UnachievedDescription_3; }
	inline void set_m_UnachievedDescription_3(String_t* value)
	{
		___m_UnachievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_Hidden_4() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Hidden_4)); }
	inline bool get_m_Hidden_4() const { return ___m_Hidden_4; }
	inline bool* get_address_of_m_Hidden_4() { return &___m_Hidden_4; }
	inline void set_m_Hidden_4(bool value)
	{
		___m_Hidden_4 = value;
	}

	inline static int32_t get_offset_of_m_Points_5() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___m_Points_5)); }
	inline int32_t get_m_Points_5() const { return ___m_Points_5; }
	inline int32_t* get_address_of_m_Points_5() { return &___m_Points_5; }
	inline void set_m_Points_5(int32_t value)
	{
		___m_Points_5 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(AchievementDescription_t3217594527, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENTDESCRIPTION_T3217594527_H
#ifndef ARGUMENTCACHE_T2187958399_H
#define ARGUMENTCACHE_T2187958399_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.ArgumentCache
struct  ArgumentCache_t2187958399  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.ArgumentCache::m_ObjectArgument
	Object_t631007953 * ___m_ObjectArgument_0;
	// System.String UnityEngine.Events.ArgumentCache::m_ObjectArgumentAssemblyTypeName
	String_t* ___m_ObjectArgumentAssemblyTypeName_1;
	// System.Int32 UnityEngine.Events.ArgumentCache::m_IntArgument
	int32_t ___m_IntArgument_2;
	// System.Single UnityEngine.Events.ArgumentCache::m_FloatArgument
	float ___m_FloatArgument_3;
	// System.String UnityEngine.Events.ArgumentCache::m_StringArgument
	String_t* ___m_StringArgument_4;
	// System.Boolean UnityEngine.Events.ArgumentCache::m_BoolArgument
	bool ___m_BoolArgument_5;

public:
	inline static int32_t get_offset_of_m_ObjectArgument_0() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_ObjectArgument_0)); }
	inline Object_t631007953 * get_m_ObjectArgument_0() const { return ___m_ObjectArgument_0; }
	inline Object_t631007953 ** get_address_of_m_ObjectArgument_0() { return &___m_ObjectArgument_0; }
	inline void set_m_ObjectArgument_0(Object_t631007953 * value)
	{
		___m_ObjectArgument_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgument_0), value);
	}

	inline static int32_t get_offset_of_m_ObjectArgumentAssemblyTypeName_1() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_ObjectArgumentAssemblyTypeName_1)); }
	inline String_t* get_m_ObjectArgumentAssemblyTypeName_1() const { return ___m_ObjectArgumentAssemblyTypeName_1; }
	inline String_t** get_address_of_m_ObjectArgumentAssemblyTypeName_1() { return &___m_ObjectArgumentAssemblyTypeName_1; }
	inline void set_m_ObjectArgumentAssemblyTypeName_1(String_t* value)
	{
		___m_ObjectArgumentAssemblyTypeName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ObjectArgumentAssemblyTypeName_1), value);
	}

	inline static int32_t get_offset_of_m_IntArgument_2() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_IntArgument_2)); }
	inline int32_t get_m_IntArgument_2() const { return ___m_IntArgument_2; }
	inline int32_t* get_address_of_m_IntArgument_2() { return &___m_IntArgument_2; }
	inline void set_m_IntArgument_2(int32_t value)
	{
		___m_IntArgument_2 = value;
	}

	inline static int32_t get_offset_of_m_FloatArgument_3() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_FloatArgument_3)); }
	inline float get_m_FloatArgument_3() const { return ___m_FloatArgument_3; }
	inline float* get_address_of_m_FloatArgument_3() { return &___m_FloatArgument_3; }
	inline void set_m_FloatArgument_3(float value)
	{
		___m_FloatArgument_3 = value;
	}

	inline static int32_t get_offset_of_m_StringArgument_4() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_StringArgument_4)); }
	inline String_t* get_m_StringArgument_4() const { return ___m_StringArgument_4; }
	inline String_t** get_address_of_m_StringArgument_4() { return &___m_StringArgument_4; }
	inline void set_m_StringArgument_4(String_t* value)
	{
		___m_StringArgument_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_StringArgument_4), value);
	}

	inline static int32_t get_offset_of_m_BoolArgument_5() { return static_cast<int32_t>(offsetof(ArgumentCache_t2187958399, ___m_BoolArgument_5)); }
	inline bool get_m_BoolArgument_5() const { return ___m_BoolArgument_5; }
	inline bool* get_address_of_m_BoolArgument_5() { return &___m_BoolArgument_5; }
	inline void set_m_BoolArgument_5(bool value)
	{
		___m_BoolArgument_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTCACHE_T2187958399_H
#ifndef BASEINVOKABLECALL_T2703961024_H
#define BASEINVOKABLECALL_T2703961024_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.BaseInvokableCall
struct  BaseInvokableCall_t2703961024  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BASEINVOKABLECALL_T2703961024_H
#ifndef ATTRIBUTEHELPERENGINE_T2735742303_H
#define ATTRIBUTEHELPERENGINE_T2735742303_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AttributeHelperEngine
struct  AttributeHelperEngine_t2735742303  : public RuntimeObject
{
public:

public:
};

struct AttributeHelperEngine_t2735742303_StaticFields
{
public:
	// UnityEngine.DisallowMultipleComponent[] UnityEngine.AttributeHelperEngine::_disallowMultipleComponentArray
	DisallowMultipleComponentU5BU5D_t3936143868* ____disallowMultipleComponentArray_0;
	// UnityEngine.ExecuteInEditMode[] UnityEngine.AttributeHelperEngine::_executeInEditModeArray
	ExecuteInEditModeU5BU5D_t3239458680* ____executeInEditModeArray_1;
	// UnityEngine.RequireComponent[] UnityEngine.AttributeHelperEngine::_requireComponentArray
	RequireComponentU5BU5D_t2245623724* ____requireComponentArray_2;

public:
	inline static int32_t get_offset_of__disallowMultipleComponentArray_0() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____disallowMultipleComponentArray_0)); }
	inline DisallowMultipleComponentU5BU5D_t3936143868* get__disallowMultipleComponentArray_0() const { return ____disallowMultipleComponentArray_0; }
	inline DisallowMultipleComponentU5BU5D_t3936143868** get_address_of__disallowMultipleComponentArray_0() { return &____disallowMultipleComponentArray_0; }
	inline void set__disallowMultipleComponentArray_0(DisallowMultipleComponentU5BU5D_t3936143868* value)
	{
		____disallowMultipleComponentArray_0 = value;
		Il2CppCodeGenWriteBarrier((&____disallowMultipleComponentArray_0), value);
	}

	inline static int32_t get_offset_of__executeInEditModeArray_1() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____executeInEditModeArray_1)); }
	inline ExecuteInEditModeU5BU5D_t3239458680* get__executeInEditModeArray_1() const { return ____executeInEditModeArray_1; }
	inline ExecuteInEditModeU5BU5D_t3239458680** get_address_of__executeInEditModeArray_1() { return &____executeInEditModeArray_1; }
	inline void set__executeInEditModeArray_1(ExecuteInEditModeU5BU5D_t3239458680* value)
	{
		____executeInEditModeArray_1 = value;
		Il2CppCodeGenWriteBarrier((&____executeInEditModeArray_1), value);
	}

	inline static int32_t get_offset_of__requireComponentArray_2() { return static_cast<int32_t>(offsetof(AttributeHelperEngine_t2735742303_StaticFields, ____requireComponentArray_2)); }
	inline RequireComponentU5BU5D_t2245623724* get__requireComponentArray_2() const { return ____requireComponentArray_2; }
	inline RequireComponentU5BU5D_t2245623724** get_address_of__requireComponentArray_2() { return &____requireComponentArray_2; }
	inline void set__requireComponentArray_2(RequireComponentU5BU5D_t2245623724* value)
	{
		____requireComponentArray_2 = value;
		Il2CppCodeGenWriteBarrier((&____requireComponentArray_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTEHELPERENGINE_T2735742303_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef SETUPCOROUTINE_T2062820429_H
#define SETUPCOROUTINE_T2062820429_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SetupCoroutine
struct  SetupCoroutine_t2062820429  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SETUPCOROUTINE_T2062820429_H
#ifndef ATTRIBUTE_T861562559_H
#define ATTRIBUTE_T861562559_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Attribute
struct  Attribute_t861562559  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTE_T861562559_H
#ifndef PERSISTENTCALLGROUP_T3050769227_H
#define PERSISTENTCALLGROUP_T3050769227_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCallGroup
struct  PersistentCallGroup_t3050769227  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.PersistentCall> UnityEngine.Events.PersistentCallGroup::m_Calls
	List_1_t584821570 * ___m_Calls_0;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(PersistentCallGroup_t3050769227, ___m_Calls_0)); }
	inline List_1_t584821570 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline List_1_t584821570 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(List_1_t584821570 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALLGROUP_T3050769227_H
#ifndef EXCEPTION_T1436737249_H
#define EXCEPTION_T1436737249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t1436737249  : public RuntimeObject
{
public:
	// System.IntPtr[] System.Exception::trace_ips
	IntPtrU5BU5D_t4013366056* ___trace_ips_0;
	// System.Exception System.Exception::inner_exception
	Exception_t1436737249 * ___inner_exception_1;
	// System.String System.Exception::message
	String_t* ___message_2;
	// System.String System.Exception::help_link
	String_t* ___help_link_3;
	// System.String System.Exception::class_name
	String_t* ___class_name_4;
	// System.String System.Exception::stack_trace
	String_t* ___stack_trace_5;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_6;
	// System.Int32 System.Exception::remote_stack_index
	int32_t ___remote_stack_index_7;
	// System.Int32 System.Exception::hresult
	int32_t ___hresult_8;
	// System.String System.Exception::source
	String_t* ___source_9;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_10;

public:
	inline static int32_t get_offset_of_trace_ips_0() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___trace_ips_0)); }
	inline IntPtrU5BU5D_t4013366056* get_trace_ips_0() const { return ___trace_ips_0; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_trace_ips_0() { return &___trace_ips_0; }
	inline void set_trace_ips_0(IntPtrU5BU5D_t4013366056* value)
	{
		___trace_ips_0 = value;
		Il2CppCodeGenWriteBarrier((&___trace_ips_0), value);
	}

	inline static int32_t get_offset_of_inner_exception_1() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___inner_exception_1)); }
	inline Exception_t1436737249 * get_inner_exception_1() const { return ___inner_exception_1; }
	inline Exception_t1436737249 ** get_address_of_inner_exception_1() { return &___inner_exception_1; }
	inline void set_inner_exception_1(Exception_t1436737249 * value)
	{
		___inner_exception_1 = value;
		Il2CppCodeGenWriteBarrier((&___inner_exception_1), value);
	}

	inline static int32_t get_offset_of_message_2() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___message_2)); }
	inline String_t* get_message_2() const { return ___message_2; }
	inline String_t** get_address_of_message_2() { return &___message_2; }
	inline void set_message_2(String_t* value)
	{
		___message_2 = value;
		Il2CppCodeGenWriteBarrier((&___message_2), value);
	}

	inline static int32_t get_offset_of_help_link_3() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___help_link_3)); }
	inline String_t* get_help_link_3() const { return ___help_link_3; }
	inline String_t** get_address_of_help_link_3() { return &___help_link_3; }
	inline void set_help_link_3(String_t* value)
	{
		___help_link_3 = value;
		Il2CppCodeGenWriteBarrier((&___help_link_3), value);
	}

	inline static int32_t get_offset_of_class_name_4() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___class_name_4)); }
	inline String_t* get_class_name_4() const { return ___class_name_4; }
	inline String_t** get_address_of_class_name_4() { return &___class_name_4; }
	inline void set_class_name_4(String_t* value)
	{
		___class_name_4 = value;
		Il2CppCodeGenWriteBarrier((&___class_name_4), value);
	}

	inline static int32_t get_offset_of_stack_trace_5() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___stack_trace_5)); }
	inline String_t* get_stack_trace_5() const { return ___stack_trace_5; }
	inline String_t** get_address_of_stack_trace_5() { return &___stack_trace_5; }
	inline void set_stack_trace_5(String_t* value)
	{
		___stack_trace_5 = value;
		Il2CppCodeGenWriteBarrier((&___stack_trace_5), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_6() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____remoteStackTraceString_6)); }
	inline String_t* get__remoteStackTraceString_6() const { return ____remoteStackTraceString_6; }
	inline String_t** get_address_of__remoteStackTraceString_6() { return &____remoteStackTraceString_6; }
	inline void set__remoteStackTraceString_6(String_t* value)
	{
		____remoteStackTraceString_6 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_6), value);
	}

	inline static int32_t get_offset_of_remote_stack_index_7() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___remote_stack_index_7)); }
	inline int32_t get_remote_stack_index_7() const { return ___remote_stack_index_7; }
	inline int32_t* get_address_of_remote_stack_index_7() { return &___remote_stack_index_7; }
	inline void set_remote_stack_index_7(int32_t value)
	{
		___remote_stack_index_7 = value;
	}

	inline static int32_t get_offset_of_hresult_8() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___hresult_8)); }
	inline int32_t get_hresult_8() const { return ___hresult_8; }
	inline int32_t* get_address_of_hresult_8() { return &___hresult_8; }
	inline void set_hresult_8(int32_t value)
	{
		___hresult_8 = value;
	}

	inline static int32_t get_offset_of_source_9() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ___source_9)); }
	inline String_t* get_source_9() const { return ___source_9; }
	inline String_t** get_address_of_source_9() { return &___source_9; }
	inline void set_source_9(String_t* value)
	{
		___source_9 = value;
		Il2CppCodeGenWriteBarrier((&___source_9), value);
	}

	inline static int32_t get_offset_of__data_10() { return static_cast<int32_t>(offsetof(Exception_t1436737249, ____data_10)); }
	inline RuntimeObject* get__data_10() const { return ____data_10; }
	inline RuntimeObject** get_address_of__data_10() { return &____data_10; }
	inline void set__data_10(RuntimeObject* value)
	{
		____data_10 = value;
		Il2CppCodeGenWriteBarrier((&____data_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXCEPTION_T1436737249_H
#ifndef SYNCHRONIZATIONCONTEXT_T2326897723_H
#define SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Threading.SynchronizationContext
struct  SynchronizationContext_t2326897723  : public RuntimeObject
{
public:

public:
};

struct SynchronizationContext_t2326897723_ThreadStaticFields
{
public:
	// System.Threading.SynchronizationContext System.Threading.SynchronizationContext::currentContext
	SynchronizationContext_t2326897723 * ___currentContext_0;

public:
	inline static int32_t get_offset_of_currentContext_0() { return static_cast<int32_t>(offsetof(SynchronizationContext_t2326897723_ThreadStaticFields, ___currentContext_0)); }
	inline SynchronizationContext_t2326897723 * get_currentContext_0() const { return ___currentContext_0; }
	inline SynchronizationContext_t2326897723 ** get_address_of_currentContext_0() { return &___currentContext_0; }
	inline void set_currentContext_0(SynchronizationContext_t2326897723 * value)
	{
		___currentContext_0 = value;
		Il2CppCodeGenWriteBarrier((&___currentContext_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYNCHRONIZATIONCONTEXT_T2326897723_H
#ifndef STACKTRACEUTILITY_T3465565809_H
#define STACKTRACEUTILITY_T3465565809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.StackTraceUtility
struct  StackTraceUtility_t3465565809  : public RuntimeObject
{
public:

public:
};

struct StackTraceUtility_t3465565809_StaticFields
{
public:
	// System.String UnityEngine.StackTraceUtility::projectFolder
	String_t* ___projectFolder_0;

public:
	inline static int32_t get_offset_of_projectFolder_0() { return static_cast<int32_t>(offsetof(StackTraceUtility_t3465565809_StaticFields, ___projectFolder_0)); }
	inline String_t* get_projectFolder_0() const { return ___projectFolder_0; }
	inline String_t** get_address_of_projectFolder_0() { return &___projectFolder_0; }
	inline void set_projectFolder_0(String_t* value)
	{
		___projectFolder_0 = value;
		Il2CppCodeGenWriteBarrier((&___projectFolder_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STACKTRACEUTILITY_T3465565809_H
#ifndef UNITYEVENTBASE_T3960448221_H
#define UNITYEVENTBASE_T3960448221_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventBase
struct  UnityEventBase_t3960448221  : public RuntimeObject
{
public:
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t2498835369 * ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_t3050769227 * ___m_PersistentCalls_1;
	// System.String UnityEngine.Events.UnityEventBase::m_TypeName
	String_t* ___m_TypeName_2;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_3;

public:
	inline static int32_t get_offset_of_m_Calls_0() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_Calls_0)); }
	inline InvokableCallList_t2498835369 * get_m_Calls_0() const { return ___m_Calls_0; }
	inline InvokableCallList_t2498835369 ** get_address_of_m_Calls_0() { return &___m_Calls_0; }
	inline void set_m_Calls_0(InvokableCallList_t2498835369 * value)
	{
		___m_Calls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Calls_0), value);
	}

	inline static int32_t get_offset_of_m_PersistentCalls_1() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_PersistentCalls_1)); }
	inline PersistentCallGroup_t3050769227 * get_m_PersistentCalls_1() const { return ___m_PersistentCalls_1; }
	inline PersistentCallGroup_t3050769227 ** get_address_of_m_PersistentCalls_1() { return &___m_PersistentCalls_1; }
	inline void set_m_PersistentCalls_1(PersistentCallGroup_t3050769227 * value)
	{
		___m_PersistentCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_1), value);
	}

	inline static int32_t get_offset_of_m_TypeName_2() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_TypeName_2)); }
	inline String_t* get_m_TypeName_2() const { return ___m_TypeName_2; }
	inline String_t** get_address_of_m_TypeName_2() { return &___m_TypeName_2; }
	inline void set_m_TypeName_2(String_t* value)
	{
		___m_TypeName_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_TypeName_2), value);
	}

	inline static int32_t get_offset_of_m_CallsDirty_3() { return static_cast<int32_t>(offsetof(UnityEventBase_t3960448221, ___m_CallsDirty_3)); }
	inline bool get_m_CallsDirty_3() const { return ___m_CallsDirty_3; }
	inline bool* get_address_of_m_CallsDirty_3() { return &___m_CallsDirty_3; }
	inline void set_m_CallsDirty_3(bool value)
	{
		___m_CallsDirty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTBASE_T3960448221_H
#ifndef U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T1940008395_H
#define U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T1940008395_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0
struct  U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t1940008395  : public RuntimeObject
{
public:
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform/<UnityEngine_SocialPlatforms_ISocialPlatform_Authenticate>c__AnonStorey0::callback
	Action_1_t269755560 * ___callback_0;

public:
	inline static int32_t get_offset_of_callback_0() { return static_cast<int32_t>(offsetof(U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t1940008395, ___callback_0)); }
	inline Action_1_t269755560 * get_callback_0() const { return ___callback_0; }
	inline Action_1_t269755560 ** get_address_of_callback_0() { return &___callback_0; }
	inline void set_callback_0(Action_1_t269755560 * value)
	{
		___callback_0 = value;
		Il2CppCodeGenWriteBarrier((&___callback_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CUNITYENGINE_SOCIALPLATFORMS_ISOCIALPLATFORM_AUTHENTICATEU3EC__ANONSTOREY0_T1940008395_H
#ifndef GAMECENTERPLATFORM_T2679391364_H
#define GAMECENTERPLATFORM_T2679391364_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform
struct  GameCenterPlatform_t2679391364  : public RuntimeObject
{
public:

public:
};

struct GameCenterPlatform_t2679391364_StaticFields
{
public:
	// System.Action`2<System.Boolean,System.String> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_AuthenticateCallback
	Action_2_t1290832230 * ___s_AuthenticateCallback_0;
	// UnityEngine.SocialPlatforms.Impl.AchievementDescription[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_adCache
	AchievementDescriptionU5BU5D_t1886727686* ___s_adCache_1;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_friends
	UserProfileU5BU5D_t1895532524* ___s_friends_2;
	// UnityEngine.SocialPlatforms.Impl.UserProfile[] UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_users
	UserProfileU5BU5D_t1895532524* ___s_users_3;
	// System.Action`1<System.Boolean> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::s_ResetAchievements
	Action_1_t269755560 * ___s_ResetAchievements_4;
	// UnityEngine.SocialPlatforms.Impl.LocalUser UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_LocalUser
	LocalUser_t365094499 * ___m_LocalUser_5;
	// System.Collections.Generic.List`1<UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard> UnityEngine.SocialPlatforms.GameCenter.GameCenterPlatform::m_GcBoards
	List_1_t1309380474 * ___m_GcBoards_6;

public:
	inline static int32_t get_offset_of_s_AuthenticateCallback_0() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___s_AuthenticateCallback_0)); }
	inline Action_2_t1290832230 * get_s_AuthenticateCallback_0() const { return ___s_AuthenticateCallback_0; }
	inline Action_2_t1290832230 ** get_address_of_s_AuthenticateCallback_0() { return &___s_AuthenticateCallback_0; }
	inline void set_s_AuthenticateCallback_0(Action_2_t1290832230 * value)
	{
		___s_AuthenticateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_AuthenticateCallback_0), value);
	}

	inline static int32_t get_offset_of_s_adCache_1() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___s_adCache_1)); }
	inline AchievementDescriptionU5BU5D_t1886727686* get_s_adCache_1() const { return ___s_adCache_1; }
	inline AchievementDescriptionU5BU5D_t1886727686** get_address_of_s_adCache_1() { return &___s_adCache_1; }
	inline void set_s_adCache_1(AchievementDescriptionU5BU5D_t1886727686* value)
	{
		___s_adCache_1 = value;
		Il2CppCodeGenWriteBarrier((&___s_adCache_1), value);
	}

	inline static int32_t get_offset_of_s_friends_2() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___s_friends_2)); }
	inline UserProfileU5BU5D_t1895532524* get_s_friends_2() const { return ___s_friends_2; }
	inline UserProfileU5BU5D_t1895532524** get_address_of_s_friends_2() { return &___s_friends_2; }
	inline void set_s_friends_2(UserProfileU5BU5D_t1895532524* value)
	{
		___s_friends_2 = value;
		Il2CppCodeGenWriteBarrier((&___s_friends_2), value);
	}

	inline static int32_t get_offset_of_s_users_3() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___s_users_3)); }
	inline UserProfileU5BU5D_t1895532524* get_s_users_3() const { return ___s_users_3; }
	inline UserProfileU5BU5D_t1895532524** get_address_of_s_users_3() { return &___s_users_3; }
	inline void set_s_users_3(UserProfileU5BU5D_t1895532524* value)
	{
		___s_users_3 = value;
		Il2CppCodeGenWriteBarrier((&___s_users_3), value);
	}

	inline static int32_t get_offset_of_s_ResetAchievements_4() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___s_ResetAchievements_4)); }
	inline Action_1_t269755560 * get_s_ResetAchievements_4() const { return ___s_ResetAchievements_4; }
	inline Action_1_t269755560 ** get_address_of_s_ResetAchievements_4() { return &___s_ResetAchievements_4; }
	inline void set_s_ResetAchievements_4(Action_1_t269755560 * value)
	{
		___s_ResetAchievements_4 = value;
		Il2CppCodeGenWriteBarrier((&___s_ResetAchievements_4), value);
	}

	inline static int32_t get_offset_of_m_LocalUser_5() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___m_LocalUser_5)); }
	inline LocalUser_t365094499 * get_m_LocalUser_5() const { return ___m_LocalUser_5; }
	inline LocalUser_t365094499 ** get_address_of_m_LocalUser_5() { return &___m_LocalUser_5; }
	inline void set_m_LocalUser_5(LocalUser_t365094499 * value)
	{
		___m_LocalUser_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUser_5), value);
	}

	inline static int32_t get_offset_of_m_GcBoards_6() { return static_cast<int32_t>(offsetof(GameCenterPlatform_t2679391364_StaticFields, ___m_GcBoards_6)); }
	inline List_1_t1309380474 * get_m_GcBoards_6() const { return ___m_GcBoards_6; }
	inline List_1_t1309380474 ** get_address_of_m_GcBoards_6() { return &___m_GcBoards_6; }
	inline void set_m_GcBoards_6(List_1_t1309380474 * value)
	{
		___m_GcBoards_6 = value;
		Il2CppCodeGenWriteBarrier((&___m_GcBoards_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GAMECENTERPLATFORM_T2679391364_H
#ifndef SENDMOUSEEVENTS_T3273302915_H
#define SENDMOUSEEVENTS_T3273302915_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents
struct  SendMouseEvents_t3273302915  : public RuntimeObject
{
public:

public:
};

struct SendMouseEvents_t3273302915_StaticFields
{
public:
	// System.Boolean UnityEngine.SendMouseEvents::s_MouseUsed
	bool ___s_MouseUsed_0;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_LastHit
	HitInfoU5BU5D_t1685002053* ___m_LastHit_1;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_MouseDownHit
	HitInfoU5BU5D_t1685002053* ___m_MouseDownHit_2;
	// UnityEngine.SendMouseEvents/HitInfo[] UnityEngine.SendMouseEvents::m_CurrentHit
	HitInfoU5BU5D_t1685002053* ___m_CurrentHit_3;
	// UnityEngine.Camera[] UnityEngine.SendMouseEvents::m_Cameras
	CameraU5BU5D_t1709987734* ___m_Cameras_4;

public:
	inline static int32_t get_offset_of_s_MouseUsed_0() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___s_MouseUsed_0)); }
	inline bool get_s_MouseUsed_0() const { return ___s_MouseUsed_0; }
	inline bool* get_address_of_s_MouseUsed_0() { return &___s_MouseUsed_0; }
	inline void set_s_MouseUsed_0(bool value)
	{
		___s_MouseUsed_0 = value;
	}

	inline static int32_t get_offset_of_m_LastHit_1() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_LastHit_1)); }
	inline HitInfoU5BU5D_t1685002053* get_m_LastHit_1() const { return ___m_LastHit_1; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_LastHit_1() { return &___m_LastHit_1; }
	inline void set_m_LastHit_1(HitInfoU5BU5D_t1685002053* value)
	{
		___m_LastHit_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LastHit_1), value);
	}

	inline static int32_t get_offset_of_m_MouseDownHit_2() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_MouseDownHit_2)); }
	inline HitInfoU5BU5D_t1685002053* get_m_MouseDownHit_2() const { return ___m_MouseDownHit_2; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_MouseDownHit_2() { return &___m_MouseDownHit_2; }
	inline void set_m_MouseDownHit_2(HitInfoU5BU5D_t1685002053* value)
	{
		___m_MouseDownHit_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_MouseDownHit_2), value);
	}

	inline static int32_t get_offset_of_m_CurrentHit_3() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_CurrentHit_3)); }
	inline HitInfoU5BU5D_t1685002053* get_m_CurrentHit_3() const { return ___m_CurrentHit_3; }
	inline HitInfoU5BU5D_t1685002053** get_address_of_m_CurrentHit_3() { return &___m_CurrentHit_3; }
	inline void set_m_CurrentHit_3(HitInfoU5BU5D_t1685002053* value)
	{
		___m_CurrentHit_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_CurrentHit_3), value);
	}

	inline static int32_t get_offset_of_m_Cameras_4() { return static_cast<int32_t>(offsetof(SendMouseEvents_t3273302915_StaticFields, ___m_Cameras_4)); }
	inline CameraU5BU5D_t1709987734* get_m_Cameras_4() const { return ___m_Cameras_4; }
	inline CameraU5BU5D_t1709987734** get_address_of_m_Cameras_4() { return &___m_Cameras_4; }
	inline void set_m_Cameras_4(CameraU5BU5D_t1709987734* value)
	{
		___m_Cameras_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Cameras_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMOUSEEVENTS_T3273302915_H
#ifndef UNITYSTRING_T1423233093_H
#define UNITYSTRING_T1423233093_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityString
struct  UnityString_t1423233093  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSTRING_T1423233093_H
#ifndef CLASSLIBRARYINITIALIZER_T2339504045_H
#define CLASSLIBRARYINITIALIZER_T2339504045_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ClassLibraryInitializer
struct  ClassLibraryInitializer_t2339504045  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CLASSLIBRARYINITIALIZER_T2339504045_H
#ifndef REMOTESETTINGS_T1718627291_H
#define REMOTESETTINGS_T1718627291_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings
struct  RemoteSettings_t1718627291  : public RuntimeObject
{
public:

public:
};

struct RemoteSettings_t1718627291_StaticFields
{
public:
	// UnityEngine.RemoteSettings/UpdatedEventHandler UnityEngine.RemoteSettings::Updated
	UpdatedEventHandler_t1027848393 * ___Updated_0;

public:
	inline static int32_t get_offset_of_Updated_0() { return static_cast<int32_t>(offsetof(RemoteSettings_t1718627291_StaticFields, ___Updated_0)); }
	inline UpdatedEventHandler_t1027848393 * get_Updated_0() const { return ___Updated_0; }
	inline UpdatedEventHandler_t1027848393 ** get_address_of_Updated_0() { return &___Updated_0; }
	inline void set_Updated_0(UpdatedEventHandler_t1027848393 * value)
	{
		___Updated_0 = value;
		Il2CppCodeGenWriteBarrier((&___Updated_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REMOTESETTINGS_T1718627291_H
#ifndef INVOKABLECALLLIST_T2498835369_H
#define INVOKABLECALLLIST_T2498835369_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCallList
struct  InvokableCallList_t2498835369  : public RuntimeObject
{
public:
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_PersistentCalls
	List_1_t4176035766 * ___m_PersistentCalls_0;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_RuntimeCalls
	List_1_t4176035766 * ___m_RuntimeCalls_1;
	// System.Collections.Generic.List`1<UnityEngine.Events.BaseInvokableCall> UnityEngine.Events.InvokableCallList::m_ExecutingCalls
	List_1_t4176035766 * ___m_ExecutingCalls_2;
	// System.Boolean UnityEngine.Events.InvokableCallList::m_NeedsUpdate
	bool ___m_NeedsUpdate_3;

public:
	inline static int32_t get_offset_of_m_PersistentCalls_0() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_PersistentCalls_0)); }
	inline List_1_t4176035766 * get_m_PersistentCalls_0() const { return ___m_PersistentCalls_0; }
	inline List_1_t4176035766 ** get_address_of_m_PersistentCalls_0() { return &___m_PersistentCalls_0; }
	inline void set_m_PersistentCalls_0(List_1_t4176035766 * value)
	{
		___m_PersistentCalls_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_PersistentCalls_0), value);
	}

	inline static int32_t get_offset_of_m_RuntimeCalls_1() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_RuntimeCalls_1)); }
	inline List_1_t4176035766 * get_m_RuntimeCalls_1() const { return ___m_RuntimeCalls_1; }
	inline List_1_t4176035766 ** get_address_of_m_RuntimeCalls_1() { return &___m_RuntimeCalls_1; }
	inline void set_m_RuntimeCalls_1(List_1_t4176035766 * value)
	{
		___m_RuntimeCalls_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_RuntimeCalls_1), value);
	}

	inline static int32_t get_offset_of_m_ExecutingCalls_2() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_ExecutingCalls_2)); }
	inline List_1_t4176035766 * get_m_ExecutingCalls_2() const { return ___m_ExecutingCalls_2; }
	inline List_1_t4176035766 ** get_address_of_m_ExecutingCalls_2() { return &___m_ExecutingCalls_2; }
	inline void set_m_ExecutingCalls_2(List_1_t4176035766 * value)
	{
		___m_ExecutingCalls_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_ExecutingCalls_2), value);
	}

	inline static int32_t get_offset_of_m_NeedsUpdate_3() { return static_cast<int32_t>(offsetof(InvokableCallList_t2498835369, ___m_NeedsUpdate_3)); }
	inline bool get_m_NeedsUpdate_3() const { return ___m_NeedsUpdate_3; }
	inline bool* get_address_of_m_NeedsUpdate_3() { return &___m_NeedsUpdate_3; }
	inline void set_m_NeedsUpdate_3(bool value)
	{
		___m_NeedsUpdate_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALLLIST_T2498835369_H
#ifndef SERIALIZEFIELD_T3286833614_H
#define SERIALIZEFIELD_T3286833614_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializeField
struct  SerializeField_t3286833614  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEFIELD_T3286833614_H
#ifndef NATIVECONTAINERATTRIBUTE_T2600515814_H
#define NATIVECONTAINERATTRIBUTE_T2600515814_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerAttribute
struct  NativeContainerAttribute_t2600515814  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERATTRIBUTE_T2600515814_H
#ifndef RECT_T2360479859_H
#define RECT_T2360479859_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Rect
struct  Rect_t2360479859 
{
public:
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;

public:
	inline static int32_t get_offset_of_m_XMin_0() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_XMin_0)); }
	inline float get_m_XMin_0() const { return ___m_XMin_0; }
	inline float* get_address_of_m_XMin_0() { return &___m_XMin_0; }
	inline void set_m_XMin_0(float value)
	{
		___m_XMin_0 = value;
	}

	inline static int32_t get_offset_of_m_YMin_1() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_YMin_1)); }
	inline float get_m_YMin_1() const { return ___m_YMin_1; }
	inline float* get_address_of_m_YMin_1() { return &___m_YMin_1; }
	inline void set_m_YMin_1(float value)
	{
		___m_YMin_1 = value;
	}

	inline static int32_t get_offset_of_m_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Width_2)); }
	inline float get_m_Width_2() const { return ___m_Width_2; }
	inline float* get_address_of_m_Width_2() { return &___m_Width_2; }
	inline void set_m_Width_2(float value)
	{
		___m_Width_2 = value;
	}

	inline static int32_t get_offset_of_m_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2360479859, ___m_Height_3)); }
	inline float get_m_Height_3() const { return ___m_Height_3; }
	inline float* get_address_of_m_Height_3() { return &___m_Height_3; }
	inline void set_m_Height_3(float value)
	{
		___m_Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2360479859_H
#ifndef HITINFO_T3229609740_H
#define HITINFO_T3229609740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMouseEvents/HitInfo
struct  HitInfo_t3229609740 
{
public:
	// UnityEngine.GameObject UnityEngine.SendMouseEvents/HitInfo::target
	GameObject_t1113636619 * ___target_0;
	// UnityEngine.Camera UnityEngine.SendMouseEvents/HitInfo::camera
	Camera_t4157153871 * ___camera_1;

public:
	inline static int32_t get_offset_of_target_0() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___target_0)); }
	inline GameObject_t1113636619 * get_target_0() const { return ___target_0; }
	inline GameObject_t1113636619 ** get_address_of_target_0() { return &___target_0; }
	inline void set_target_0(GameObject_t1113636619 * value)
	{
		___target_0 = value;
		Il2CppCodeGenWriteBarrier((&___target_0), value);
	}

	inline static int32_t get_offset_of_camera_1() { return static_cast<int32_t>(offsetof(HitInfo_t3229609740, ___camera_1)); }
	inline Camera_t4157153871 * get_camera_1() const { return ___camera_1; }
	inline Camera_t4157153871 ** get_address_of_camera_1() { return &___camera_1; }
	inline void set_camera_1(Camera_t4157153871 * value)
	{
		___camera_1 = value;
		Il2CppCodeGenWriteBarrier((&___camera_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_pinvoke
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
// Native definition for COM marshalling of UnityEngine.SendMouseEvents/HitInfo
struct HitInfo_t3229609740_marshaled_com
{
	GameObject_t1113636619 * ___target_0;
	Camera_t4157153871 * ___camera_1;
};
#endif // HITINFO_T3229609740_H
#ifndef SERIALIZEPRIVATEVARIABLES_T3872960625_H
#define SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SerializePrivateVariables
struct  SerializePrivateVariables_t3872960625  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SERIALIZEPRIVATEVARIABLES_T3872960625_H
#ifndef PREFERBINARYSERIALIZATION_T2906007930_H
#define PREFERBINARYSERIALIZATION_T2906007930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.PreferBinarySerialization
struct  PreferBinarySerialization_t2906007930  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PREFERBINARYSERIALIZATION_T2906007930_H
#ifndef INVOKABLECALL_T832123510_H
#define INVOKABLECALL_T832123510_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.InvokableCall
struct  InvokableCall_t832123510  : public BaseInvokableCall_t2703961024
{
public:
	// UnityEngine.Events.UnityAction UnityEngine.Events.InvokableCall::Delegate
	UnityAction_t3245792599 * ___Delegate_0;

public:
	inline static int32_t get_offset_of_Delegate_0() { return static_cast<int32_t>(offsetof(InvokableCall_t832123510, ___Delegate_0)); }
	inline UnityAction_t3245792599 * get_Delegate_0() const { return ___Delegate_0; }
	inline UnityAction_t3245792599 ** get_address_of_Delegate_0() { return &___Delegate_0; }
	inline void set_Delegate_0(UnityAction_t3245792599 * value)
	{
		___Delegate_0 = value;
		Il2CppCodeGenWriteBarrier((&___Delegate_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVOKABLECALL_T832123510_H
#ifndef UNITYEXCEPTION_T3598173660_H
#define UNITYEXCEPTION_T3598173660_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnityException
struct  UnityException_t3598173660  : public Exception_t1436737249
{
public:
	// System.String UnityEngine.UnityException::unityStackTrace
	String_t* ___unityStackTrace_12;

public:
	inline static int32_t get_offset_of_unityStackTrace_12() { return static_cast<int32_t>(offsetof(UnityException_t3598173660, ___unityStackTrace_12)); }
	inline String_t* get_unityStackTrace_12() const { return ___unityStackTrace_12; }
	inline String_t** get_address_of_unityStackTrace_12() { return &___unityStackTrace_12; }
	inline void set_unityStackTrace_12(String_t* value)
	{
		___unityStackTrace_12 = value;
		Il2CppCodeGenWriteBarrier((&___unityStackTrace_12), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEXCEPTION_T3598173660_H
#ifndef DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#define DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.DeallocateOnJobCompletionAttribute
struct  DeallocateOnJobCompletionAttribute_t3131681843  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEALLOCATEONJOBCOMPLETIONATTRIBUTE_T3131681843_H
#ifndef WRITEONLYATTRIBUTE_T595109273_H
#define WRITEONLYATTRIBUTE_T595109273_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.WriteOnlyAttribute
struct  WriteOnlyAttribute_t595109273  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITEONLYATTRIBUTE_T595109273_H
#ifndef READWRITEATTRIBUTE_T306517538_H
#define READWRITEATTRIBUTE_T306517538_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadWriteAttribute
struct  ReadWriteAttribute_t306517538  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READWRITEATTRIBUTE_T306517538_H
#ifndef READONLYATTRIBUTE_T2029203740_H
#define READONLYATTRIBUTE_T2029203740_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.ReadOnlyAttribute
struct  ReadOnlyAttribute_t2029203740  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYATTRIBUTE_T2029203740_H
#ifndef UNITYEVENT_T2581268647_H
#define UNITYEVENT_T2581268647_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEvent
struct  UnityEvent_t2581268647  : public UnityEventBase_t3960448221
{
public:
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t2843939325* ___m_InvokeArray_4;

public:
	inline static int32_t get_offset_of_m_InvokeArray_4() { return static_cast<int32_t>(offsetof(UnityEvent_t2581268647, ___m_InvokeArray_4)); }
	inline ObjectU5BU5D_t2843939325* get_m_InvokeArray_4() const { return ___m_InvokeArray_4; }
	inline ObjectU5BU5D_t2843939325** get_address_of_m_InvokeArray_4() { return &___m_InvokeArray_4; }
	inline void set_m_InvokeArray_4(ObjectU5BU5D_t2843939325* value)
	{
		___m_InvokeArray_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_InvokeArray_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENT_T2581268647_H
#ifndef UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#define UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext
struct  UnitySynchronizationContext_t1887453786  : public SynchronizationContext_t2326897723
{
public:
	// System.Collections.Generic.Queue`1<UnityEngine.UnitySynchronizationContext/WorkRequest> UnityEngine.UnitySynchronizationContext::m_AsyncWorkQueue
	Queue_1_t1200778106 * ___m_AsyncWorkQueue_1;
	// System.Int32 UnityEngine.UnitySynchronizationContext::m_MainThreadID
	int32_t ___m_MainThreadID_2;

public:
	inline static int32_t get_offset_of_m_AsyncWorkQueue_1() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_AsyncWorkQueue_1)); }
	inline Queue_1_t1200778106 * get_m_AsyncWorkQueue_1() const { return ___m_AsyncWorkQueue_1; }
	inline Queue_1_t1200778106 ** get_address_of_m_AsyncWorkQueue_1() { return &___m_AsyncWorkQueue_1; }
	inline void set_m_AsyncWorkQueue_1(Queue_1_t1200778106 * value)
	{
		___m_AsyncWorkQueue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_AsyncWorkQueue_1), value);
	}

	inline static int32_t get_offset_of_m_MainThreadID_2() { return static_cast<int32_t>(offsetof(UnitySynchronizationContext_t1887453786, ___m_MainThreadID_2)); }
	inline int32_t get_m_MainThreadID_2() const { return ___m_MainThreadID_2; }
	inline int32_t* get_address_of_m_MainThreadID_2() { return &___m_MainThreadID_2; }
	inline void set_m_MainThreadID_2(int32_t value)
	{
		___m_MainThreadID_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYSYNCHRONIZATIONCONTEXT_T1887453786_H
#ifndef WORKREQUEST_T1354518612_H
#define WORKREQUEST_T1354518612_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.UnitySynchronizationContext/WorkRequest
struct  WorkRequest_t1354518612 
{
public:
	// System.Threading.SendOrPostCallback UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateCallback
	SendOrPostCallback_t2750080073 * ___m_DelagateCallback_0;
	// System.Object UnityEngine.UnitySynchronizationContext/WorkRequest::m_DelagateState
	RuntimeObject * ___m_DelagateState_1;
	// System.Threading.ManualResetEvent UnityEngine.UnitySynchronizationContext/WorkRequest::m_WaitHandle
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;

public:
	inline static int32_t get_offset_of_m_DelagateCallback_0() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateCallback_0)); }
	inline SendOrPostCallback_t2750080073 * get_m_DelagateCallback_0() const { return ___m_DelagateCallback_0; }
	inline SendOrPostCallback_t2750080073 ** get_address_of_m_DelagateCallback_0() { return &___m_DelagateCallback_0; }
	inline void set_m_DelagateCallback_0(SendOrPostCallback_t2750080073 * value)
	{
		___m_DelagateCallback_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateCallback_0), value);
	}

	inline static int32_t get_offset_of_m_DelagateState_1() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_DelagateState_1)); }
	inline RuntimeObject * get_m_DelagateState_1() const { return ___m_DelagateState_1; }
	inline RuntimeObject ** get_address_of_m_DelagateState_1() { return &___m_DelagateState_1; }
	inline void set_m_DelagateState_1(RuntimeObject * value)
	{
		___m_DelagateState_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_DelagateState_1), value);
	}

	inline static int32_t get_offset_of_m_WaitHandle_2() { return static_cast<int32_t>(offsetof(WorkRequest_t1354518612, ___m_WaitHandle_2)); }
	inline ManualResetEvent_t451242010 * get_m_WaitHandle_2() const { return ___m_WaitHandle_2; }
	inline ManualResetEvent_t451242010 ** get_address_of_m_WaitHandle_2() { return &___m_WaitHandle_2; }
	inline void set_m_WaitHandle_2(ManualResetEvent_t451242010 * value)
	{
		___m_WaitHandle_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_WaitHandle_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
// Native definition for COM marshalling of UnityEngine.UnitySynchronizationContext/WorkRequest
struct WorkRequest_t1354518612_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback_0;
	Il2CppIUnknown* ___m_DelagateState_1;
	ManualResetEvent_t451242010 * ___m_WaitHandle_2;
};
#endif // WORKREQUEST_T1354518612_H
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_3;

public:
	inline static int32_t get_offset_of__ticks_3() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_3)); }
	inline int64_t get__ticks_3() const { return ____ticks_3; }
	inline int64_t* get_address_of__ticks_3() { return &____ticks_3; }
	inline void set__ticks_3(int64_t value)
	{
		____ticks_3 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_0;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_1;
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_2;

public:
	inline static int32_t get_offset_of_MaxValue_0() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_0)); }
	inline TimeSpan_t881159249  get_MaxValue_0() const { return ___MaxValue_0; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_0() { return &___MaxValue_0; }
	inline void set_MaxValue_0(TimeSpan_t881159249  value)
	{
		___MaxValue_0 = value;
	}

	inline static int32_t get_offset_of_MinValue_1() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_1)); }
	inline TimeSpan_t881159249  get_MinValue_1() const { return ___MinValue_1; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_1() { return &___MinValue_1; }
	inline void set_MinValue_1(TimeSpan_t881159249  value)
	{
		___MinValue_1 = value;
	}

	inline static int32_t get_offset_of_Zero_2() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_2)); }
	inline TimeSpan_t881159249  get_Zero_2() const { return ___Zero_2; }
	inline TimeSpan_t881159249 * get_address_of_Zero_2() { return &___Zero_2; }
	inline void set_Zero_2(TimeSpan_t881159249  value)
	{
		___Zero_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3790689680_H
#define NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3790689680_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsAtomicWriteAttribute
struct  NativeContainerSupportsAtomicWriteAttribute_t3790689680  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSATOMICWRITEATTRIBUTE_T3790689680_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef DISALLOWMULTIPLECOMPONENT_T1422053217_H
#define DISALLOWMULTIPLECOMPONENT_T1422053217_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DisallowMultipleComponent
struct  DisallowMultipleComponent_t1422053217  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DISALLOWMULTIPLECOMPONENT_T1422053217_H
#ifndef GCUSERPROFILEDATA_T2719720026_H
#define GCUSERPROFILEDATA_T2719720026_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct  GcUserProfileData_t2719720026 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userName
	String_t* ___userName_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::userID
	String_t* ___userID_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::isFriend
	int32_t ___isFriend_2;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData::image
	Texture2D_t3840446185 * ___image_3;

public:
	inline static int32_t get_offset_of_userName_0() { return static_cast<int32_t>(offsetof(GcUserProfileData_t2719720026, ___userName_0)); }
	inline String_t* get_userName_0() const { return ___userName_0; }
	inline String_t** get_address_of_userName_0() { return &___userName_0; }
	inline void set_userName_0(String_t* value)
	{
		___userName_0 = value;
		Il2CppCodeGenWriteBarrier((&___userName_0), value);
	}

	inline static int32_t get_offset_of_userID_1() { return static_cast<int32_t>(offsetof(GcUserProfileData_t2719720026, ___userID_1)); }
	inline String_t* get_userID_1() const { return ___userID_1; }
	inline String_t** get_address_of_userID_1() { return &___userID_1; }
	inline void set_userID_1(String_t* value)
	{
		___userID_1 = value;
		Il2CppCodeGenWriteBarrier((&___userID_1), value);
	}

	inline static int32_t get_offset_of_isFriend_2() { return static_cast<int32_t>(offsetof(GcUserProfileData_t2719720026, ___isFriend_2)); }
	inline int32_t get_isFriend_2() const { return ___isFriend_2; }
	inline int32_t* get_address_of_isFriend_2() { return &___isFriend_2; }
	inline void set_isFriend_2(int32_t value)
	{
		___isFriend_2 = value;
	}

	inline static int32_t get_offset_of_image_3() { return static_cast<int32_t>(offsetof(GcUserProfileData_t2719720026, ___image_3)); }
	inline Texture2D_t3840446185 * get_image_3() const { return ___image_3; }
	inline Texture2D_t3840446185 ** get_address_of_image_3() { return &___image_3; }
	inline void set_image_3(Texture2D_t3840446185 * value)
	{
		___image_3 = value;
		Il2CppCodeGenWriteBarrier((&___image_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t2719720026_marshaled_pinvoke
{
	char* ___userName_0;
	char* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t3840446185 * ___image_3;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcUserProfileData
struct GcUserProfileData_t2719720026_marshaled_com
{
	Il2CppChar* ___userName_0;
	Il2CppChar* ___userID_1;
	int32_t ___isFriend_2;
	Texture2D_t3840446185 * ___image_3;
};
#endif // GCUSERPROFILEDATA_T2719720026_H
#ifndef GCACHIEVEMENTDESCRIPTIONDATA_T643925653_H
#define GCACHIEVEMENTDESCRIPTIONDATA_T643925653_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct  GcAchievementDescriptionData_t643925653 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Title
	String_t* ___m_Title_1;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Image
	Texture2D_t3840446185 * ___m_Image_2;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_AchievedDescription
	String_t* ___m_AchievedDescription_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_UnachievedDescription
	String_t* ___m_UnachievedDescription_4;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Hidden
	int32_t ___m_Hidden_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData::m_Points
	int32_t ___m_Points_6;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_Title_1() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_Title_1)); }
	inline String_t* get_m_Title_1() const { return ___m_Title_1; }
	inline String_t** get_address_of_m_Title_1() { return &___m_Title_1; }
	inline void set_m_Title_1(String_t* value)
	{
		___m_Title_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_1), value);
	}

	inline static int32_t get_offset_of_m_Image_2() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_Image_2)); }
	inline Texture2D_t3840446185 * get_m_Image_2() const { return ___m_Image_2; }
	inline Texture2D_t3840446185 ** get_address_of_m_Image_2() { return &___m_Image_2; }
	inline void set_m_Image_2(Texture2D_t3840446185 * value)
	{
		___m_Image_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_2), value);
	}

	inline static int32_t get_offset_of_m_AchievedDescription_3() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_AchievedDescription_3)); }
	inline String_t* get_m_AchievedDescription_3() const { return ___m_AchievedDescription_3; }
	inline String_t** get_address_of_m_AchievedDescription_3() { return &___m_AchievedDescription_3; }
	inline void set_m_AchievedDescription_3(String_t* value)
	{
		___m_AchievedDescription_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_AchievedDescription_3), value);
	}

	inline static int32_t get_offset_of_m_UnachievedDescription_4() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_UnachievedDescription_4)); }
	inline String_t* get_m_UnachievedDescription_4() const { return ___m_UnachievedDescription_4; }
	inline String_t** get_address_of_m_UnachievedDescription_4() { return &___m_UnachievedDescription_4; }
	inline void set_m_UnachievedDescription_4(String_t* value)
	{
		___m_UnachievedDescription_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_UnachievedDescription_4), value);
	}

	inline static int32_t get_offset_of_m_Hidden_5() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_Hidden_5)); }
	inline int32_t get_m_Hidden_5() const { return ___m_Hidden_5; }
	inline int32_t* get_address_of_m_Hidden_5() { return &___m_Hidden_5; }
	inline void set_m_Hidden_5(int32_t value)
	{
		___m_Hidden_5 = value;
	}

	inline static int32_t get_offset_of_m_Points_6() { return static_cast<int32_t>(offsetof(GcAchievementDescriptionData_t643925653, ___m_Points_6)); }
	inline int32_t get_m_Points_6() const { return ___m_Points_6; }
	inline int32_t* get_address_of_m_Points_6() { return &___m_Points_6; }
	inline void set_m_Points_6(int32_t value)
	{
		___m_Points_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t643925653_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	char* ___m_Title_1;
	Texture2D_t3840446185 * ___m_Image_2;
	char* ___m_AchievedDescription_3;
	char* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementDescriptionData
struct GcAchievementDescriptionData_t643925653_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	Il2CppChar* ___m_Title_1;
	Texture2D_t3840446185 * ___m_Image_2;
	Il2CppChar* ___m_AchievedDescription_3;
	Il2CppChar* ___m_UnachievedDescription_4;
	int32_t ___m_Hidden_5;
	int32_t ___m_Points_6;
};
#endif // GCACHIEVEMENTDESCRIPTIONDATA_T643925653_H
#ifndef GCACHIEVEMENTDATA_T675222246_H
#define GCACHIEVEMENTDATA_T675222246_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct  GcAchievementData_t675222246 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Identifier
	String_t* ___m_Identifier_0;
	// System.Double UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_PercentCompleted
	double ___m_PercentCompleted_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Completed
	int32_t ___m_Completed_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_Hidden
	int32_t ___m_Hidden_3;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcAchievementData::m_LastReportedDate
	int32_t ___m_LastReportedDate_4;

public:
	inline static int32_t get_offset_of_m_Identifier_0() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Identifier_0)); }
	inline String_t* get_m_Identifier_0() const { return ___m_Identifier_0; }
	inline String_t** get_address_of_m_Identifier_0() { return &___m_Identifier_0; }
	inline void set_m_Identifier_0(String_t* value)
	{
		___m_Identifier_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Identifier_0), value);
	}

	inline static int32_t get_offset_of_m_PercentCompleted_1() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_PercentCompleted_1)); }
	inline double get_m_PercentCompleted_1() const { return ___m_PercentCompleted_1; }
	inline double* get_address_of_m_PercentCompleted_1() { return &___m_PercentCompleted_1; }
	inline void set_m_PercentCompleted_1(double value)
	{
		___m_PercentCompleted_1 = value;
	}

	inline static int32_t get_offset_of_m_Completed_2() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Completed_2)); }
	inline int32_t get_m_Completed_2() const { return ___m_Completed_2; }
	inline int32_t* get_address_of_m_Completed_2() { return &___m_Completed_2; }
	inline void set_m_Completed_2(int32_t value)
	{
		___m_Completed_2 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_3() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_Hidden_3)); }
	inline int32_t get_m_Hidden_3() const { return ___m_Hidden_3; }
	inline int32_t* get_address_of_m_Hidden_3() { return &___m_Hidden_3; }
	inline void set_m_Hidden_3(int32_t value)
	{
		___m_Hidden_3 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_4() { return static_cast<int32_t>(offsetof(GcAchievementData_t675222246, ___m_LastReportedDate_4)); }
	inline int32_t get_m_LastReportedDate_4() const { return ___m_LastReportedDate_4; }
	inline int32_t* get_address_of_m_LastReportedDate_4() { return &___m_LastReportedDate_4; }
	inline void set_m_LastReportedDate_4(int32_t value)
	{
		___m_LastReportedDate_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_pinvoke
{
	char* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcAchievementData
struct GcAchievementData_t675222246_marshaled_com
{
	Il2CppChar* ___m_Identifier_0;
	double ___m_PercentCompleted_1;
	int32_t ___m_Completed_2;
	int32_t ___m_Hidden_3;
	int32_t ___m_LastReportedDate_4;
};
#endif // GCACHIEVEMENTDATA_T675222246_H
#ifndef GCSCOREDATA_T2125309831_H
#define GCSCOREDATA_T2125309831_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct  GcScoreData_t2125309831 
{
public:
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Category
	String_t* ___m_Category_0;
	// System.UInt32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueLow
	uint32_t ___m_ValueLow_1;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_ValueHigh
	int32_t ___m_ValueHigh_2;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Date
	int32_t ___m_Date_3;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_FormattedValue
	String_t* ___m_FormattedValue_4;
	// System.String UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_PlayerID
	String_t* ___m_PlayerID_5;
	// System.Int32 UnityEngine.SocialPlatforms.GameCenter.GcScoreData::m_Rank
	int32_t ___m_Rank_6;

public:
	inline static int32_t get_offset_of_m_Category_0() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Category_0)); }
	inline String_t* get_m_Category_0() const { return ___m_Category_0; }
	inline String_t** get_address_of_m_Category_0() { return &___m_Category_0; }
	inline void set_m_Category_0(String_t* value)
	{
		___m_Category_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Category_0), value);
	}

	inline static int32_t get_offset_of_m_ValueLow_1() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueLow_1)); }
	inline uint32_t get_m_ValueLow_1() const { return ___m_ValueLow_1; }
	inline uint32_t* get_address_of_m_ValueLow_1() { return &___m_ValueLow_1; }
	inline void set_m_ValueLow_1(uint32_t value)
	{
		___m_ValueLow_1 = value;
	}

	inline static int32_t get_offset_of_m_ValueHigh_2() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_ValueHigh_2)); }
	inline int32_t get_m_ValueHigh_2() const { return ___m_ValueHigh_2; }
	inline int32_t* get_address_of_m_ValueHigh_2() { return &___m_ValueHigh_2; }
	inline void set_m_ValueHigh_2(int32_t value)
	{
		___m_ValueHigh_2 = value;
	}

	inline static int32_t get_offset_of_m_Date_3() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Date_3)); }
	inline int32_t get_m_Date_3() const { return ___m_Date_3; }
	inline int32_t* get_address_of_m_Date_3() { return &___m_Date_3; }
	inline void set_m_Date_3(int32_t value)
	{
		___m_Date_3 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_4() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_FormattedValue_4)); }
	inline String_t* get_m_FormattedValue_4() const { return ___m_FormattedValue_4; }
	inline String_t** get_address_of_m_FormattedValue_4() { return &___m_FormattedValue_4; }
	inline void set_m_FormattedValue_4(String_t* value)
	{
		___m_FormattedValue_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_4), value);
	}

	inline static int32_t get_offset_of_m_PlayerID_5() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_PlayerID_5)); }
	inline String_t* get_m_PlayerID_5() const { return ___m_PlayerID_5; }
	inline String_t** get_address_of_m_PlayerID_5() { return &___m_PlayerID_5; }
	inline void set_m_PlayerID_5(String_t* value)
	{
		___m_PlayerID_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_PlayerID_5), value);
	}

	inline static int32_t get_offset_of_m_Rank_6() { return static_cast<int32_t>(offsetof(GcScoreData_t2125309831, ___m_Rank_6)); }
	inline int32_t get_m_Rank_6() const { return ___m_Rank_6; }
	inline int32_t* get_address_of_m_Rank_6() { return &___m_Rank_6; }
	inline void set_m_Rank_6(int32_t value)
	{
		___m_Rank_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_pinvoke
{
	char* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	char* ___m_FormattedValue_4;
	char* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcScoreData
struct GcScoreData_t2125309831_marshaled_com
{
	Il2CppChar* ___m_Category_0;
	uint32_t ___m_ValueLow_1;
	int32_t ___m_ValueHigh_2;
	int32_t ___m_Date_3;
	Il2CppChar* ___m_FormattedValue_4;
	Il2CppChar* ___m_PlayerID_5;
	int32_t ___m_Rank_6;
};
#endif // GCSCOREDATA_T2125309831_H
#ifndef VECTOR3_T3722313464_H
#define VECTOR3_T3722313464_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t3722313464 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t3722313464, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t3722313464_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t3722313464  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t3722313464  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t3722313464  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t3722313464  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t3722313464  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t3722313464  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t3722313464  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t3722313464  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t3722313464  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t3722313464  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___zeroVector_4)); }
	inline Vector3_t3722313464  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t3722313464 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t3722313464  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___oneVector_5)); }
	inline Vector3_t3722313464  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t3722313464 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t3722313464  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___upVector_6)); }
	inline Vector3_t3722313464  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t3722313464 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t3722313464  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___downVector_7)); }
	inline Vector3_t3722313464  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t3722313464 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t3722313464  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___leftVector_8)); }
	inline Vector3_t3722313464  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t3722313464 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t3722313464  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___rightVector_9)); }
	inline Vector3_t3722313464  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t3722313464 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t3722313464  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___forwardVector_10)); }
	inline Vector3_t3722313464  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t3722313464 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t3722313464  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___backVector_11)); }
	inline Vector3_t3722313464  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t3722313464 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t3722313464  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t3722313464  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t3722313464 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t3722313464  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t3722313464_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t3722313464  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t3722313464 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t3722313464  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T3722313464_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_7;

public:
	inline static int32_t get_offset_of_m_value_7() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_7)); }
	inline float get_m_value_7() const { return ___m_value_7; }
	inline float* get_address_of_m_value_7() { return &___m_value_7; }
	inline void set_m_value_7(float value)
	{
		___m_value_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef RANGE_T173988048_H
#define RANGE_T173988048_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Range
struct  Range_t173988048 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.Range::from
	int32_t ___from_0;
	// System.Int32 UnityEngine.SocialPlatforms.Range::count
	int32_t ___count_1;

public:
	inline static int32_t get_offset_of_from_0() { return static_cast<int32_t>(offsetof(Range_t173988048, ___from_0)); }
	inline int32_t get_from_0() const { return ___from_0; }
	inline int32_t* get_address_of_from_0() { return &___from_0; }
	inline void set_from_0(int32_t value)
	{
		___from_0 = value;
	}

	inline static int32_t get_offset_of_count_1() { return static_cast<int32_t>(offsetof(Range_t173988048, ___count_1)); }
	inline int32_t get_count_1() const { return ___count_1; }
	inline int32_t* get_address_of_count_1() { return &___count_1; }
	inline void set_count_1(int32_t value)
	{
		___count_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANGE_T173988048_H
#ifndef NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#define NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Collections.NativeContainerSupportsMinMaxWriteRestrictionAttribute
struct  NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1586929818  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECONTAINERSUPPORTSMINMAXWRITERESTRICTIONATTRIBUTE_T1586929818_H
#ifndef REQUIRECOMPONENT_T3490506609_H
#define REQUIRECOMPONENT_T3490506609_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RequireComponent
struct  RequireComponent_t3490506609  : public Attribute_t861562559
{
public:
	// System.Type UnityEngine.RequireComponent::m_Type0
	Type_t * ___m_Type0_0;
	// System.Type UnityEngine.RequireComponent::m_Type1
	Type_t * ___m_Type1_1;
	// System.Type UnityEngine.RequireComponent::m_Type2
	Type_t * ___m_Type2_2;

public:
	inline static int32_t get_offset_of_m_Type0_0() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type0_0)); }
	inline Type_t * get_m_Type0_0() const { return ___m_Type0_0; }
	inline Type_t ** get_address_of_m_Type0_0() { return &___m_Type0_0; }
	inline void set_m_Type0_0(Type_t * value)
	{
		___m_Type0_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type0_0), value);
	}

	inline static int32_t get_offset_of_m_Type1_1() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type1_1)); }
	inline Type_t * get_m_Type1_1() const { return ___m_Type1_1; }
	inline Type_t ** get_address_of_m_Type1_1() { return &___m_Type1_1; }
	inline void set_m_Type1_1(Type_t * value)
	{
		___m_Type1_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type1_1), value);
	}

	inline static int32_t get_offset_of_m_Type2_2() { return static_cast<int32_t>(offsetof(RequireComponent_t3490506609, ___m_Type2_2)); }
	inline Type_t * get_m_Type2_2() const { return ___m_Type2_2; }
	inline Type_t ** get_address_of_m_Type2_2() { return &___m_Type2_2; }
	inline void set_m_Type2_2(Type_t * value)
	{
		___m_Type2_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_Type2_2), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // REQUIRECOMPONENT_T3490506609_H
#ifndef THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#define THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ThreadAndSerializationSafeAttribute
struct  ThreadAndSerializationSafeAttribute_t363116225  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADANDSERIALIZATIONSAFEATTRIBUTE_T363116225_H
#ifndef CONTEXTMENU_T1295656858_H
#define CONTEXTMENU_T1295656858_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ContextMenu
struct  ContextMenu_t1295656858  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.ContextMenu::menuItem
	String_t* ___menuItem_0;
	// System.Boolean UnityEngine.ContextMenu::validate
	bool ___validate_1;
	// System.Int32 UnityEngine.ContextMenu::priority
	int32_t ___priority_2;

public:
	inline static int32_t get_offset_of_menuItem_0() { return static_cast<int32_t>(offsetof(ContextMenu_t1295656858, ___menuItem_0)); }
	inline String_t* get_menuItem_0() const { return ___menuItem_0; }
	inline String_t** get_address_of_menuItem_0() { return &___menuItem_0; }
	inline void set_menuItem_0(String_t* value)
	{
		___menuItem_0 = value;
		Il2CppCodeGenWriteBarrier((&___menuItem_0), value);
	}

	inline static int32_t get_offset_of_validate_1() { return static_cast<int32_t>(offsetof(ContextMenu_t1295656858, ___validate_1)); }
	inline bool get_validate_1() const { return ___validate_1; }
	inline bool* get_address_of_validate_1() { return &___validate_1; }
	inline void set_validate_1(bool value)
	{
		___validate_1 = value;
	}

	inline static int32_t get_offset_of_priority_2() { return static_cast<int32_t>(offsetof(ContextMenu_t1295656858, ___priority_2)); }
	inline int32_t get_priority_2() const { return ___priority_2; }
	inline int32_t* get_address_of_priority_2() { return &___priority_2; }
	inline void set_priority_2(int32_t value)
	{
		___priority_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONTEXTMENU_T1295656858_H
#ifndef EXECUTEINEDITMODE_T3727731349_H
#define EXECUTEINEDITMODE_T3727731349_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ExecuteInEditMode
struct  ExecuteInEditMode_t3727731349  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EXECUTEINEDITMODE_T3727731349_H
#ifndef DEFAULTEXECUTIONORDER_T3059642329_H
#define DEFAULTEXECUTIONORDER_T3059642329_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.DefaultExecutionOrder
struct  DefaultExecutionOrder_t3059642329  : public Attribute_t861562559
{
public:
	// System.Int32 UnityEngine.DefaultExecutionOrder::<order>k__BackingField
	int32_t ___U3CorderU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CorderU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(DefaultExecutionOrder_t3059642329, ___U3CorderU3Ek__BackingField_0)); }
	inline int32_t get_U3CorderU3Ek__BackingField_0() const { return ___U3CorderU3Ek__BackingField_0; }
	inline int32_t* get_address_of_U3CorderU3Ek__BackingField_0() { return &___U3CorderU3Ek__BackingField_0; }
	inline void set_U3CorderU3Ek__BackingField_0(int32_t value)
	{
		___U3CorderU3Ek__BackingField_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEFAULTEXECUTIONORDER_T3059642329_H
#ifndef NATIVECLASSATTRIBUTE_T2601352714_H
#define NATIVECLASSATTRIBUTE_T2601352714_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.NativeClassAttribute
struct  NativeClassAttribute_t2601352714  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.NativeClassAttribute::<QualifiedNativeName>k__BackingField
	String_t* ___U3CQualifiedNativeNameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(NativeClassAttribute_t2601352714, ___U3CQualifiedNativeNameU3Ek__BackingField_0)); }
	inline String_t* get_U3CQualifiedNativeNameU3Ek__BackingField_0() const { return ___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CQualifiedNativeNameU3Ek__BackingField_0() { return &___U3CQualifiedNativeNameU3Ek__BackingField_0; }
	inline void set_U3CQualifiedNativeNameU3Ek__BackingField_0(String_t* value)
	{
		___U3CQualifiedNativeNameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((&___U3CQualifiedNativeNameU3Ek__BackingField_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // NATIVECLASSATTRIBUTE_T2601352714_H
#ifndef ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#define ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AssemblyIsEditorAssembly
struct  AssemblyIsEditorAssembly_t3442416807  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASSEMBLYISEDITORASSEMBLY_T3442416807_H
#ifndef WRITABLEATTRIBUTE_T812406054_H
#define WRITABLEATTRIBUTE_T812406054_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.WritableAttribute
struct  WritableAttribute_t812406054  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // WRITABLEATTRIBUTE_T812406054_H
#ifndef GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#define GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Scripting.GeneratedByOldBindingsGeneratorAttribute
struct  GeneratedByOldBindingsGeneratorAttribute_t433318409  : public Attribute_t861562559
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GENERATEDBYOLDBINDINGSGENERATORATTRIBUTE_T433318409_H
#ifndef VECTOR2_T2156229523_H
#define VECTOR2_T2156229523_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector2
struct  Vector2_t2156229523 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_t2156229523, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_t2156229523_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t2156229523  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t2156229523  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t2156229523  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t2156229523  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t2156229523  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t2156229523  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t2156229523  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t2156229523  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___zeroVector_2)); }
	inline Vector2_t2156229523  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_t2156229523 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_t2156229523  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___oneVector_3)); }
	inline Vector2_t2156229523  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_t2156229523 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_t2156229523  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___upVector_4)); }
	inline Vector2_t2156229523  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_t2156229523 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_t2156229523  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___downVector_5)); }
	inline Vector2_t2156229523  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_t2156229523 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_t2156229523  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___leftVector_6)); }
	inline Vector2_t2156229523  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_t2156229523 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_t2156229523  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___rightVector_7)); }
	inline Vector2_t2156229523  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_t2156229523 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_t2156229523  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_t2156229523  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_t2156229523 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_t2156229523  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_t2156229523_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_t2156229523  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_t2156229523 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_t2156229523  value)
	{
		___negativeInfinityVector_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR2_T2156229523_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

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
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef ADDCOMPONENTMENU_T415040132_H
#define ADDCOMPONENTMENU_T415040132_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.AddComponentMenu
struct  AddComponentMenu_t415040132  : public Attribute_t861562559
{
public:
	// System.String UnityEngine.AddComponentMenu::m_AddComponentMenu
	String_t* ___m_AddComponentMenu_0;
	// System.Int32 UnityEngine.AddComponentMenu::m_Ordering
	int32_t ___m_Ordering_1;

public:
	inline static int32_t get_offset_of_m_AddComponentMenu_0() { return static_cast<int32_t>(offsetof(AddComponentMenu_t415040132, ___m_AddComponentMenu_0)); }
	inline String_t* get_m_AddComponentMenu_0() const { return ___m_AddComponentMenu_0; }
	inline String_t** get_address_of_m_AddComponentMenu_0() { return &___m_AddComponentMenu_0; }
	inline void set_m_AddComponentMenu_0(String_t* value)
	{
		___m_AddComponentMenu_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_AddComponentMenu_0), value);
	}

	inline static int32_t get_offset_of_m_Ordering_1() { return static_cast<int32_t>(offsetof(AddComponentMenu_t415040132, ___m_Ordering_1)); }
	inline int32_t get_m_Ordering_1() const { return ___m_Ordering_1; }
	inline int32_t* get_address_of_m_Ordering_1() { return &___m_Ordering_1; }
	inline void set_m_Ordering_1(int32_t value)
	{
		___m_Ordering_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ADDCOMPONENTMENU_T415040132_H
#ifndef DATASTREAMTYPE_T4132467813_H
#define DATASTREAMTYPE_T4132467813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.DataStreamType
struct  DataStreamType_t4132467813 
{
public:
	// System.Int32 UnityEngine.Playables.DataStreamType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DataStreamType_t4132467813, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATASTREAMTYPE_T4132467813_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	IntPtr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	IntPtr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	IntPtr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::method_code
	IntPtr_t ___method_code_5;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_6;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_7;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_8;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline IntPtr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline IntPtr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(IntPtr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline IntPtr_t get_method_3() const { return ___method_3; }
	inline IntPtr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(IntPtr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline IntPtr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline IntPtr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(IntPtr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_method_code_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_5)); }
	inline IntPtr_t get_method_code_5() const { return ___method_code_5; }
	inline IntPtr_t* get_address_of_method_code_5() { return &___method_code_5; }
	inline void set_method_code_5(IntPtr_t value)
	{
		___method_code_5 = value;
	}

	inline static int32_t get_offset_of_method_info_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_6)); }
	inline MethodInfo_t * get_method_info_6() const { return ___method_info_6; }
	inline MethodInfo_t ** get_address_of_method_info_6() { return &___method_info_6; }
	inline void set_method_info_6(MethodInfo_t * value)
	{
		___method_info_6 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_6), value);
	}

	inline static int32_t get_offset_of_original_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_7)); }
	inline MethodInfo_t * get_original_method_info_7() const { return ___original_method_info_7; }
	inline MethodInfo_t ** get_address_of_original_method_info_7() { return &___original_method_info_7; }
	inline void set_original_method_info_7(MethodInfo_t * value)
	{
		___original_method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_7), value);
	}

	inline static int32_t get_offset_of_data_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_8)); }
	inline DelegateData_t1677132599 * get_data_8() const { return ___data_8; }
	inline DelegateData_t1677132599 ** get_address_of_data_8() { return &___data_8; }
	inline void set_data_8(DelegateData_t1677132599 * value)
	{
		___data_8 = value;
		Il2CppCodeGenWriteBarrier((&___data_8), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DELEGATE_T1188392813_H
#ifndef FLAGS_T128269323_H
#define FLAGS_T128269323_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData/Flags
struct  Flags_t128269323 
{
public:
	// System.Int32 UnityEngine.Playables.FrameData/Flags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Flags_t128269323, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T128269323_H
#ifndef UNITYANALYTICSHANDLER_T3011359618_H
#define UNITYANALYTICSHANDLER_T3011359618_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Analytics.UnityAnalyticsHandler
struct  UnityAnalyticsHandler_t3011359618  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Analytics.UnityAnalyticsHandler::m_Ptr
	IntPtr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(UnityAnalyticsHandler_t3011359618, ___m_Ptr_0)); }
	inline IntPtr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline IntPtr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(IntPtr_t value)
	{
		___m_Ptr_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Analytics.UnityAnalyticsHandler
struct UnityAnalyticsHandler_t3011359618_marshaled_com
{
	intptr_t ___m_Ptr_0;
};
#endif // UNITYANALYTICSHANDLER_T3011359618_H
#ifndef SENDMESSAGEOPTIONS_T3580193095_H
#define SENDMESSAGEOPTIONS_T3580193095_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SendMessageOptions
struct  SendMessageOptions_t3580193095 
{
public:
	// System.Int32 UnityEngine.SendMessageOptions::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(SendMessageOptions_t3580193095, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SENDMESSAGEOPTIONS_T3580193095_H
#ifndef USERSTATE_T4177058321_H
#define USERSTATE_T4177058321_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserState
struct  UserState_t4177058321 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserState_t4177058321, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSTATE_T4177058321_H
#ifndef USERSCOPE_T604006431_H
#define USERSCOPE_T604006431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.UserScope
struct  UserScope_t604006431 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.UserScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UserScope_t604006431, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERSCOPE_T604006431_H
#ifndef TIMESCOPE_T539351503_H
#define TIMESCOPE_T539351503_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.TimeScope
struct  TimeScope_t539351503 
{
public:
	// System.Int32 UnityEngine.SocialPlatforms.TimeScope::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TimeScope_t539351503, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESCOPE_T539351503_H
#ifndef GCLEADERBOARD_T4132273028_H
#define GCLEADERBOARD_T4132273028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct  GcLeaderboard_t4132273028  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_InternalLeaderboard
	IntPtr_t ___m_InternalLeaderboard_0;
	// UnityEngine.SocialPlatforms.Impl.Leaderboard UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard::m_GenericLeaderboard
	Leaderboard_t1065076763 * ___m_GenericLeaderboard_1;

public:
	inline static int32_t get_offset_of_m_InternalLeaderboard_0() { return static_cast<int32_t>(offsetof(GcLeaderboard_t4132273028, ___m_InternalLeaderboard_0)); }
	inline IntPtr_t get_m_InternalLeaderboard_0() const { return ___m_InternalLeaderboard_0; }
	inline IntPtr_t* get_address_of_m_InternalLeaderboard_0() { return &___m_InternalLeaderboard_0; }
	inline void set_m_InternalLeaderboard_0(IntPtr_t value)
	{
		___m_InternalLeaderboard_0 = value;
	}

	inline static int32_t get_offset_of_m_GenericLeaderboard_1() { return static_cast<int32_t>(offsetof(GcLeaderboard_t4132273028, ___m_GenericLeaderboard_1)); }
	inline Leaderboard_t1065076763 * get_m_GenericLeaderboard_1() const { return ___m_GenericLeaderboard_1; }
	inline Leaderboard_t1065076763 ** get_address_of_m_GenericLeaderboard_1() { return &___m_GenericLeaderboard_1; }
	inline void set_m_GenericLeaderboard_1(Leaderboard_t1065076763 * value)
	{
		___m_GenericLeaderboard_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_GenericLeaderboard_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4132273028_marshaled_pinvoke
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t1065076763 * ___m_GenericLeaderboard_1;
};
// Native definition for COM marshalling of UnityEngine.SocialPlatforms.GameCenter.GcLeaderboard
struct GcLeaderboard_t4132273028_marshaled_com
{
	intptr_t ___m_InternalLeaderboard_0;
	Leaderboard_t1065076763 * ___m_GenericLeaderboard_1;
};
#endif // GCLEADERBOARD_T4132273028_H
#ifndef SPACE_T654135784_H
#define SPACE_T654135784_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Space
struct  Space_t654135784 
{
public:
	// System.Int32 UnityEngine.Space::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(Space_t654135784, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPACE_T654135784_H
#ifndef LOGTYPE_T73765434_H
#define LOGTYPE_T73765434_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.LogType
struct  LogType_t73765434 
{
public:
	// System.Int32 UnityEngine.LogType::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(LogType_t73765434, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOGTYPE_T73765434_H
#ifndef DATETIMEKIND_T3468814247_H
#define DATETIMEKIND_T3468814247_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeKind
struct  DateTimeKind_t3468814247 
{
public:
	// System.Int32 System.DateTimeKind::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(DateTimeKind_t3468814247, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEKIND_T3468814247_H
#ifndef PERSISTENTLISTENERMODE_T232255230_H
#define PERSISTENTLISTENERMODE_T232255230_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentListenerMode
struct  PersistentListenerMode_t232255230 
{
public:
	// System.Int32 UnityEngine.Events.PersistentListenerMode::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(PersistentListenerMode_t232255230, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTLISTENERMODE_T232255230_H
#ifndef TEXTUREFORMAT_T2701165832_H
#define TEXTUREFORMAT_T2701165832_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.TextureFormat
struct  TextureFormat_t2701165832 
{
public:
	// System.Int32 UnityEngine.TextureFormat::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(TextureFormat_t2701165832, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TEXTUREFORMAT_T2701165832_H
#ifndef UNITYEVENTCALLSTATE_T3448586328_H
#define UNITYEVENTCALLSTATE_T3448586328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityEventCallState
struct  UnityEventCallState_t3448586328 
{
public:
	// System.Int32 UnityEngine.Events.UnityEventCallState::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityEventCallState_t3448586328, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYEVENTCALLSTATE_T3448586328_H
#ifndef MATHFINTERNAL_T624072491_H
#define MATHFINTERNAL_T624072491_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngineInternal.MathfInternal
struct  MathfInternal_t624072491 
{
public:
	union
	{
		struct
		{
		};
		uint8_t MathfInternal_t624072491__padding[1];
	};

public:
};

struct MathfInternal_t624072491_StaticFields
{
public:
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinNormal
	float ___FloatMinNormal_0;
	// System.Single modreq(System.Runtime.CompilerServices.IsVolatile) UnityEngineInternal.MathfInternal::FloatMinDenormal
	float ___FloatMinDenormal_1;
	// System.Boolean UnityEngineInternal.MathfInternal::IsFlushToZeroEnabled
	bool ___IsFlushToZeroEnabled_2;

public:
	inline static int32_t get_offset_of_FloatMinNormal_0() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinNormal_0)); }
	inline float get_FloatMinNormal_0() const { return ___FloatMinNormal_0; }
	inline float* get_address_of_FloatMinNormal_0() { return &___FloatMinNormal_0; }
	inline void set_FloatMinNormal_0(float value)
	{
		___FloatMinNormal_0 = value;
	}

	inline static int32_t get_offset_of_FloatMinDenormal_1() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___FloatMinDenormal_1)); }
	inline float get_FloatMinDenormal_1() const { return ___FloatMinDenormal_1; }
	inline float* get_address_of_FloatMinDenormal_1() { return &___FloatMinDenormal_1; }
	inline void set_FloatMinDenormal_1(float value)
	{
		___FloatMinDenormal_1 = value;
	}

	inline static int32_t get_offset_of_IsFlushToZeroEnabled_2() { return static_cast<int32_t>(offsetof(MathfInternal_t624072491_StaticFields, ___IsFlushToZeroEnabled_2)); }
	inline bool get_IsFlushToZeroEnabled_2() const { return ___IsFlushToZeroEnabled_2; }
	inline bool* get_address_of_IsFlushToZeroEnabled_2() { return &___IsFlushToZeroEnabled_2; }
	inline void set_IsFlushToZeroEnabled_2(bool value)
	{
		___IsFlushToZeroEnabled_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATHFINTERNAL_T624072491_H
#ifndef CAMERACLEARFLAGS_T2362496923_H
#define CAMERACLEARFLAGS_T2362496923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.CameraClearFlags
struct  CameraClearFlags_t2362496923 
{
public:
	// System.Int32 UnityEngine.CameraClearFlags::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(CameraClearFlags_t2362496923, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CAMERACLEARFLAGS_T2362496923_H
#ifndef RAY_T3785851493_H
#define RAY_T3785851493_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Ray
struct  Ray_t3785851493 
{
public:
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t3722313464  ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t3722313464  ___m_Direction_1;

public:
	inline static int32_t get_offset_of_m_Origin_0() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Origin_0)); }
	inline Vector3_t3722313464  get_m_Origin_0() const { return ___m_Origin_0; }
	inline Vector3_t3722313464 * get_address_of_m_Origin_0() { return &___m_Origin_0; }
	inline void set_m_Origin_0(Vector3_t3722313464  value)
	{
		___m_Origin_0 = value;
	}

	inline static int32_t get_offset_of_m_Direction_1() { return static_cast<int32_t>(offsetof(Ray_t3785851493, ___m_Direction_1)); }
	inline Vector3_t3722313464  get_m_Direction_1() const { return ___m_Direction_1; }
	inline Vector3_t3722313464 * get_address_of_m_Direction_1() { return &___m_Direction_1; }
	inline void set_m_Direction_1(Vector3_t3722313464  value)
	{
		___m_Direction_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RAY_T3785851493_H
#ifndef USERPROFILE_T3137328177_H
#define USERPROFILE_T3137328177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.UserProfile
struct  UserProfile_t3137328177  : public RuntimeObject
{
public:
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_UserName
	String_t* ___m_UserName_0;
	// System.String UnityEngine.SocialPlatforms.Impl.UserProfile::m_ID
	String_t* ___m_ID_1;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.UserProfile::m_IsFriend
	bool ___m_IsFriend_2;
	// UnityEngine.SocialPlatforms.UserState UnityEngine.SocialPlatforms.Impl.UserProfile::m_State
	int32_t ___m_State_3;
	// UnityEngine.Texture2D UnityEngine.SocialPlatforms.Impl.UserProfile::m_Image
	Texture2D_t3840446185 * ___m_Image_4;

public:
	inline static int32_t get_offset_of_m_UserName_0() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_UserName_0)); }
	inline String_t* get_m_UserName_0() const { return ___m_UserName_0; }
	inline String_t** get_address_of_m_UserName_0() { return &___m_UserName_0; }
	inline void set_m_UserName_0(String_t* value)
	{
		___m_UserName_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserName_0), value);
	}

	inline static int32_t get_offset_of_m_ID_1() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_ID_1)); }
	inline String_t* get_m_ID_1() const { return ___m_ID_1; }
	inline String_t** get_address_of_m_ID_1() { return &___m_ID_1; }
	inline void set_m_ID_1(String_t* value)
	{
		___m_ID_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_ID_1), value);
	}

	inline static int32_t get_offset_of_m_IsFriend_2() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_IsFriend_2)); }
	inline bool get_m_IsFriend_2() const { return ___m_IsFriend_2; }
	inline bool* get_address_of_m_IsFriend_2() { return &___m_IsFriend_2; }
	inline void set_m_IsFriend_2(bool value)
	{
		___m_IsFriend_2 = value;
	}

	inline static int32_t get_offset_of_m_State_3() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_State_3)); }
	inline int32_t get_m_State_3() const { return ___m_State_3; }
	inline int32_t* get_address_of_m_State_3() { return &___m_State_3; }
	inline void set_m_State_3(int32_t value)
	{
		___m_State_3 = value;
	}

	inline static int32_t get_offset_of_m_Image_4() { return static_cast<int32_t>(offsetof(UserProfile_t3137328177, ___m_Image_4)); }
	inline Texture2D_t3840446185 * get_m_Image_4() const { return ___m_Image_4; }
	inline Texture2D_t3840446185 ** get_address_of_m_Image_4() { return &___m_Image_4; }
	inline void set_m_Image_4(Texture2D_t3840446185 * value)
	{
		___m_Image_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Image_4), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // USERPROFILE_T3137328177_H
#ifndef LEADERBOARD_T1065076763_H
#define LEADERBOARD_T1065076763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Leaderboard
struct  Leaderboard_t1065076763  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Loading
	bool ___m_Loading_0;
	// UnityEngine.SocialPlatforms.IScore UnityEngine.SocialPlatforms.Impl.Leaderboard::m_LocalUserScore
	RuntimeObject* ___m_LocalUserScore_1;
	// System.UInt32 UnityEngine.SocialPlatforms.Impl.Leaderboard::m_MaxRange
	uint32_t ___m_MaxRange_2;
	// UnityEngine.SocialPlatforms.IScore[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Scores
	IScoreU5BU5D_t527871248* ___m_Scores_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::m_Title
	String_t* ___m_Title_4;
	// System.String[] UnityEngine.SocialPlatforms.Impl.Leaderboard::m_UserIDs
	StringU5BU5D_t1281789340* ___m_UserIDs_5;
	// System.String UnityEngine.SocialPlatforms.Impl.Leaderboard::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_6;
	// UnityEngine.SocialPlatforms.UserScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<userScope>k__BackingField
	int32_t ___U3CuserScopeU3Ek__BackingField_7;
	// UnityEngine.SocialPlatforms.Range UnityEngine.SocialPlatforms.Impl.Leaderboard::<range>k__BackingField
	Range_t173988048  ___U3CrangeU3Ek__BackingField_8;
	// UnityEngine.SocialPlatforms.TimeScope UnityEngine.SocialPlatforms.Impl.Leaderboard::<timeScope>k__BackingField
	int32_t ___U3CtimeScopeU3Ek__BackingField_9;

public:
	inline static int32_t get_offset_of_m_Loading_0() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Loading_0)); }
	inline bool get_m_Loading_0() const { return ___m_Loading_0; }
	inline bool* get_address_of_m_Loading_0() { return &___m_Loading_0; }
	inline void set_m_Loading_0(bool value)
	{
		___m_Loading_0 = value;
	}

	inline static int32_t get_offset_of_m_LocalUserScore_1() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_LocalUserScore_1)); }
	inline RuntimeObject* get_m_LocalUserScore_1() const { return ___m_LocalUserScore_1; }
	inline RuntimeObject** get_address_of_m_LocalUserScore_1() { return &___m_LocalUserScore_1; }
	inline void set_m_LocalUserScore_1(RuntimeObject* value)
	{
		___m_LocalUserScore_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_LocalUserScore_1), value);
	}

	inline static int32_t get_offset_of_m_MaxRange_2() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_MaxRange_2)); }
	inline uint32_t get_m_MaxRange_2() const { return ___m_MaxRange_2; }
	inline uint32_t* get_address_of_m_MaxRange_2() { return &___m_MaxRange_2; }
	inline void set_m_MaxRange_2(uint32_t value)
	{
		___m_MaxRange_2 = value;
	}

	inline static int32_t get_offset_of_m_Scores_3() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Scores_3)); }
	inline IScoreU5BU5D_t527871248* get_m_Scores_3() const { return ___m_Scores_3; }
	inline IScoreU5BU5D_t527871248** get_address_of_m_Scores_3() { return &___m_Scores_3; }
	inline void set_m_Scores_3(IScoreU5BU5D_t527871248* value)
	{
		___m_Scores_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Scores_3), value);
	}

	inline static int32_t get_offset_of_m_Title_4() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_Title_4)); }
	inline String_t* get_m_Title_4() const { return ___m_Title_4; }
	inline String_t** get_address_of_m_Title_4() { return &___m_Title_4; }
	inline void set_m_Title_4(String_t* value)
	{
		___m_Title_4 = value;
		Il2CppCodeGenWriteBarrier((&___m_Title_4), value);
	}

	inline static int32_t get_offset_of_m_UserIDs_5() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___m_UserIDs_5)); }
	inline StringU5BU5D_t1281789340* get_m_UserIDs_5() const { return ___m_UserIDs_5; }
	inline StringU5BU5D_t1281789340** get_address_of_m_UserIDs_5() { return &___m_UserIDs_5; }
	inline void set_m_UserIDs_5(StringU5BU5D_t1281789340* value)
	{
		___m_UserIDs_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserIDs_5), value);
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CidU3Ek__BackingField_6)); }
	inline String_t* get_U3CidU3Ek__BackingField_6() const { return ___U3CidU3Ek__BackingField_6; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_6() { return &___U3CidU3Ek__BackingField_6; }
	inline void set_U3CidU3Ek__BackingField_6(String_t* value)
	{
		___U3CidU3Ek__BackingField_6 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_6), value);
	}

	inline static int32_t get_offset_of_U3CuserScopeU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CuserScopeU3Ek__BackingField_7)); }
	inline int32_t get_U3CuserScopeU3Ek__BackingField_7() const { return ___U3CuserScopeU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CuserScopeU3Ek__BackingField_7() { return &___U3CuserScopeU3Ek__BackingField_7; }
	inline void set_U3CuserScopeU3Ek__BackingField_7(int32_t value)
	{
		___U3CuserScopeU3Ek__BackingField_7 = value;
	}

	inline static int32_t get_offset_of_U3CrangeU3Ek__BackingField_8() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CrangeU3Ek__BackingField_8)); }
	inline Range_t173988048  get_U3CrangeU3Ek__BackingField_8() const { return ___U3CrangeU3Ek__BackingField_8; }
	inline Range_t173988048 * get_address_of_U3CrangeU3Ek__BackingField_8() { return &___U3CrangeU3Ek__BackingField_8; }
	inline void set_U3CrangeU3Ek__BackingField_8(Range_t173988048  value)
	{
		___U3CrangeU3Ek__BackingField_8 = value;
	}

	inline static int32_t get_offset_of_U3CtimeScopeU3Ek__BackingField_9() { return static_cast<int32_t>(offsetof(Leaderboard_t1065076763, ___U3CtimeScopeU3Ek__BackingField_9)); }
	inline int32_t get_U3CtimeScopeU3Ek__BackingField_9() const { return ___U3CtimeScopeU3Ek__BackingField_9; }
	inline int32_t* get_address_of_U3CtimeScopeU3Ek__BackingField_9() { return &___U3CtimeScopeU3Ek__BackingField_9; }
	inline void set_U3CtimeScopeU3Ek__BackingField_9(int32_t value)
	{
		___U3CtimeScopeU3Ek__BackingField_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LEADERBOARD_T1065076763_H
#ifndef PLAYABLEBINDING_T354260709_H
#define PLAYABLEBINDING_T354260709_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.PlayableBinding
struct  PlayableBinding_t354260709 
{
public:
	union
	{
		struct
		{
			// System.String UnityEngine.Playables.PlayableBinding::<streamName>k__BackingField
			String_t* ___U3CstreamNameU3Ek__BackingField_2;
			// UnityEngine.Playables.DataStreamType UnityEngine.Playables.PlayableBinding::<streamType>k__BackingField
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			// UnityEngine.Object UnityEngine.Playables.PlayableBinding::<sourceObject>k__BackingField
			Object_t631007953 * ___U3CsourceObjectU3Ek__BackingField_4;
			// System.Type UnityEngine.Playables.PlayableBinding::<sourceBindingType>k__BackingField
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};

public:
	inline static int32_t get_offset_of_U3CstreamNameU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamNameU3Ek__BackingField_2)); }
	inline String_t* get_U3CstreamNameU3Ek__BackingField_2() const { return ___U3CstreamNameU3Ek__BackingField_2; }
	inline String_t** get_address_of_U3CstreamNameU3Ek__BackingField_2() { return &___U3CstreamNameU3Ek__BackingField_2; }
	inline void set_U3CstreamNameU3Ek__BackingField_2(String_t* value)
	{
		___U3CstreamNameU3Ek__BackingField_2 = value;
		Il2CppCodeGenWriteBarrier((&___U3CstreamNameU3Ek__BackingField_2), value);
	}

	inline static int32_t get_offset_of_U3CstreamTypeU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CstreamTypeU3Ek__BackingField_3)); }
	inline int32_t get_U3CstreamTypeU3Ek__BackingField_3() const { return ___U3CstreamTypeU3Ek__BackingField_3; }
	inline int32_t* get_address_of_U3CstreamTypeU3Ek__BackingField_3() { return &___U3CstreamTypeU3Ek__BackingField_3; }
	inline void set_U3CstreamTypeU3Ek__BackingField_3(int32_t value)
	{
		___U3CstreamTypeU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_U3CsourceObjectU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceObjectU3Ek__BackingField_4)); }
	inline Object_t631007953 * get_U3CsourceObjectU3Ek__BackingField_4() const { return ___U3CsourceObjectU3Ek__BackingField_4; }
	inline Object_t631007953 ** get_address_of_U3CsourceObjectU3Ek__BackingField_4() { return &___U3CsourceObjectU3Ek__BackingField_4; }
	inline void set_U3CsourceObjectU3Ek__BackingField_4(Object_t631007953 * value)
	{
		___U3CsourceObjectU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceObjectU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709, ___U3CsourceBindingTypeU3Ek__BackingField_5)); }
	inline Type_t * get_U3CsourceBindingTypeU3Ek__BackingField_5() const { return ___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline Type_t ** get_address_of_U3CsourceBindingTypeU3Ek__BackingField_5() { return &___U3CsourceBindingTypeU3Ek__BackingField_5; }
	inline void set_U3CsourceBindingTypeU3Ek__BackingField_5(Type_t * value)
	{
		___U3CsourceBindingTypeU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((&___U3CsourceBindingTypeU3Ek__BackingField_5), value);
	}
};

struct PlayableBinding_t354260709_StaticFields
{
public:
	// UnityEngine.Playables.PlayableBinding[] UnityEngine.Playables.PlayableBinding::None
	PlayableBindingU5BU5D_t829358056* ___None_0;
	// System.Double UnityEngine.Playables.PlayableBinding::DefaultDuration
	double ___DefaultDuration_1;

public:
	inline static int32_t get_offset_of_None_0() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___None_0)); }
	inline PlayableBindingU5BU5D_t829358056* get_None_0() const { return ___None_0; }
	inline PlayableBindingU5BU5D_t829358056** get_address_of_None_0() { return &___None_0; }
	inline void set_None_0(PlayableBindingU5BU5D_t829358056* value)
	{
		___None_0 = value;
		Il2CppCodeGenWriteBarrier((&___None_0), value);
	}

	inline static int32_t get_offset_of_DefaultDuration_1() { return static_cast<int32_t>(offsetof(PlayableBinding_t354260709_StaticFields, ___DefaultDuration_1)); }
	inline double get_DefaultDuration_1() const { return ___DefaultDuration_1; }
	inline double* get_address_of_DefaultDuration_1() { return &___DefaultDuration_1; }
	inline void set_DefaultDuration_1(double value)
	{
		___DefaultDuration_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_pinvoke
{
	union
	{
		struct
		{
			char* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_pinvoke ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
// Native definition for COM marshalling of UnityEngine.Playables.PlayableBinding
struct PlayableBinding_t354260709_marshaled_com
{
	union
	{
		struct
		{
			Il2CppChar* ___U3CstreamNameU3Ek__BackingField_2;
			int32_t ___U3CstreamTypeU3Ek__BackingField_3;
			Object_t631007953_marshaled_com* ___U3CsourceObjectU3Ek__BackingField_4;
			Type_t * ___U3CsourceBindingTypeU3Ek__BackingField_5;
		};
		uint8_t PlayableBinding_t354260709__padding[1];
	};
};
#endif // PLAYABLEBINDING_T354260709_H
#ifndef MULTICASTDELEGATE_T157516450_H
#define MULTICASTDELEGATE_T157516450_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t157516450  : public Delegate_t1188392813
{
public:
	// System.MulticastDelegate System.MulticastDelegate::prev
	MulticastDelegate_t157516450 * ___prev_9;
	// System.MulticastDelegate System.MulticastDelegate::kpm_next
	MulticastDelegate_t157516450 * ___kpm_next_10;

public:
	inline static int32_t get_offset_of_prev_9() { return static_cast<int32_t>(offsetof(MulticastDelegate_t157516450, ___prev_9)); }
	inline MulticastDelegate_t157516450 * get_prev_9() const { return ___prev_9; }
	inline MulticastDelegate_t157516450 ** get_address_of_prev_9() { return &___prev_9; }
	inline void set_prev_9(MulticastDelegate_t157516450 * value)
	{
		___prev_9 = value;
		Il2CppCodeGenWriteBarrier((&___prev_9), value);
	}

	inline static int32_t get_offset_of_kpm_next_10() { return static_cast<int32_t>(offsetof(MulticastDelegate_t157516450, ___kpm_next_10)); }
	inline MulticastDelegate_t157516450 * get_kpm_next_10() const { return ___kpm_next_10; }
	inline MulticastDelegate_t157516450 ** get_address_of_kpm_next_10() { return &___kpm_next_10; }
	inline void set_kpm_next_10(MulticastDelegate_t157516450 * value)
	{
		___kpm_next_10 = value;
		Il2CppCodeGenWriteBarrier((&___kpm_next_10), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MULTICASTDELEGATE_T157516450_H
#ifndef FRAMEDATA_T2602190594_H
#define FRAMEDATA_T2602190594_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Playables.FrameData
struct  FrameData_t2602190594 
{
public:
	// System.UInt64 UnityEngine.Playables.FrameData::m_FrameID
	uint64_t ___m_FrameID_0;
	// System.Double UnityEngine.Playables.FrameData::m_DeltaTime
	double ___m_DeltaTime_1;
	// System.Single UnityEngine.Playables.FrameData::m_Weight
	float ___m_Weight_2;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveWeight
	float ___m_EffectiveWeight_3;
	// System.Single UnityEngine.Playables.FrameData::m_EffectiveSpeed
	float ___m_EffectiveSpeed_4;
	// UnityEngine.Playables.FrameData/Flags UnityEngine.Playables.FrameData::m_Flags
	int32_t ___m_Flags_5;

public:
	inline static int32_t get_offset_of_m_FrameID_0() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_FrameID_0)); }
	inline uint64_t get_m_FrameID_0() const { return ___m_FrameID_0; }
	inline uint64_t* get_address_of_m_FrameID_0() { return &___m_FrameID_0; }
	inline void set_m_FrameID_0(uint64_t value)
	{
		___m_FrameID_0 = value;
	}

	inline static int32_t get_offset_of_m_DeltaTime_1() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_DeltaTime_1)); }
	inline double get_m_DeltaTime_1() const { return ___m_DeltaTime_1; }
	inline double* get_address_of_m_DeltaTime_1() { return &___m_DeltaTime_1; }
	inline void set_m_DeltaTime_1(double value)
	{
		___m_DeltaTime_1 = value;
	}

	inline static int32_t get_offset_of_m_Weight_2() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_Weight_2)); }
	inline float get_m_Weight_2() const { return ___m_Weight_2; }
	inline float* get_address_of_m_Weight_2() { return &___m_Weight_2; }
	inline void set_m_Weight_2(float value)
	{
		___m_Weight_2 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveWeight_3() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_EffectiveWeight_3)); }
	inline float get_m_EffectiveWeight_3() const { return ___m_EffectiveWeight_3; }
	inline float* get_address_of_m_EffectiveWeight_3() { return &___m_EffectiveWeight_3; }
	inline void set_m_EffectiveWeight_3(float value)
	{
		___m_EffectiveWeight_3 = value;
	}

	inline static int32_t get_offset_of_m_EffectiveSpeed_4() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_EffectiveSpeed_4)); }
	inline float get_m_EffectiveSpeed_4() const { return ___m_EffectiveSpeed_4; }
	inline float* get_address_of_m_EffectiveSpeed_4() { return &___m_EffectiveSpeed_4; }
	inline void set_m_EffectiveSpeed_4(float value)
	{
		___m_EffectiveSpeed_4 = value;
	}

	inline static int32_t get_offset_of_m_Flags_5() { return static_cast<int32_t>(offsetof(FrameData_t2602190594, ___m_Flags_5)); }
	inline int32_t get_m_Flags_5() const { return ___m_Flags_5; }
	inline int32_t* get_address_of_m_Flags_5() { return &___m_Flags_5; }
	inline void set_m_Flags_5(int32_t value)
	{
		___m_Flags_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FRAMEDATA_T2602190594_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.TimeSpan System.DateTime::ticks
	TimeSpan_t881159249  ___ticks_0;
	// System.DateTimeKind System.DateTime::kind
	int32_t ___kind_1;

public:
	inline static int32_t get_offset_of_ticks_0() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___ticks_0)); }
	inline TimeSpan_t881159249  get_ticks_0() const { return ___ticks_0; }
	inline TimeSpan_t881159249 * get_address_of_ticks_0() { return &___ticks_0; }
	inline void set_ticks_0(TimeSpan_t881159249  value)
	{
		___ticks_0 = value;
	}

	inline static int32_t get_offset_of_kind_1() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___kind_1)); }
	inline int32_t get_kind_1() const { return ___kind_1; }
	inline int32_t* get_address_of_kind_1() { return &___kind_1; }
	inline void set_kind_1(int32_t value)
	{
		___kind_1 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_2;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_3;
	// System.String[] System.DateTime::ParseTimeFormats
	StringU5BU5D_t1281789340* ___ParseTimeFormats_4;
	// System.String[] System.DateTime::ParseYearDayMonthFormats
	StringU5BU5D_t1281789340* ___ParseYearDayMonthFormats_5;
	// System.String[] System.DateTime::ParseYearMonthDayFormats
	StringU5BU5D_t1281789340* ___ParseYearMonthDayFormats_6;
	// System.String[] System.DateTime::ParseDayMonthYearFormats
	StringU5BU5D_t1281789340* ___ParseDayMonthYearFormats_7;
	// System.String[] System.DateTime::ParseMonthDayYearFormats
	StringU5BU5D_t1281789340* ___ParseMonthDayYearFormats_8;
	// System.String[] System.DateTime::MonthDayShortFormats
	StringU5BU5D_t1281789340* ___MonthDayShortFormats_9;
	// System.String[] System.DateTime::DayMonthShortFormats
	StringU5BU5D_t1281789340* ___DayMonthShortFormats_10;
	// System.Int32[] System.DateTime::daysmonth
	Int32U5BU5D_t385246372* ___daysmonth_11;
	// System.Int32[] System.DateTime::daysmonthleap
	Int32U5BU5D_t385246372* ___daysmonthleap_12;
	// System.Object System.DateTime::to_local_time_span_object
	RuntimeObject * ___to_local_time_span_object_13;
	// System.Int64 System.DateTime::last_now
	int64_t ___last_now_14;

public:
	inline static int32_t get_offset_of_MaxValue_2() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_2)); }
	inline DateTime_t3738529785  get_MaxValue_2() const { return ___MaxValue_2; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_2() { return &___MaxValue_2; }
	inline void set_MaxValue_2(DateTime_t3738529785  value)
	{
		___MaxValue_2 = value;
	}

	inline static int32_t get_offset_of_MinValue_3() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_3)); }
	inline DateTime_t3738529785  get_MinValue_3() const { return ___MinValue_3; }
	inline DateTime_t3738529785 * get_address_of_MinValue_3() { return &___MinValue_3; }
	inline void set_MinValue_3(DateTime_t3738529785  value)
	{
		___MinValue_3 = value;
	}

	inline static int32_t get_offset_of_ParseTimeFormats_4() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseTimeFormats_4)); }
	inline StringU5BU5D_t1281789340* get_ParseTimeFormats_4() const { return ___ParseTimeFormats_4; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseTimeFormats_4() { return &___ParseTimeFormats_4; }
	inline void set_ParseTimeFormats_4(StringU5BU5D_t1281789340* value)
	{
		___ParseTimeFormats_4 = value;
		Il2CppCodeGenWriteBarrier((&___ParseTimeFormats_4), value);
	}

	inline static int32_t get_offset_of_ParseYearDayMonthFormats_5() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearDayMonthFormats_5)); }
	inline StringU5BU5D_t1281789340* get_ParseYearDayMonthFormats_5() const { return ___ParseYearDayMonthFormats_5; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearDayMonthFormats_5() { return &___ParseYearDayMonthFormats_5; }
	inline void set_ParseYearDayMonthFormats_5(StringU5BU5D_t1281789340* value)
	{
		___ParseYearDayMonthFormats_5 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearDayMonthFormats_5), value);
	}

	inline static int32_t get_offset_of_ParseYearMonthDayFormats_6() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseYearMonthDayFormats_6)); }
	inline StringU5BU5D_t1281789340* get_ParseYearMonthDayFormats_6() const { return ___ParseYearMonthDayFormats_6; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseYearMonthDayFormats_6() { return &___ParseYearMonthDayFormats_6; }
	inline void set_ParseYearMonthDayFormats_6(StringU5BU5D_t1281789340* value)
	{
		___ParseYearMonthDayFormats_6 = value;
		Il2CppCodeGenWriteBarrier((&___ParseYearMonthDayFormats_6), value);
	}

	inline static int32_t get_offset_of_ParseDayMonthYearFormats_7() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseDayMonthYearFormats_7)); }
	inline StringU5BU5D_t1281789340* get_ParseDayMonthYearFormats_7() const { return ___ParseDayMonthYearFormats_7; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseDayMonthYearFormats_7() { return &___ParseDayMonthYearFormats_7; }
	inline void set_ParseDayMonthYearFormats_7(StringU5BU5D_t1281789340* value)
	{
		___ParseDayMonthYearFormats_7 = value;
		Il2CppCodeGenWriteBarrier((&___ParseDayMonthYearFormats_7), value);
	}

	inline static int32_t get_offset_of_ParseMonthDayYearFormats_8() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___ParseMonthDayYearFormats_8)); }
	inline StringU5BU5D_t1281789340* get_ParseMonthDayYearFormats_8() const { return ___ParseMonthDayYearFormats_8; }
	inline StringU5BU5D_t1281789340** get_address_of_ParseMonthDayYearFormats_8() { return &___ParseMonthDayYearFormats_8; }
	inline void set_ParseMonthDayYearFormats_8(StringU5BU5D_t1281789340* value)
	{
		___ParseMonthDayYearFormats_8 = value;
		Il2CppCodeGenWriteBarrier((&___ParseMonthDayYearFormats_8), value);
	}

	inline static int32_t get_offset_of_MonthDayShortFormats_9() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MonthDayShortFormats_9)); }
	inline StringU5BU5D_t1281789340* get_MonthDayShortFormats_9() const { return ___MonthDayShortFormats_9; }
	inline StringU5BU5D_t1281789340** get_address_of_MonthDayShortFormats_9() { return &___MonthDayShortFormats_9; }
	inline void set_MonthDayShortFormats_9(StringU5BU5D_t1281789340* value)
	{
		___MonthDayShortFormats_9 = value;
		Il2CppCodeGenWriteBarrier((&___MonthDayShortFormats_9), value);
	}

	inline static int32_t get_offset_of_DayMonthShortFormats_10() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DayMonthShortFormats_10)); }
	inline StringU5BU5D_t1281789340* get_DayMonthShortFormats_10() const { return ___DayMonthShortFormats_10; }
	inline StringU5BU5D_t1281789340** get_address_of_DayMonthShortFormats_10() { return &___DayMonthShortFormats_10; }
	inline void set_DayMonthShortFormats_10(StringU5BU5D_t1281789340* value)
	{
		___DayMonthShortFormats_10 = value;
		Il2CppCodeGenWriteBarrier((&___DayMonthShortFormats_10), value);
	}

	inline static int32_t get_offset_of_daysmonth_11() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonth_11)); }
	inline Int32U5BU5D_t385246372* get_daysmonth_11() const { return ___daysmonth_11; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonth_11() { return &___daysmonth_11; }
	inline void set_daysmonth_11(Int32U5BU5D_t385246372* value)
	{
		___daysmonth_11 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonth_11), value);
	}

	inline static int32_t get_offset_of_daysmonthleap_12() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___daysmonthleap_12)); }
	inline Int32U5BU5D_t385246372* get_daysmonthleap_12() const { return ___daysmonthleap_12; }
	inline Int32U5BU5D_t385246372** get_address_of_daysmonthleap_12() { return &___daysmonthleap_12; }
	inline void set_daysmonthleap_12(Int32U5BU5D_t385246372* value)
	{
		___daysmonthleap_12 = value;
		Il2CppCodeGenWriteBarrier((&___daysmonthleap_12), value);
	}

	inline static int32_t get_offset_of_to_local_time_span_object_13() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___to_local_time_span_object_13)); }
	inline RuntimeObject * get_to_local_time_span_object_13() const { return ___to_local_time_span_object_13; }
	inline RuntimeObject ** get_address_of_to_local_time_span_object_13() { return &___to_local_time_span_object_13; }
	inline void set_to_local_time_span_object_13(RuntimeObject * value)
	{
		___to_local_time_span_object_13 = value;
		Il2CppCodeGenWriteBarrier((&___to_local_time_span_object_13), value);
	}

	inline static int32_t get_offset_of_last_now_14() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___last_now_14)); }
	inline int64_t get_last_now_14() const { return ___last_now_14; }
	inline int64_t* get_address_of_last_now_14() { return &___last_now_14; }
	inline void set_last_now_14(int64_t value)
	{
		___last_now_14 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef PERSISTENTCALL_T3407714124_H
#define PERSISTENTCALL_T3407714124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.PersistentCall
struct  PersistentCall_t3407714124  : public RuntimeObject
{
public:
	// UnityEngine.Object UnityEngine.Events.PersistentCall::m_Target
	Object_t631007953 * ___m_Target_0;
	// System.String UnityEngine.Events.PersistentCall::m_MethodName
	String_t* ___m_MethodName_1;
	// UnityEngine.Events.PersistentListenerMode UnityEngine.Events.PersistentCall::m_Mode
	int32_t ___m_Mode_2;
	// UnityEngine.Events.ArgumentCache UnityEngine.Events.PersistentCall::m_Arguments
	ArgumentCache_t2187958399 * ___m_Arguments_3;
	// UnityEngine.Events.UnityEventCallState UnityEngine.Events.PersistentCall::m_CallState
	int32_t ___m_CallState_4;

public:
	inline static int32_t get_offset_of_m_Target_0() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Target_0)); }
	inline Object_t631007953 * get_m_Target_0() const { return ___m_Target_0; }
	inline Object_t631007953 ** get_address_of_m_Target_0() { return &___m_Target_0; }
	inline void set_m_Target_0(Object_t631007953 * value)
	{
		___m_Target_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_Target_0), value);
	}

	inline static int32_t get_offset_of_m_MethodName_1() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_MethodName_1)); }
	inline String_t* get_m_MethodName_1() const { return ___m_MethodName_1; }
	inline String_t** get_address_of_m_MethodName_1() { return &___m_MethodName_1; }
	inline void set_m_MethodName_1(String_t* value)
	{
		___m_MethodName_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_MethodName_1), value);
	}

	inline static int32_t get_offset_of_m_Mode_2() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Mode_2)); }
	inline int32_t get_m_Mode_2() const { return ___m_Mode_2; }
	inline int32_t* get_address_of_m_Mode_2() { return &___m_Mode_2; }
	inline void set_m_Mode_2(int32_t value)
	{
		___m_Mode_2 = value;
	}

	inline static int32_t get_offset_of_m_Arguments_3() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_Arguments_3)); }
	inline ArgumentCache_t2187958399 * get_m_Arguments_3() const { return ___m_Arguments_3; }
	inline ArgumentCache_t2187958399 ** get_address_of_m_Arguments_3() { return &___m_Arguments_3; }
	inline void set_m_Arguments_3(ArgumentCache_t2187958399 * value)
	{
		___m_Arguments_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_Arguments_3), value);
	}

	inline static int32_t get_offset_of_m_CallState_4() { return static_cast<int32_t>(offsetof(PersistentCall_t3407714124, ___m_CallState_4)); }
	inline int32_t get_m_CallState_4() const { return ___m_CallState_4; }
	inline int32_t* get_address_of_m_CallState_4() { return &___m_CallState_4; }
	inline void set_m_CallState_4(int32_t value)
	{
		___m_CallState_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PERSISTENTCALL_T3407714124_H
#ifndef UNITYACTION_T3245792599_H
#define UNITYACTION_T3245792599_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Events.UnityAction
struct  UnityAction_t3245792599  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYACTION_T3245792599_H
#ifndef SCORE_T1968645328_H
#define SCORE_T1968645328_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Score
struct  Score_t1968645328  : public RuntimeObject
{
public:
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Score::m_Date
	DateTime_t3738529785  ___m_Date_0;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_FormattedValue
	String_t* ___m_FormattedValue_1;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::m_UserID
	String_t* ___m_UserID_2;
	// System.Int32 UnityEngine.SocialPlatforms.Impl.Score::m_Rank
	int32_t ___m_Rank_3;
	// System.String UnityEngine.SocialPlatforms.Impl.Score::<leaderboardID>k__BackingField
	String_t* ___U3CleaderboardIDU3Ek__BackingField_4;
	// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::<value>k__BackingField
	int64_t ___U3CvalueU3Ek__BackingField_5;

public:
	inline static int32_t get_offset_of_m_Date_0() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_Date_0)); }
	inline DateTime_t3738529785  get_m_Date_0() const { return ___m_Date_0; }
	inline DateTime_t3738529785 * get_address_of_m_Date_0() { return &___m_Date_0; }
	inline void set_m_Date_0(DateTime_t3738529785  value)
	{
		___m_Date_0 = value;
	}

	inline static int32_t get_offset_of_m_FormattedValue_1() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_FormattedValue_1)); }
	inline String_t* get_m_FormattedValue_1() const { return ___m_FormattedValue_1; }
	inline String_t** get_address_of_m_FormattedValue_1() { return &___m_FormattedValue_1; }
	inline void set_m_FormattedValue_1(String_t* value)
	{
		___m_FormattedValue_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_FormattedValue_1), value);
	}

	inline static int32_t get_offset_of_m_UserID_2() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_UserID_2)); }
	inline String_t* get_m_UserID_2() const { return ___m_UserID_2; }
	inline String_t** get_address_of_m_UserID_2() { return &___m_UserID_2; }
	inline void set_m_UserID_2(String_t* value)
	{
		___m_UserID_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_UserID_2), value);
	}

	inline static int32_t get_offset_of_m_Rank_3() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___m_Rank_3)); }
	inline int32_t get_m_Rank_3() const { return ___m_Rank_3; }
	inline int32_t* get_address_of_m_Rank_3() { return &___m_Rank_3; }
	inline void set_m_Rank_3(int32_t value)
	{
		___m_Rank_3 = value;
	}

	inline static int32_t get_offset_of_U3CleaderboardIDU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___U3CleaderboardIDU3Ek__BackingField_4)); }
	inline String_t* get_U3CleaderboardIDU3Ek__BackingField_4() const { return ___U3CleaderboardIDU3Ek__BackingField_4; }
	inline String_t** get_address_of_U3CleaderboardIDU3Ek__BackingField_4() { return &___U3CleaderboardIDU3Ek__BackingField_4; }
	inline void set_U3CleaderboardIDU3Ek__BackingField_4(String_t* value)
	{
		___U3CleaderboardIDU3Ek__BackingField_4 = value;
		Il2CppCodeGenWriteBarrier((&___U3CleaderboardIDU3Ek__BackingField_4), value);
	}

	inline static int32_t get_offset_of_U3CvalueU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Score_t1968645328, ___U3CvalueU3Ek__BackingField_5)); }
	inline int64_t get_U3CvalueU3Ek__BackingField_5() const { return ___U3CvalueU3Ek__BackingField_5; }
	inline int64_t* get_address_of_U3CvalueU3Ek__BackingField_5() { return &___U3CvalueU3Ek__BackingField_5; }
	inline void set_U3CvalueU3Ek__BackingField_5(int64_t value)
	{
		___U3CvalueU3Ek__BackingField_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SCORE_T1968645328_H
#ifndef ACHIEVEMENT_T565359984_H
#define ACHIEVEMENT_T565359984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.Achievement
struct  Achievement_t565359984  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Completed
	bool ___m_Completed_0;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.Achievement::m_Hidden
	bool ___m_Hidden_1;
	// System.DateTime UnityEngine.SocialPlatforms.Impl.Achievement::m_LastReportedDate
	DateTime_t3738529785  ___m_LastReportedDate_2;
	// System.String UnityEngine.SocialPlatforms.Impl.Achievement::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_3;
	// System.Double UnityEngine.SocialPlatforms.Impl.Achievement::<percentCompleted>k__BackingField
	double ___U3CpercentCompletedU3Ek__BackingField_4;

public:
	inline static int32_t get_offset_of_m_Completed_0() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_Completed_0)); }
	inline bool get_m_Completed_0() const { return ___m_Completed_0; }
	inline bool* get_address_of_m_Completed_0() { return &___m_Completed_0; }
	inline void set_m_Completed_0(bool value)
	{
		___m_Completed_0 = value;
	}

	inline static int32_t get_offset_of_m_Hidden_1() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_Hidden_1)); }
	inline bool get_m_Hidden_1() const { return ___m_Hidden_1; }
	inline bool* get_address_of_m_Hidden_1() { return &___m_Hidden_1; }
	inline void set_m_Hidden_1(bool value)
	{
		___m_Hidden_1 = value;
	}

	inline static int32_t get_offset_of_m_LastReportedDate_2() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___m_LastReportedDate_2)); }
	inline DateTime_t3738529785  get_m_LastReportedDate_2() const { return ___m_LastReportedDate_2; }
	inline DateTime_t3738529785 * get_address_of_m_LastReportedDate_2() { return &___m_LastReportedDate_2; }
	inline void set_m_LastReportedDate_2(DateTime_t3738529785  value)
	{
		___m_LastReportedDate_2 = value;
	}

	inline static int32_t get_offset_of_U3CidU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___U3CidU3Ek__BackingField_3)); }
	inline String_t* get_U3CidU3Ek__BackingField_3() const { return ___U3CidU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CidU3Ek__BackingField_3() { return &___U3CidU3Ek__BackingField_3; }
	inline void set_U3CidU3Ek__BackingField_3(String_t* value)
	{
		___U3CidU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((&___U3CidU3Ek__BackingField_3), value);
	}

	inline static int32_t get_offset_of_U3CpercentCompletedU3Ek__BackingField_4() { return static_cast<int32_t>(offsetof(Achievement_t565359984, ___U3CpercentCompletedU3Ek__BackingField_4)); }
	inline double get_U3CpercentCompletedU3Ek__BackingField_4() const { return ___U3CpercentCompletedU3Ek__BackingField_4; }
	inline double* get_address_of_U3CpercentCompletedU3Ek__BackingField_4() { return &___U3CpercentCompletedU3Ek__BackingField_4; }
	inline void set_U3CpercentCompletedU3Ek__BackingField_4(double value)
	{
		___U3CpercentCompletedU3Ek__BackingField_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ACHIEVEMENT_T565359984_H
#ifndef LOCALUSER_T365094499_H
#define LOCALUSER_T365094499_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.SocialPlatforms.Impl.LocalUser
struct  LocalUser_t365094499  : public UserProfile_t3137328177
{
public:
	// UnityEngine.SocialPlatforms.IUserProfile[] UnityEngine.SocialPlatforms.Impl.LocalUser::m_Friends
	IUserProfileU5BU5D_t909679733* ___m_Friends_5;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Authenticated
	bool ___m_Authenticated_6;
	// System.Boolean UnityEngine.SocialPlatforms.Impl.LocalUser::m_Underage
	bool ___m_Underage_7;

public:
	inline static int32_t get_offset_of_m_Friends_5() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Friends_5)); }
	inline IUserProfileU5BU5D_t909679733* get_m_Friends_5() const { return ___m_Friends_5; }
	inline IUserProfileU5BU5D_t909679733** get_address_of_m_Friends_5() { return &___m_Friends_5; }
	inline void set_m_Friends_5(IUserProfileU5BU5D_t909679733* value)
	{
		___m_Friends_5 = value;
		Il2CppCodeGenWriteBarrier((&___m_Friends_5), value);
	}

	inline static int32_t get_offset_of_m_Authenticated_6() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Authenticated_6)); }
	inline bool get_m_Authenticated_6() const { return ___m_Authenticated_6; }
	inline bool* get_address_of_m_Authenticated_6() { return &___m_Authenticated_6; }
	inline void set_m_Authenticated_6(bool value)
	{
		___m_Authenticated_6 = value;
	}

	inline static int32_t get_offset_of_m_Underage_7() { return static_cast<int32_t>(offsetof(LocalUser_t365094499, ___m_Underage_7)); }
	inline bool get_m_Underage_7() const { return ___m_Underage_7; }
	inline bool* get_address_of_m_Underage_7() { return &___m_Underage_7; }
	inline void set_m_Underage_7(bool value)
	{
		___m_Underage_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // LOCALUSER_T365094499_H
#ifndef UPDATEDEVENTHANDLER_T1027848393_H
#define UPDATEDEVENTHANDLER_T1027848393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.RemoteSettings/UpdatedEventHandler
struct  UpdatedEventHandler_t1027848393  : public MulticastDelegate_t157516450
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UPDATEDEVENTHANDLER_T1027848393_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1300 = { sizeof (UnityAnalyticsHandler_t3011359618), sizeof(UnityAnalyticsHandler_t3011359618_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1300[1] = 
{
	UnityAnalyticsHandler_t3011359618::get_offset_of_m_Ptr_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1301 = { sizeof (RemoteSettings_t1718627291), -1, sizeof(RemoteSettings_t1718627291_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1301[1] = 
{
	RemoteSettings_t1718627291_StaticFields::get_offset_of_Updated_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1302 = { sizeof (UpdatedEventHandler_t1027848393), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1303 = { sizeof (GcUserProfileData_t2719720026)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1303[4] = 
{
	GcUserProfileData_t2719720026::get_offset_of_userName_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t2719720026::get_offset_of_userID_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t2719720026::get_offset_of_isFriend_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcUserProfileData_t2719720026::get_offset_of_image_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1304 = { sizeof (GcAchievementDescriptionData_t643925653)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1304[7] = 
{
	GcAchievementDescriptionData_t643925653::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_Title_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_Image_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_AchievedDescription_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_UnachievedDescription_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_Hidden_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementDescriptionData_t643925653::get_offset_of_m_Points_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1305 = { sizeof (GcAchievementData_t675222246)+ sizeof (RuntimeObject), sizeof(GcAchievementData_t675222246_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1305[5] = 
{
	GcAchievementData_t675222246::get_offset_of_m_Identifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t675222246::get_offset_of_m_PercentCompleted_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t675222246::get_offset_of_m_Completed_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t675222246::get_offset_of_m_Hidden_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcAchievementData_t675222246::get_offset_of_m_LastReportedDate_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1306 = { sizeof (GcScoreData_t2125309831)+ sizeof (RuntimeObject), sizeof(GcScoreData_t2125309831_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable1306[7] = 
{
	GcScoreData_t2125309831::get_offset_of_m_Category_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_ValueLow_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_ValueHigh_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_Date_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_FormattedValue_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_PlayerID_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	GcScoreData_t2125309831::get_offset_of_m_Rank_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1307 = { sizeof (GameCenterPlatform_t2679391364), -1, sizeof(GameCenterPlatform_t2679391364_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1307[7] = 
{
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_s_AuthenticateCallback_0(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_s_adCache_1(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_s_friends_2(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_s_users_3(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_s_ResetAchievements_4(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_m_LocalUser_5(),
	GameCenterPlatform_t2679391364_StaticFields::get_offset_of_m_GcBoards_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1308 = { sizeof (U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t1940008395), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1308[1] = 
{
	U3CUnityEngine_SocialPlatforms_ISocialPlatform_AuthenticateU3Ec__AnonStorey0_t1940008395::get_offset_of_callback_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1309 = { sizeof (LocalUser_t365094499), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1309[3] = 
{
	LocalUser_t365094499::get_offset_of_m_Friends_5(),
	LocalUser_t365094499::get_offset_of_m_Authenticated_6(),
	LocalUser_t365094499::get_offset_of_m_Underage_7(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1310 = { sizeof (UserProfile_t3137328177), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1310[5] = 
{
	UserProfile_t3137328177::get_offset_of_m_UserName_0(),
	UserProfile_t3137328177::get_offset_of_m_ID_1(),
	UserProfile_t3137328177::get_offset_of_m_IsFriend_2(),
	UserProfile_t3137328177::get_offset_of_m_State_3(),
	UserProfile_t3137328177::get_offset_of_m_Image_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1311 = { sizeof (Achievement_t565359984), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1311[5] = 
{
	Achievement_t565359984::get_offset_of_m_Completed_0(),
	Achievement_t565359984::get_offset_of_m_Hidden_1(),
	Achievement_t565359984::get_offset_of_m_LastReportedDate_2(),
	Achievement_t565359984::get_offset_of_U3CidU3Ek__BackingField_3(),
	Achievement_t565359984::get_offset_of_U3CpercentCompletedU3Ek__BackingField_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1312 = { sizeof (AchievementDescription_t3217594527), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1312[7] = 
{
	AchievementDescription_t3217594527::get_offset_of_m_Title_0(),
	AchievementDescription_t3217594527::get_offset_of_m_Image_1(),
	AchievementDescription_t3217594527::get_offset_of_m_AchievedDescription_2(),
	AchievementDescription_t3217594527::get_offset_of_m_UnachievedDescription_3(),
	AchievementDescription_t3217594527::get_offset_of_m_Hidden_4(),
	AchievementDescription_t3217594527::get_offset_of_m_Points_5(),
	AchievementDescription_t3217594527::get_offset_of_U3CidU3Ek__BackingField_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1313 = { sizeof (Score_t1968645328), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1313[6] = 
{
	Score_t1968645328::get_offset_of_m_Date_0(),
	Score_t1968645328::get_offset_of_m_FormattedValue_1(),
	Score_t1968645328::get_offset_of_m_UserID_2(),
	Score_t1968645328::get_offset_of_m_Rank_3(),
	Score_t1968645328::get_offset_of_U3CleaderboardIDU3Ek__BackingField_4(),
	Score_t1968645328::get_offset_of_U3CvalueU3Ek__BackingField_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1314 = { sizeof (Leaderboard_t1065076763), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1314[10] = 
{
	Leaderboard_t1065076763::get_offset_of_m_Loading_0(),
	Leaderboard_t1065076763::get_offset_of_m_LocalUserScore_1(),
	Leaderboard_t1065076763::get_offset_of_m_MaxRange_2(),
	Leaderboard_t1065076763::get_offset_of_m_Scores_3(),
	Leaderboard_t1065076763::get_offset_of_m_Title_4(),
	Leaderboard_t1065076763::get_offset_of_m_UserIDs_5(),
	Leaderboard_t1065076763::get_offset_of_U3CidU3Ek__BackingField_6(),
	Leaderboard_t1065076763::get_offset_of_U3CuserScopeU3Ek__BackingField_7(),
	Leaderboard_t1065076763::get_offset_of_U3CrangeU3Ek__BackingField_8(),
	Leaderboard_t1065076763::get_offset_of_U3CtimeScopeU3Ek__BackingField_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1315 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1316 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1317 = { sizeof (UserState_t4177058321)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1317[6] = 
{
	UserState_t4177058321::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1318 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1319 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1320 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1321 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1322 = { sizeof (UserScope_t604006431)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1322[3] = 
{
	UserScope_t604006431::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1323 = { sizeof (TimeScope_t539351503)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1323[4] = 
{
	TimeScope_t539351503::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1324 = { sizeof (Range_t173988048)+ sizeof (RuntimeObject), sizeof(Range_t173988048 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1324[2] = 
{
	Range_t173988048::get_offset_of_from_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Range_t173988048::get_offset_of_count_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1325 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1326 = { sizeof (GcLeaderboard_t4132273028), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1326[2] = 
{
	GcLeaderboard_t4132273028::get_offset_of_m_InternalLeaderboard_0(),
	GcLeaderboard_t4132273028::get_offset_of_m_GenericLeaderboard_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1327 = { sizeof (AttributeHelperEngine_t2735742303), -1, sizeof(AttributeHelperEngine_t2735742303_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1327[3] = 
{
	AttributeHelperEngine_t2735742303_StaticFields::get_offset_of__disallowMultipleComponentArray_0(),
	AttributeHelperEngine_t2735742303_StaticFields::get_offset_of__executeInEditModeArray_1(),
	AttributeHelperEngine_t2735742303_StaticFields::get_offset_of__requireComponentArray_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1328 = { sizeof (DisallowMultipleComponent_t1422053217), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1329 = { sizeof (RequireComponent_t3490506609), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1329[3] = 
{
	RequireComponent_t3490506609::get_offset_of_m_Type0_0(),
	RequireComponent_t3490506609::get_offset_of_m_Type1_1(),
	RequireComponent_t3490506609::get_offset_of_m_Type2_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1330 = { sizeof (AddComponentMenu_t415040132), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1330[2] = 
{
	AddComponentMenu_t415040132::get_offset_of_m_AddComponentMenu_0(),
	AddComponentMenu_t415040132::get_offset_of_m_Ordering_1(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1331 = { sizeof (ContextMenu_t1295656858), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1331[3] = 
{
	ContextMenu_t1295656858::get_offset_of_menuItem_0(),
	ContextMenu_t1295656858::get_offset_of_validate_1(),
	ContextMenu_t1295656858::get_offset_of_priority_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1332 = { sizeof (ExecuteInEditMode_t3727731349), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1333 = { sizeof (DefaultExecutionOrder_t3059642329), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1333[1] = 
{
	DefaultExecutionOrder_t3059642329::get_offset_of_U3CorderU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1334 = { sizeof (NativeClassAttribute_t2601352714), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1334[1] = 
{
	NativeClassAttribute_t2601352714::get_offset_of_U3CQualifiedNativeNameU3Ek__BackingField_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1335 = { sizeof (AssemblyIsEditorAssembly_t3442416807), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1336 = { sizeof (WritableAttribute_t812406054), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1337 = { sizeof (GeneratedByOldBindingsGeneratorAttribute_t433318409), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1338 = { sizeof (SendMessageOptions_t3580193095)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1338[3] = 
{
	SendMessageOptions_t3580193095::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1339 = { sizeof (Space_t654135784)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1339[3] = 
{
	Space_t654135784::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1340 = { sizeof (LogType_t73765434)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1340[6] = 
{
	LogType_t73765434::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1341 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1341[2] = 
{
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1342 = { sizeof (ClassLibraryInitializer_t2339504045), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1343 = { sizeof (SetupCoroutine_t2062820429), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1344 = { sizeof (CameraClearFlags_t2362496923)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1344[6] = 
{
	CameraClearFlags_t2362496923::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1345 = { sizeof (TextureFormat_t2701165832)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1345[54] = 
{
	TextureFormat_t2701165832::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1346 = { sizeof (MathfInternal_t624072491)+ sizeof (RuntimeObject), sizeof(MathfInternal_t624072491 ), sizeof(MathfInternal_t624072491_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1346[3] = 
{
	MathfInternal_t624072491_StaticFields::get_offset_of_FloatMinNormal_0(),
	MathfInternal_t624072491_StaticFields::get_offset_of_FloatMinDenormal_1(),
	MathfInternal_t624072491_StaticFields::get_offset_of_IsFlushToZeroEnabled_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1347 = { sizeof (SendMouseEvents_t3273302915), -1, sizeof(SendMouseEvents_t3273302915_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1347[5] = 
{
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_s_MouseUsed_0(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_LastHit_1(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_MouseDownHit_2(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_CurrentHit_3(),
	SendMouseEvents_t3273302915_StaticFields::get_offset_of_m_Cameras_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1348 = { sizeof (HitInfo_t3229609740)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1348[2] = 
{
	HitInfo_t3229609740::get_offset_of_target_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	HitInfo_t3229609740::get_offset_of_camera_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1349 = { sizeof (Ray_t3785851493)+ sizeof (RuntimeObject), sizeof(Ray_t3785851493 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1349[2] = 
{
	Ray_t3785851493::get_offset_of_m_Origin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Ray_t3785851493::get_offset_of_m_Direction_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1350 = { sizeof (Rect_t2360479859)+ sizeof (RuntimeObject), sizeof(Rect_t2360479859 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1350[4] = 
{
	Rect_t2360479859::get_offset_of_m_XMin_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_YMin_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_Width_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Rect_t2360479859::get_offset_of_m_Height_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1351 = { sizeof (SerializePrivateVariables_t3872960625), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1352 = { sizeof (SerializeField_t3286833614), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1353 = { sizeof (PreferBinarySerialization_t2906007930), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1354 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1355 = { sizeof (StackTraceUtility_t3465565809), -1, sizeof(StackTraceUtility_t3465565809_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1355[1] = 
{
	StackTraceUtility_t3465565809_StaticFields::get_offset_of_projectFolder_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1356 = { sizeof (UnityException_t3598173660), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1356[2] = 
{
	0,
	UnityException_t3598173660::get_offset_of_unityStackTrace_12(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1357 = { sizeof (PersistentListenerMode_t232255230)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1357[8] = 
{
	PersistentListenerMode_t232255230::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1358 = { sizeof (ArgumentCache_t2187958399), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1358[6] = 
{
	ArgumentCache_t2187958399::get_offset_of_m_ObjectArgument_0(),
	ArgumentCache_t2187958399::get_offset_of_m_ObjectArgumentAssemblyTypeName_1(),
	ArgumentCache_t2187958399::get_offset_of_m_IntArgument_2(),
	ArgumentCache_t2187958399::get_offset_of_m_FloatArgument_3(),
	ArgumentCache_t2187958399::get_offset_of_m_StringArgument_4(),
	ArgumentCache_t2187958399::get_offset_of_m_BoolArgument_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1359 = { sizeof (BaseInvokableCall_t2703961024), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1360 = { sizeof (InvokableCall_t832123510), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1360[1] = 
{
	InvokableCall_t832123510::get_offset_of_Delegate_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1361 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1361[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1362 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1362[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1363 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1363[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1364 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1364[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1365 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1365[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1366 = { sizeof (UnityEventCallState_t3448586328)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1366[4] = 
{
	UnityEventCallState_t3448586328::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1367 = { sizeof (PersistentCall_t3407714124), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1367[5] = 
{
	PersistentCall_t3407714124::get_offset_of_m_Target_0(),
	PersistentCall_t3407714124::get_offset_of_m_MethodName_1(),
	PersistentCall_t3407714124::get_offset_of_m_Mode_2(),
	PersistentCall_t3407714124::get_offset_of_m_Arguments_3(),
	PersistentCall_t3407714124::get_offset_of_m_CallState_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1368 = { sizeof (PersistentCallGroup_t3050769227), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1368[1] = 
{
	PersistentCallGroup_t3050769227::get_offset_of_m_Calls_0(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1369 = { sizeof (InvokableCallList_t2498835369), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1369[4] = 
{
	InvokableCallList_t2498835369::get_offset_of_m_PersistentCalls_0(),
	InvokableCallList_t2498835369::get_offset_of_m_RuntimeCalls_1(),
	InvokableCallList_t2498835369::get_offset_of_m_ExecutingCalls_2(),
	InvokableCallList_t2498835369::get_offset_of_m_NeedsUpdate_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1370 = { sizeof (UnityEventBase_t3960448221), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1370[4] = 
{
	UnityEventBase_t3960448221::get_offset_of_m_Calls_0(),
	UnityEventBase_t3960448221::get_offset_of_m_PersistentCalls_1(),
	UnityEventBase_t3960448221::get_offset_of_m_TypeName_2(),
	UnityEventBase_t3960448221::get_offset_of_m_CallsDirty_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1371 = { sizeof (UnityAction_t3245792599), sizeof(Il2CppMethodPointer), 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1372 = { sizeof (UnityEvent_t2581268647), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1372[1] = 
{
	UnityEvent_t2581268647::get_offset_of_m_InvokeArray_4(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1373 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1374 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1374[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1375 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1376 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1376[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1377 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1378 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1378[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1379 = { 0, 0, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1380 = { 0, 0, 0, 0 };
extern const int32_t g_FieldOffsetTable1380[1] = 
{
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1381 = { sizeof (UnityString_t1423233093), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1382 = { sizeof (UnitySynchronizationContext_t1887453786), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1382[2] = 
{
	UnitySynchronizationContext_t1887453786::get_offset_of_m_AsyncWorkQueue_1(),
	UnitySynchronizationContext_t1887453786::get_offset_of_m_MainThreadID_2(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1383 = { sizeof (WorkRequest_t1354518612)+ sizeof (RuntimeObject), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1383[3] = 
{
	WorkRequest_t1354518612::get_offset_of_m_DelagateCallback_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t1354518612::get_offset_of_m_DelagateState_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	WorkRequest_t1354518612::get_offset_of_m_WaitHandle_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1384 = { sizeof (Vector2_t2156229523)+ sizeof (RuntimeObject), sizeof(Vector2_t2156229523 ), sizeof(Vector2_t2156229523_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1384[10] = 
{
	Vector2_t2156229523::get_offset_of_x_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2156229523::get_offset_of_y_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	Vector2_t2156229523_StaticFields::get_offset_of_zeroVector_2(),
	Vector2_t2156229523_StaticFields::get_offset_of_oneVector_3(),
	Vector2_t2156229523_StaticFields::get_offset_of_upVector_4(),
	Vector2_t2156229523_StaticFields::get_offset_of_downVector_5(),
	Vector2_t2156229523_StaticFields::get_offset_of_leftVector_6(),
	Vector2_t2156229523_StaticFields::get_offset_of_rightVector_7(),
	Vector2_t2156229523_StaticFields::get_offset_of_positiveInfinityVector_8(),
	Vector2_t2156229523_StaticFields::get_offset_of_negativeInfinityVector_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1385 = { sizeof (ThreadAndSerializationSafeAttribute_t363116225), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1386 = { sizeof (ReadOnlyAttribute_t2029203740), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1387 = { sizeof (ReadWriteAttribute_t306517538), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1388 = { sizeof (WriteOnlyAttribute_t595109273), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1389 = { sizeof (DeallocateOnJobCompletionAttribute_t3131681843), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1390 = { sizeof (NativeContainerAttribute_t2600515814), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1391 = { sizeof (NativeContainerSupportsAtomicWriteAttribute_t3790689680), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1392 = { sizeof (NativeContainerSupportsMinMaxWriteRestrictionAttribute_t1586929818), -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1393 = { sizeof (FrameData_t2602190594)+ sizeof (RuntimeObject), sizeof(FrameData_t2602190594 ), 0, 0 };
extern const int32_t g_FieldOffsetTable1393[6] = 
{
	FrameData_t2602190594::get_offset_of_m_FrameID_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2602190594::get_offset_of_m_DeltaTime_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2602190594::get_offset_of_m_Weight_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2602190594::get_offset_of_m_EffectiveWeight_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2602190594::get_offset_of_m_EffectiveSpeed_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	FrameData_t2602190594::get_offset_of_m_Flags_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1394 = { sizeof (Flags_t128269323)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable1394[5] = 
{
	Flags_t128269323::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1395 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1396 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1397 = { 0, -1, 0, 0 };
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1398 = { sizeof (PlayableBinding_t354260709)+ sizeof (RuntimeObject), -1, sizeof(PlayableBinding_t354260709_StaticFields), 0 };
extern const int32_t g_FieldOffsetTable1398[6] = 
{
	PlayableBinding_t354260709_StaticFields::get_offset_of_None_0(),
	PlayableBinding_t354260709_StaticFields::get_offset_of_DefaultDuration_1(),
	PlayableBinding_t354260709::get_offset_of_U3CstreamNameU3Ek__BackingField_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CstreamTypeU3Ek__BackingField_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CsourceObjectU3Ek__BackingField_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	PlayableBinding_t354260709::get_offset_of_U3CsourceBindingTypeU3Ek__BackingField_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1399 = { 0, -1, 0, 0 };
#ifdef __clang__
#pragma clang diagnostic pop
#endif
