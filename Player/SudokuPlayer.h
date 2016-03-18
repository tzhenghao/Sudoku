#ifndef SUDOKUPLAYER_H
#define SUDOKUPLAYER_H

#include "Player.h"

class SudokuPlayer : public Player {

	private:


	public:

		virtual void readBoard(Board &board);

		virtual void playNextMove();
};

#endif
