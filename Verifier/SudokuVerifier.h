#ifndef SUDOKUVERIFIER_H
#define SUDOKUVERIFIER_H

#include "Verifier.h"
#include "SudokuBoard.h"

class SudokuVerifier : public Verifier {

	private:

		// EFFECTS: Returns true if the pieces on each row of the sudoku board
		//			are distinct (valid), returns false otherwise.
		bool isSudokuRowsValid(const SudokuBoard &sudokuBoard);

		// EFFECTS: Returns true if the pieces on each column of the sudoku board
		//			are distinct (valid), returns false otherwise.
		bool isSudokuColumnsValid(const SudokuBoard &sudokuBoard);

		// EFFECTS: Returns true if the pieces on each sub square of the sudoku board
		//			are distinct (valid), returns false otherwise.
		bool isSudokuSubSquaresValid(const SudokuBoard &sudokuBoard);

	public:

		bool isSolutionCorrect(const SudokuBoard &sudokuBoard);
};

#endif
