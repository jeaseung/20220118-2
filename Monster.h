#pragma once
class Monster
{
public://ĸ��ȭ, �ܺ� ����
	// ���
	
	int MP;
private://ĸ��ȭ : �ܺγ��� X
	//��� : ����� ���Ѵ�. 
	int Gold;

public:

	void attack();
	void Run();
	void Move();

protected:

	int HP;
	//ĸ��ȭ : �ܺγ��� X
	//��� : ��� ���ְڴ�. 
};

