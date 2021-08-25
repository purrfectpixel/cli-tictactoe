#include <iostream>
#include <string>
#include "headers/board.h"
#include "headers/gameinput.h"
#include "headers/side.h"
#include "headers/endgame.h"

using namespace std;

void Game()
{
	char turn, board[9];
	int op;

	Start(board);
	turn = PickSide();
	
	do
	{
		RenderBoard(board);
		InputMove(turn, board);
		RenderBoard(board);

		if(CheckWin(turn, board) == 1 || (CheckBoard(board) == 1))
			return;
		turn = ChangeSide(turn);
		AIInput(turn, board);
		RenderBoard(board);
		if(CheckWin(turn, board) == 1 || (CheckBoard(board) == 1))
			return;
		turn = ChangeSide(turn);
	}
	while(1);
}

int main()
{
	Game();
}