#include "Board.h"
#include <iostream>
using namespace std;

void Board::printBoard() {

	for (int i = 0; i < board.size(); ++i) {

		for (int j = 0; j < board[0].size(); ++j) {
			cout << board[i][j] << " ";
		}
		cout << "\n";
	}
}

