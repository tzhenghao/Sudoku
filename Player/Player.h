#ifndef PLAYER_H
#define PLAYER_H

class Player {

	private:

		string playerName;


	public:

		// Getters and setters.

		string getPlayerName();

		void setPlayerName(string name);



		// EFFECTS: Reads the state of the board.
		virtual void readBoard(Board &board) = 0;

		// EFFECTS: Plays the next move.
		virtual void playNextMove() = 0;
};

#endif
