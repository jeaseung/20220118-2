#include<iostream>
#include"Player.h"
#include"Monster.h"
using namespace std;


int main()
{
	Player NewPlayer;

	NewPlayer.Gold = 10;
	NewPlayer.SetHP(-100);
	NewPlayer.GetHP();
	NewPlayer.Collect();

	Monster Goblin;
	Monster Slime;
	Monster Wildpig;

	Goblin.HP = 50;
	Slime.HP = 50;
	Wildpig.HP = 50;

	return 0;
}