#pragma once

#include <Availability.h>
#include <TargetConditionals.h>

//------------------------------------------------------------------------------
//
// ensuring proper compiler/xcode/whatever selection
//

#ifndef __clang__
#error please use clang compiler.
#endif

// NOT the best way but apple do not care about adding extensions properly
#if __clang_major__ < 6
#error please use xcode 6.0 or newer
#endif

#if !defined(__IPHONE_8_0) || __IPHONE_OS_VERSION_MAX_ALLOWED < __IPHONE_8_0
#error please use ios sdk 8.0 or newer
#endif

#if !defined(__IPHONE_6_0) || __IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_6_0
#error please target ios 6.0 or newer
#endif

#define UNITY_TRAMPOLINE_IN_USE 1

//------------------------------------------------------------------------------
//
// defines for sdk/target version
//

#define UNITY_PRE_IOS7_TARGET (__IPHONE_OS_VERSION_MIN_REQUIRED < __IPHONE_7_0)

#if !TARGET_IPHONE_SIMULATOR && !TARGET_TVOS_SIMULATOR
    #define UNITY_CAN_USE_METAL     1
#else
    #define UNITY_CAN_USE_METAL     0
#endif

// It's hard to figure out which SDK we are using as the availability macros defined in the SDK
// have various quirks.
//
// It's not possible to use *_VERSION_MAX_ALLOWED macros because they not always corresponded to
// the SDK version. In particular, __TV_OS_VERSION_MAX_ALLOWED was out of sync in all Xcode dot
// releases except the first so far.
//
// The highest __IPHONE_X_Y or __TVOS_X_Y macro that is defined in Availability.h correctly
// corresponds to the version of the SDK (at least in each Xcode version since 6.0 up to 9.0).
// However, some other headers (e.g. System/Library/Frameworks/QuartzCore.framework/Headers/CABase.h
// in SDKs up to 9.3) may define the macros itself and this does not correspond to the what's in
// Availability.h. Thus we make sure to include "Preprocessor.h" before the CABase.h header.
#if defined(CABASE_H)
#error "Please include Preprocessor.h before other includes"
#endif

#if defined(__IPHONE_10_0)
    #define UNITY_HAS_IOSSDK_10_0  1
#else
    #define UNITY_HAS_IOSSDK_10_0  0
#endif
#if defined(__IPHONE_10_2)
    #define UNITY_HAS_IOSSDK_10_2  1
#else
    #define UNITY_HAS_IOSSDK_10_2  0
#endif
#if defined(__IPHONE_10_3)
    #define UNITY_HAS_IOSSDK_10_3  1
#else
    #define UNITY_HAS_IOSSDK_10_3  0
#endif
#if defined(__IPHONE_11_0)
    #define UNITY_HAS_IOSSDK_11_0  1
#else
    #define UNITY_HAS_IOSSDK_11_0  0
#endif
#if defined(__TVOS_10_0)
    #define UNITY_HAS_TVOSSDK_10_0 1
#else
    #define UNITY_HAS_TVOSSDK_10_0 0
#endif
#if defined(__TVOS_10_2)
    #define UNITY_HAS_TVOSSDK_10_2 1
#else
    #define UNITY_HAS_TVOSSDK_10_2 0
#endif
#if defined(__TVOS_11_0)
    #define UNITY_HAS_TVOSSDK_11_0 1
#else
    #define UNITY_HAS_TVOSSDK_11_0 0
#endif

// The following UNITY_USES_* flags disable functionality in the trampoline project
// whenever the user does not use it from his scripts. We detect the API usage and
// adjust the value of these flags whenever the project is built (including when the
// project is appended)
#define UNITY_USES_REMOTE_NOTIFICATIONS 0
#define UNITY_USES_WEBCAM 0
#define UNITY_USES_MICROPHONE 0
#define UNITY_USES_REPLAY_KIT 0
#define UNITY_SNAPSHOT_VIEW_ON_APPLICATION_PAUSE 0
#define UNITY_DEVELOPER_BUILD 1

#define USE_IL2CPP_PCH 0
#define UNITY_SUPPORT_ROTATION PLATFORM_IOS

#define PLATFORM_TVOS 0
#define PLATFORM_IOS 1
#define PLATFORM_OSX 0

#if !defined(__IPHONE_9_0) && !defined(__TVOS_10_0)
    #define UNITY_REPLAY_KIT_AVAILABLE 0
#else
    #define UNITY_REPLAY_KIT_AVAILABLE (UNITY_USES_REPLAY_KIT && ((PLATFORM_IOS || PLATFORM_TVOS) && (__IPHONE_OS_VERSION_MAX_ALLOWED >= __IPHONE_9_0 || __TVOS_OS_VERSION_MAX_ALLOWED >= __TVOS_10_0)))
#endif
#if PLATFORM_TVOS
    #define UNITY_TVOS_ORIENTATION landscapeLeft
#endif
