#pragma once
#include"Monster.h"
class Goblin:public Monster
{
	int HP;
	int MP;

	void attack();
	void Run();
	void Move();
};

