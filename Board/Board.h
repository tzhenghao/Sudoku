#ifndef BOARD_H
#define BOARD_H

#include <vector>
using namespace std;

class Board {

	private:


	public:

		virtual Board();

		// EFFECTS: Initializes the sudoku board
		virtual void initializeBoard() = 0;

		// EFFECTS: Prints the board state.
		virtual void printBoard() = 0;
};


#endif
