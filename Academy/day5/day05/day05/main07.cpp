#include <iostream>

using namespace std;

enum class ERockScissorPaper
{
	Rock,
	Scissor,
	Paper,
	End
};

int myHand = 0;

void PrintRockScissorPaper()
{
	if (myHand == (int)ERockScissorPaper::Rock)
	{
		cout << "����" << endl;
	}
	else if (myHand == (int)ERockScissorPaper::Scissor)
	{
		cout << "����" << endl;
	}
	else if(myHand == (int)ERockScissorPaper::Paper)
	{
		cout << "��" << endl;
	}
	
}

void main()
{
	//�Լ�.
	// void main()
	//{
	//}

	//void �Լ���()
	//{
	//		�Լ�����
	//}



}