#ifndef BOARD_H
#define BOARD_H

#include <vector>
using namespace std;

class Board {

	private:

		// Assumption: Board can ALWAYS be represented by a 2D array.
		vector<vector<uint8_t> > board;

	public:

		Board();

		// Constructor with the inputBoard.
		Board(const vector<vector<uint8_t> > inputBoard);

		// EFFECTS: Initializes the sudoku board
		virtual void initializeBoard();

		// EFFECTS: Prints the board state.
		virtual void printBoardState();

};


#endif
