#ifndef board_h
#define board_hs
#include"pieces.h"
#include<iostream>
using namespace std;

class board : public pieces{
	int boardRows;
	int boardColumn;
public:
	board() {
		boardRows = 19; // board size + piece array size
		boardColumn = 22;
		
		//allocate memory
		pie = new char*[boardColumn]; // row coloum of board
		for (int i = 0; i < boardColumn; i++) {
			pie[i] = new char[boardRows];
		}

		for (int i = 0; i < boardColumn; i++) {
			for (int j = 0; j < boardRows; j++) {
				pie[i][j] = ' ';
			}
		}

		for (int i = 4; i < boardRows; i++) { // show upper line
			pie[0][i] = 'o';
		}

		for (int i = 4; i < boardRows; i++) { // show line at bottom
			pie[boardColumn - 1][i] = 'o';
		}
		
		for (int i = 1; i < boardColumn; i++) { // left line store in array
			pie[i][4] = 'o';
		}

		for (int i = 0; i < boardColumn; i++) { // right line stroe in array
			pie[i][boardRows - 1] = 'o';
		}
	}

	int getColumn() {
		return boardColumn;
	}
	int getRows() {
		return boardRows;
	}

	void printBoard() {
		for (int i = 0; i < boardColumn; i++) {
			for (int j = 0; j < boardRows; j++) {
				cout << pie[i][j];
			}
			cout << "\n";
		}
	}

	void clearScreen() {
		for (int i = 0; i < boardColumn; i++) {
			for (int j = 0; j < boardRows; j++) {
				cout << " ";
			}
			cout << " \n";
		}
	}

	void remove(char ** arr, int x, int y) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i][j] == 'o') {
					pie[y + i][x + j] = ' ';
				}
			}
		}
	}
	
	void setArray(char ** arr, int x, int y) {
		for (int i = 0; i < 4; i++) {
			for (int j = 0; j < 4; j++) {
				if (arr[i][j] == 'o') {
					pie[y + i][x + j] = arr[i][j];
				}
			}
		}
	}
};


#endif // !board_h
