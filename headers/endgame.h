#include <iostream>
#include <string>

using namespace std;

int CheckBoard(char board[9])
{
	for(int i = 0;i <= 8;i++)
		if(board[i] >= '1' && board[i] <= '9')
			return 0;
	return 1;
}

int CheckWin(char turn, char board[9])
{
	for(int i = 0;i <= 6;i += 3)
		if(board[i] == turn && board[i + 1] == turn && board[i + 2] == turn)
		{
			cout << turn << " won!";
			return 1;
		}

	for(int j = 0;j <= 2;j++)
		if(board[j] == turn && board[j + 3] == turn && board[j + 6] == turn)
		{
			cout << turn << " won!";
			return 1;
		}

	if((board[0] == turn && board[4] == turn && board[8] == turn) || (board[2] == turn && board[4] == turn && board[6] == turn)) 
	{
		cout << turn << " won!";
		return 1;
	}	

	return 0;
}