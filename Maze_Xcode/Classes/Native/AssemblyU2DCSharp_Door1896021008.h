#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioClip
struct AudioClip_t1932558630;
// UnityEngine.AudioSource
struct AudioSource_t1135106623;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Door
struct  Door_t1896021008  : public MonoBehaviour_t1158329972
{
public:
	// System.Boolean Door::locked
	bool ___locked_2;
	// System.Boolean Door::closed
	bool ___closed_3;
	// UnityEngine.AudioClip Door::doorOpened
	AudioClip_t1932558630 * ___doorOpened_4;
	// UnityEngine.AudioClip Door::doorClosed
	AudioClip_t1932558630 * ___doorClosed_5;
	// UnityEngine.AudioSource Door::doorAudioSource
	AudioSource_t1135106623 * ___doorAudioSource_6;

public:
	inline static int32_t get_offset_of_locked_2() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___locked_2)); }
	inline bool get_locked_2() const { return ___locked_2; }
	inline bool* get_address_of_locked_2() { return &___locked_2; }
	inline void set_locked_2(bool value)
	{
		___locked_2 = value;
	}

	inline static int32_t get_offset_of_closed_3() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___closed_3)); }
	inline bool get_closed_3() const { return ___closed_3; }
	inline bool* get_address_of_closed_3() { return &___closed_3; }
	inline void set_closed_3(bool value)
	{
		___closed_3 = value;
	}

	inline static int32_t get_offset_of_doorOpened_4() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorOpened_4)); }
	inline AudioClip_t1932558630 * get_doorOpened_4() const { return ___doorOpened_4; }
	inline AudioClip_t1932558630 ** get_address_of_doorOpened_4() { return &___doorOpened_4; }
	inline void set_doorOpened_4(AudioClip_t1932558630 * value)
	{
		___doorOpened_4 = value;
		Il2CppCodeGenWriteBarrier(&___doorOpened_4, value);
	}

	inline static int32_t get_offset_of_doorClosed_5() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorClosed_5)); }
	inline AudioClip_t1932558630 * get_doorClosed_5() const { return ___doorClosed_5; }
	inline AudioClip_t1932558630 ** get_address_of_doorClosed_5() { return &___doorClosed_5; }
	inline void set_doorClosed_5(AudioClip_t1932558630 * value)
	{
		___doorClosed_5 = value;
		Il2CppCodeGenWriteBarrier(&___doorClosed_5, value);
	}

	inline static int32_t get_offset_of_doorAudioSource_6() { return static_cast<int32_t>(offsetof(Door_t1896021008, ___doorAudioSource_6)); }
	inline AudioSource_t1135106623 * get_doorAudioSource_6() const { return ___doorAudioSource_6; }
	inline AudioSource_t1135106623 ** get_address_of_doorAudioSource_6() { return &___doorAudioSource_6; }
	inline void set_doorAudioSource_6(AudioSource_t1135106623 * value)
	{
		___doorAudioSource_6 = value;
		Il2CppCodeGenWriteBarrier(&___doorAudioSource_6, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
