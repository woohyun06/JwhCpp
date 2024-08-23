#include <iostream>

typedef int 정수;
typedef __int8 int8;
typedef __int16 int16;
typedef __int32 int32;
typedef __int64 int64;

using namespace std;

void main()
{
	//typedef

	//define => 매크로 전역으로 무언가를 선언하는 역할

	//type define => 타입을 선언해주는 역할

	정수 a = 0;
	int32 id = 1000;

	int myValue = 2100000000;
	cout << myValue << endl;

}