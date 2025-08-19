#pragma once
#include "Vector.h"
#include <cstdint>

class Player
{
public:
	char pad_0000[4]; //0x0000
	float HeadX; //0x0004
	float HeadZ; //0x0008
	float HeadY; //0x000C
	char pad_0010[24]; //0x0010
	float FeetX; //0x0028
	float FeetZ; //0x002C
	float FeetY; //0x0030
	float Yaw; //0x0034
	float Pitch; //0x0038
	char pad_003C[692]; //0x003C
	int32_t Team; //0x02F0
	char pad_02F4[5426]; //0x02F4
}; //Size: 0x1826

class Info
{
public:
	class Ent* EntPtr; //0x0000
}; //Size: 0x0004

class Entity
{
public:
	class Info Bot[32]; //0x0000
	char pad_0080[2108]; //0x0080
}; //Size: 0x08BC

class Ent
{
public:
	char pad_0000[4]; //0x0000
	float HeadX; //0x0004
	float HeadZ; //0x0008
	float HeadY; //0x000C
	char pad_0010[24]; //0x0010
	float FeetX; //0x0028
	float FeetZ; //0x002C
	float FeetY; //0x0030
	float Yaw; //0x0034
	float Pitch; //0x0038
	char pad_003C[176]; //0x003C
	int32_t Health; //0x00EC
	char pad_00F0[504]; //0x00F0
	int32_t Team; //0x02E8
	char pad_02EC[832]; //0x02EC
}; //Size: 0x062C

class N000008EE
{
public:
	char pad_0000[4]; //0x0000
}; //Size: 0x0004