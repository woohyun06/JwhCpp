#include <iostream>
using namespace std;

void main()
{
	//����

	int num1 = 0, num2 = 0, choice = 0;
	int result = 0;

	//printf("����1�� �Է����ּ��� : \n");
	//scanf_s("%d", &num1);
	//printf("����2�� �Է����ּ��� : \n");
	//scanf_s("%d", &num2);
	//printf("� ������ �����ұ��? : (1 : + , 2 : -, 3 : *, 4 : /) \n");
	//scanf_s("%d", &choice);
	//printf("��� : %d\n", result);

	//�����ڵ�
	//��� : "����1�� �Է����ּ���."
	//�Է� : num1 ����
	//��� : "����2�� �Է����ּ���"
	//�Է� : num2 ����
	//��� : "� ������ �����ұ��? : (1 : + , 2 : -, 3 : *, 4 : /)"
	//�Է� : choice ����
	// 
	// ���� choice == 1 �̸�
	//		result = num1 + num2
	// ���� choice == 2 �̸�
	//		result = num1 - num2
	// ���� choice == 3 �̸�
	//		result = num1 * num2
	// ���� choice == 4 �̸�
	//		result = num1 / num2
	//��� : ��� result
	
	//��� : "����1�� �Է����ּ���."
	printf("����1�� �Է����ּ���.");
	//�Է� : num1 ����
	scanf_s("%d", &num1);

	printf("����2�� �Է����ּ���.");

	scanf_s("%d", &num2);

	printf("� ������ �����ұ��? : (1 : + , 2 : -, 3 : *, 4 : /) \n");

	scanf_s("%d", &choice);

	if (choice == 1)
	{
		result = num1 + num2;
		printf("%d", &result);
	}
	else if (choice == 2)
	{
		result = num1 - num2;
		printf("%d", &result);
	}
	else if (choice == 3)
	{
		result = num1 * num2;
		printf("%d", &result);
	}
	else if (choice == 4)
	{
		result = num1 / num2;
		printf("%d", &result);
	}
}