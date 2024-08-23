#include <iostream>
using namespace std;

void main()
{
	int arr[25] = {1,2,3,4,5,6,7,8,9,10};

	int arr2[2][5] = { {1,2,3,4,5,},{6,7,8,9,10}};
	
	for (int i = 0; i < 10; i++)
	{
		cout << "arr[i] = " << arr[i] << endl;
	}

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "arr2[i][j] = " << arr2[i][j] << endl;
		}
	}


}