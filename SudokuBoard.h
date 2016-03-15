#ifndef SUDOKUBOARD_H
#define SUDOKUBOARD_H

#include "Board.h"

class SudokuBoard : public Board {

	// TODO: Size of sudoku board is always 9x9.

	public:

		void initializeBoard();

		void printBoardState();
};

#endif

