#include <iostream>
#include <string>

using namespace std;

char PickSide()
{
	int x;
	do
	{
		cout << "Pick a side:\n1/ O\n2/ X\nInput: ";
		cin >> x;
	}
	while(!(x == 1 || x == 2));

	switch(x)
	{
		case 1:
			return 'O';
		case 2:
			return 'X';
	}
}

char ChangeSide(int turn)
{
	if(turn == 'X')
		return 'O';
	else
		return 'X';
}