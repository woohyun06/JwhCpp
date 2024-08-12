#include <iostream>
using namespace std;

void main()
{
	//계산기

	int num1 = 0, num2 = 0, choice = 0;
	int result = 0;

	//printf("숫자1을 입력해주세요 : \n");
	//scanf_s("%d", &num1);
	//printf("숫자2를 입력해주세요 : \n");
	//scanf_s("%d", &num2);
	//printf("어떤 연산을 진행할까요? : (1 : + , 2 : -, 3 : *, 4 : /) \n");
	//scanf_s("%d", &choice);
	//printf("결과 : %d\n", result);

	//수도코드
	//출력 : "숫자1을 입력해주세요."
	//입력 : num1 변수
	//출력 : "숫자2를 입력해주세요"
	//입력 : num2 변수
	//출력 : "어떤 연산을 진행할까요? : (1 : + , 2 : -, 3 : *, 4 : /)"
	//입력 : choice 변수
	// 
	// 만약 choice == 1 이면
	//		result = num1 + num2
	// 만약 choice == 2 이면
	//		result = num1 - num2
	// 만약 choice == 3 이면
	//		result = num1 * num2
	// 만약 choice == 4 이면
	//		result = num1 / num2
	//출력 : 결과 result
	
	//출력 : "숫자1을 입력해주세요."
	printf("숫자1을 입력해주세요.");
	//입력 : num1 변수
	scanf_s("%d", &num1);

	printf("숫자2를 입력해주세요.");

	scanf_s("%d", &num2);

	printf("어떤 연산을 진행할까요? : (1 : + , 2 : -, 3 : *, 4 : /) \n");

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