#ifndef HUMANPLAYER_H
#define HUMANPLAYER_H

class HumanPlayer : public Player {

	private:


	public:

		virtual void readBoard(Board &board);

		virtual void playNextMove(Board &board);

};

#endif
