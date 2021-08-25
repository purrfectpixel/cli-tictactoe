#include <iostream>
#include <string>

using namespace std;

void Start(char board[9])
{
	for(int i = 0;i <= 8;i++)
		board[i] = (i + 1) + '0';
}

void RenderBoard(char board[9])
{
	cout << string(50, '\n'); //clear screen
	for(int i = 0;i <= 8;)
	{
		for(int j = 0;j <= 2;j++,i++)
			cout << board[i] << " ";
		cout << endl;
	}
}