#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Key
struct  Key_t2293551073  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject Key::keyPoofPrefab
	GameObject_t1756533147 * ___keyPoofPrefab_2;
	// UnityEngine.GameObject Key::door
	GameObject_t1756533147 * ___door_3;

public:
	inline static int32_t get_offset_of_keyPoofPrefab_2() { return static_cast<int32_t>(offsetof(Key_t2293551073, ___keyPoofPrefab_2)); }
	inline GameObject_t1756533147 * get_keyPoofPrefab_2() const { return ___keyPoofPrefab_2; }
	inline GameObject_t1756533147 ** get_address_of_keyPoofPrefab_2() { return &___keyPoofPrefab_2; }
	inline void set_keyPoofPrefab_2(GameObject_t1756533147 * value)
	{
		___keyPoofPrefab_2 = value;
		Il2CppCodeGenWriteBarrier(&___keyPoofPrefab_2, value);
	}

	inline static int32_t get_offset_of_door_3() { return static_cast<int32_t>(offsetof(Key_t2293551073, ___door_3)); }
	inline GameObject_t1756533147 * get_door_3() const { return ___door_3; }
	inline GameObject_t1756533147 ** get_address_of_door_3() { return &___door_3; }
	inline void set_door_3(GameObject_t1756533147 * value)
	{
		___door_3 = value;
		Il2CppCodeGenWriteBarrier(&___door_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
