#include <iostream>

using namespace std;

void main()
{
	srand(time(NULL));
	int lotto[45] = {};
	for (int i = 0; i < 45; i++)
	{
		lotto[i] = i + 1;
	}
	for (int i = 0; i < 100000; i++)
	{
		int index1 = rand() % 45;
		int index2 = rand() % 45;

		int temp = lotto[index1];
		lotto[index1] = lotto[index2];
		lotto[index2] = temp;
	}

	cout << "�ζǹ�ȣ : ";
	for (int i = 0; i < 7; i++)
	{
		cout << lotto[i],  " ";

	}
	cout << endl;
	
}