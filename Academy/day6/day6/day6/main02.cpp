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

	//���ھ߱�
	//�����ڵ�
	//
	// ���� ������ ��
	// 
	//1.��ǻ�Ͱ� �������ڸ� �̴´�(4�ڸ�)
	//2.������ �������ڸ� ��ģ��.
	//3. �� ��ģ���ڰ� �ùٸ� �������� �Ǵ��Ѵ�.
	//4.�ùٸ� ���ڶ�� 5������, �ùٸ��� ���� ���ڶ�� 2������ ����.
	//5.��ģ ���ڿ� ��ǻ�Ͱ� ���� ���ڸ� ���Ͽ� strike,ball�� üũ�Ѵ�.

	//���尣���� �� ���¸� �Լ���
	//1.ChooseComputerNumber();
	//2.ChooseUserNumber();
	//3.CheckValidationUserNumber();
	//4.-
	//5.CompareNumber();
	//6.PrintStrikeBallCount();
	//7.2~6���� 9�� �ݺ��Ѵ� Ȥ�� �׾ȿ� ������ �Է��ϸ� ������ �����Ѵ�.

	
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