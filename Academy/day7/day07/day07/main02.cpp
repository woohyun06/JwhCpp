#include <iostream>

using namespace std;




void MakeBoard();
void ShuffleBoard();
void printBoard();
void CallBingoNumber();
void MarkBingoNumber();
void GoToNextTurm();
void main()
{
	//������ �����ڵ�

	//1~25���� ����
	//mybingo[25],combingo[25]
	//2. ������ ����.
	//3.�������� ���(��,��ǻ��)
	//4. ���� ���ڸ� �ϳ� �θ���.
	//5. �� ���ڸ� �� �����ǰ�,��ǻ�� �����ǿ��� ���ڸ� -1�� ��ü�Ѵ�.
	//[�����]
	//6. ��ǻ�Ͱ� ���ڸ� �ϳ� �θ���.
	//7. �� ���ڸ� �� �����ǰ�,��ǻ�� �����ǿ��� ���ڸ� -1�� ��ü�Ѵ�.
	//8 �ݺ�

	MakeBoard();

	ShuffleBoard();

	printBoard();
	while (true)
	{
		printBoard();
		CallBingoNumber();

		MarkBingoNumber();
		GoToNextTurm();
	}

}	

