#include "SudokuVerifier.h"
#include "SudokuBoard.h"
#include <unordered_set>
using namespace std;

bool SudokuVerifier::isSolutionCorrect(const SudokuBoard & sudokuBoard) {

	int boardSize = 0;

	unordered_set<char>sodokuNumbers;

	// Check rows.
	if (!isSudokuRowsValid(sudokuBoard)) {
		return false;

	else if (!isSodokuColumnsValid(sudokuBoard)) {
		return false;
	}
	else if (!isSudokuSubSquaresValid(sudokuBoard)) {
		return false;
	}

	return true;
}

bool SudokuVerifier::isSudokuRowsValid(const SudokuBoard &sudokuBoard) {

	for (int row = 0; row <	sudokuBoard.size(); ++row) {

		unordered_set<char>sudokuPieces;

		for(int col = 0; col < sudokuBoard.size(); ++col) {

			// if a repeated piece is found, it must be invalid.
			if (sudokuPieces.find(sudokuBoard[row][col] != sudokuBoard.end()) {
				return false;
			}

			sudokuPieces.insert(sudokuBoard[row][col]);
		}
	}

	return true;
}

bool SudokuVerifier::isSudokuColumnsValid(const SodukuBoard &sudokuBoard) {

	for (int col = 0; col <	sudokuBoard.size(); ++col) {

		unordered_set<char>sudokuPieces;

		for(int row = 0; row < sudokuBoard.size(); ++row) {

			// if a repeated piece is found, it must be invalid.
			if (sudokuPieces.find(sudokuBoard[row][col] != sudokuBoard.end()) {
				return false;
			}

			sudokuPieces.insert(sudokuBoard[row][col]);
		}
	}

	return true;
}

// TODO:
bool isSudokuSubSquaresValid(const SudokuBoard &sudokuBoard) {

	return true;
}
