#include <iostream>
using namespace std;

void main()
{
	int result = 0;

	int num1 = 0;
	int num2 = 0;
	int choice = 0;


	printf("����1�� �Է����ּ��� : \n");
	scanf_s("%d", &num1);
	printf("����2�� �Է����ּ��� : \n");
	scanf_s("%d", &num2);
	printf("� ������ �����ұ��? : (1 : + , 2 : -, 3 : *, 4 : /) \n");
	scanf_s("%d", &choice);
	printf("��� : %d\n" , result);

	printf("�Է°� Ȯ�ο�:: num1(%d),num2(%d),choice(%d)\n", num1, num2, choice);

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
