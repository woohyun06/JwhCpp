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
		cout << "바위" << endl;
	}
	else if (myHand == (int)ERockScissorPaper::Scissor)
	{
		cout << "가위" << endl;
	}
	else if(myHand == (int)ERockScissorPaper::Paper)
	{
		cout << "보" << endl;
	}
	
}

void main()
{
	//함수.
	// void main()
	//{
	//}

	//void 함수명()
	//{
	//		함수내용
	//}



}