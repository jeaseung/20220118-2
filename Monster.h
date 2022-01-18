#pragma once
class Monster
{
public://캡슐화, 외부 노출
	// 상속
	
	int MP;
private://캡슐화 : 외부노출 X
	//상속 : 상속은 안한다. 
	int Gold;

public:

	void attack();
	void Run();
	void Move();

protected:

	int HP;
	//캡슐화 : 외부노출 X
	//상속 : 상속 해주겠다. 
};

