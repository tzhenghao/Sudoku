#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

#include "Board.h"

class SudokuBoard : public Board {

	// TODO: Size of sudoku board is always 9x9.
	private:

		// Assumption: Board can ALWAYS be represented by a 2D array.
		vector<vector<uint8_t> > board;

	public:
		
		Board();

		void initializeBoard();

		void printBoard();
};

#endif

