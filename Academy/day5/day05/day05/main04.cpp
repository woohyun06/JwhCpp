#include <iostream>

using namespace std;

void main()
{
	//반복문
	//3가지
	//for , while ,do while

	//반복한다.
	//반복하기 위해서 만들어진 문법

	//사용법
	for (int i = 0; i < 1000; i++)
	{

	}
	// =>1000번 반복한다
	// 주로 for문은 [i=0;i++]이 고정
	//가독성측면에서
	//코드를 보고 한글로 해석하는 행위
	//아 1000번 반복하는 코드구나
	//길이가 정해져있는 배열이랑 같이 쓰기 좋음


	//while문
	//bool isGamePlaying = true;
	//while (isGamePlaying == true)
	//{
	//	cout << "게임을 종료하시겟습니까?(0 : 예, 그외 : 아니요)" << endl;
	//	int choice;
	//	cin >> choice;
	//	if (choice == 0)
	//	{
	//		isGamePlaying = false;
	//	}
	//}


	// while (조건식)
	//  {
	//     실행구문
	//  }


	//while은 그럼 보통 언제쓰는가>
	//우리가 한글로 해석했을때,~~한는 동안 이라는 느낌이나면 while을 씀

	//for문은 =>몇 번
	//while문은 => ~~하는 동안


	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	// 진짜 자주안쓰이는 반복문
	//do while

	//do
	//{
	//	실행구문
	//}while(조건식);

	//while문과 차이점이 딱하나있다.
	//무조건 1번은 실행한다.
	//조건식이 일치하던 일치하지 않던

	int choice = 0;
	do
	{
		cout << "왼손(0)과 오른손(1)중에 선택해주세요." << endl;
		cin >> choice;
	}while(2)

}