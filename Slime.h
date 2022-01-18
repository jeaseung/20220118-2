#pragma once
#include"Monster.h"
class Slime:public Monster
{
	int HP;
	int MP;

	void attack();
	void Run();
	void Move();
};

