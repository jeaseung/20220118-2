#include<iostream>
#include"Player.h"
#include"Monster.h"
#include"Goblin.h"
#include<vector> // ���� �ٲ�� �迭, STL
using namespace std;


int main()
{
	//�ڷ� ����
	//STL
	//�ڷ� ����(Container)

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
		cout << "Player " << i + 1 << "��° HP : " << PlayerList[i]->GetHP() << endl;
	}

	for (size_t i = 0; i < PlayerList.size(); i++)
	{
		delete PlayerList[i];
	}
	PlayerList.clear();

	cout << PlayerList.size() << endl;


	return 0;
}