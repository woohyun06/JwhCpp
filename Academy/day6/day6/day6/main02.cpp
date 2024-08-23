#include <iostream>
using namespace std;

bool isUserNumberComplete = true;

int ComputerNumber[4];
void ChooseUserNumber();
void ChooseComputerNumber();
void CompareNumbers();
void CheckValidationUserNumber();
void PrintStrikeBall();

void main()
{

	//숫자야구
	//수도코드
	//
	// 가장 간단한 룰
	// 
	//1.컴퓨터가 랜덤숫자를 뽑는다(4자리)
	//2.유저가 랜덤숫자를 외친다.
	//3. 그 외친숫자가 올바른 숫자인지 판단한다.
	//4.올바른 숫자라면 5번으로, 올바르지 않은 숫자라면 2번으로 간다.
	//5.외친 숫자와 컴퓨터가 정한 숫자를 비교하여 strike,ball을 체크한다.

	//가장간단한 룰 형태를 함수로
	//1.ChooseComputerNumber();
	//2.ChooseUserNumber();
	//3.CheckValidationUserNumber();
	//4.-
	//5.CompareNumber();
	//6.PrintStrikeBallCount();
	//7.2~6번을 9번 반복한다 혹시 그안에 정답을 입력하면 게임을 종료한다.

	
	ChooseComputerNumber();
	while(isUserNumberComplete== false)
	{
		ChooseUserNumber();
		CheckValidationUserNumber();
	}
	CompareNumbers();
	PrintStrikeBall();
	

void ChooseUserNumber()
{
	cout << "Call ChooseUserNumber" << endl;

	int arr[10] = {};
	for (int i = 0; i = 10; i++)
	{
		arr[i] = i;
	}
	for (int i = 0; i = 1000; i++)
	{
		int index1 = rand() % 10;
		int index2 = rand() % 10;

		int temp = arr[index1];
		arr[index1] = arr[index2];
		arr[index2] = temp;
	}

	if(arr[0] == 0)
	{

	}
}
void ChooseComputerNumber()
{
	cout << "Call ChooseComputerNumber" << endl;
}

void CompareNumbers()
{
	cout << "Call CompareNumbers" << endl;
}

void CheckValidationUserNumber()
{
	cout << "Call CheckValidationUserNumber" << endl;
}

void PrintStrikeBall()
{
	cout << "Call PrintStrikeBall" << endl;
}






}