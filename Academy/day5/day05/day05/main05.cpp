#include <iostream>

using namespace std;

void main()
{
	//continue; break;

	//반복문을 조금 윤택하게 사용하기위해 나온 문법
	int arr[1000] = {};
	for (int i = 0; i < 1000; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 1000; i++)
	{
		if (arr[i] % 3 == 0)
		{
			continue;
		}

		cout << "arr[" << i << "]=" << arr[i] << endl;
	}

	for (int i = 0; i < 1000; i++)
	{
		if (i == 500)
		{
			break;
		}
		cout << i << endl;
	}

}