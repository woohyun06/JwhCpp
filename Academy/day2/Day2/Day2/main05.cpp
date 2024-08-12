#include <iostream>
using namespace std;

void main()
{
	int result = 0;

	int num1 = 0;
	int num2 = 0;
	int choice = 0;


	printf("숫자1을 입력해주세요 : \n");
	scanf_s("%d", &num1);
	printf("숫자2를 입력해주세요 : \n");
	scanf_s("%d", &num2);
	printf("어떤 연산을 진행할까요? : (1 : + , 2 : -, 3 : *, 4 : /) \n");
	scanf_s("%d", &choice);
	printf("결과 : %d\n" , result);

	printf("입력값 확인용:: num1(%d),num2(%d),choice(%d)\n", num1, num2, choice);

	if (choice == 1)
	{
		(num1 + num2);
	}
	else if (choice == 2)
	{
		(num1 - num2);
	}
	else if (choice == 3)
	{
		(num1 * num2);
	}
	else
	{
		(num1 / num2);
	}
}
