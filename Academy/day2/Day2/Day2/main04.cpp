#include <iostream>

using namespace std;

void main()
{
	bool check = true;

	int year = 2024;
	if (year == 2024)
	{
		printf("���ش� 2024�⵵ �Դϴ�.\n");
	}

	int hp = 10;
	if (0 < hp)
	{
		printf("�� ������ ����ֽ��ϴ�.\n");
	}
	else
	{
		printf("�� ������ �׾����ϴ�.\n");
	}


	int score = 89;
	
	if (90 < score)
	{
		printf("�� �л��� A�����Դϴ�.\n");
	}
	else if (80 < score)
	{
		printf("�� �л��� B�����Դϴ�.\n");
	}
	else if (70 < score)
	{
		printf("�� �л��� C�����Դϴ�.\n");
	}
	else if (60 < score)
	{
		printf("�� �л��� D�����Դϴ�.\n");
	}
	else
	{
		printf("�� �л��� F�����Դϴ�.\n");
	}

	int result1 = 3 + 5;
	int result2 = 3 - 5;
	int result3 = 3 * 5;
	int result4 = 3 / 5;
	printf("result1 : %d\n", result1);
	printf("result2 : %d\n", result2);
	printf("result3 : %d\n", result3);
	printf("result4 : %d\n", result4);
		
	
}