#include <iostream>
#include <string>

using namespace std;

void InputMove(char turn, char board[9])
{
	int  i;
	do
	{
		cout << "Input your move: ";
		cin >> i;
		i--;
	}
	while(!(board[i] >= '1' && board[i] <= '9'));

	board[i] = turn;
}

void AIInput(char turn, char board[9])
{
	int  i;
	do
	{
		i = (rand() % 8);
	}
	while(!(board[i] >= '1' && board[i] <= '9'));

	cout << "\n" << i << endl;

	board[i] = turn;
}