#include<iostream>
#include"Player.h"
#include"Monster.h"
#include"Goblin.h"
#include<vector> // 쉽게 바뀌는 배열, STL
using namespace std;


int main()
{
	//자료 구조
	//STL
	//자료 저장(Container)

	vector<Player*> PlayerList;

	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());
	PlayerList.push_back(new Player());


	cout << PlayerList.size() << endl;

	for (size_t i = 0;i < PlayerList.size(); i++)
	{
		cout << "Player " << i + 1 << "번째 HP : " << PlayerList[i]->GetHP() << endl;
	}

	for (size_t i = 0; i < PlayerList.size(); i++)
	{
		delete PlayerList[i];
	}
	PlayerList.clear();

	cout << PlayerList.size() << endl;


	return 0;
}