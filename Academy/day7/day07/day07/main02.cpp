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
	//빙고의 수도코드

	//1~25까지 숫자
	//mybingo[25],combingo[25]
	//2. 빙고판 셔플.
	//3.빙고판을 출력(나,컴퓨터)
	//4. 내가 숫자를 하나 부른다.
	//5. 그 숫자를 내 빙고판과,컴퓨터 빙고판에서 숫자를 -1로 대체한다.
	//[상대턴]
	//6. 컴퓨터가 숫자를 하나 부른다.
	//7. 그 숫자를 내 빙고판과,컴퓨터 빙고판에서 숫자를 -1로 대체한다.
	//8 반복

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

