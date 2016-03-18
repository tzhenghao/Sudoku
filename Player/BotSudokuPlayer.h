#ifndef BOTSUDOKUPLAYER_H
#define BOTSUDOKUPLAYER_H

#include "BotPlayer.h"
#include "Board.h"

class BotSudokuPlayer : public SudokuPlayer {

	private:

		Board *currentBoard;

	public:

		void readBoard(Board &board);

		void playNextMove();
};

#endif
