#ifndef SUDOKU_PLAYER_H
#define SUDOKU_PLAYER_H

#include "HumanPlayer.h"
#include "Board.h"

class HumanSudokuPlayer : public SudokuPlayer {

	private:


	public:

		void readBoard(Board &board);

		void playNextMove(Board &board);
};

#endif
