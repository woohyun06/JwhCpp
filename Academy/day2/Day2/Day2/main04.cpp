#include <iostream>

using namespace std;

void main()
{
	bool check = true;

	int year = 2024;
	if (year == 2024)
	{
		printf("올해는 2024년도 입니다.\n");
	}

	int hp = 10;
	if (0 < hp)
	{
		printf("이 유닛은 살아있습니다.\n");
	}
	else
	{
		printf("이 유닛은 죽었습니다.\n");
	}


	int score = 89;
	
	if (90 < score)
	{
		printf("이 학생은 A학점입니다.\n");
	}
	else if (80 < score)
	{
		printf("이 학생은 B학점입니다.\n");
	}
	else if (70 < score)
	{
		printf("이 학생은 C학점입니다.\n");
	}
	else if (60 < score)
	{
		printf("이 학생은 D학점입니다.\n");
	}
	else
	{
		printf("이 학생은 F학점입니다.\n");
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