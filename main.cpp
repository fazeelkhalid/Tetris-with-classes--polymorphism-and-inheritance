#include <iostream>
#include"board.h"
#include"pieces.h"
#include"allPieces.h"
#include<time.h>
#include<Windows.h>
using namespace std;


class tetris{
	board *Board;
	pieceS SType;
	pieceL LType;
	pieceSq SqType;
	pieceI IType;
	pieceT TType;
	bool BottomLine; // check is bottom line present
	char **shape; // hold randome shape
public:
	tetris() {
		BottomLine = false;
		Board = new board;
		shape = NULL;
	}
	char ** randomeShape() {
		srand(time(0));
		int index = rand() % 5;
		if (index == 0) {
			return SType.getPiece();
		}
		else if (index == 1) {
			return LType.getPiece();
		}
		else if (index == 2) {
			return SqType.getPiece();
		}
		else if (index == 3) {
			return IType.getPiece();
		}
		else if (index == 4) {
			return TType.getPiece();
		}
	}
	bool isBootomLine(char **ptr, int y, int x) {
		
		//row 3rd
		if (ptr[3][3] == 'o' && Board->pie[x + 4][y + 3] == 'o') {
			return true; 
		}
		else if (ptr[3][2] == 'o' && Board->pie[x + 4][y + 2] == 'o') { 
			return true; 
		}
		else if (ptr[3][1] == 'o' && Board->pie[x + 4][y + 1] == 'o') { 
			return true; 
		}
		else if (ptr[3][0] == 'o' && Board->pie[x + 4][y + 0] == 'o') { 
			return true; 
		}

		//row 2nd
		else if (ptr[2][3] == 'o' && Board->pie[x + 3][y + 3] == 'o') { 
			return true; 
		}
		else if (ptr[2][2] == 'o' && Board->pie[x + 3][y + 2] == 'o') { 
			return true; 
		}
		else if (ptr[2][1] == 'o' && Board->pie[x + 3][y + 1] == 'o') { 
			return true; 
		}
		else if (ptr[2][0] == 'o' && Board->pie[x + 3][y + 0] == 'o') { 
			return true; 
		}

		//row 1st
		else if (ptr[1][3] == 'o' && Board->pie[x + 2][y + 3] == 'o') { 
			return true; 
		}
		else if (ptr[1][2] == 'o' && Board->pie[x + 2][y + 2] == 'o') { 
			return true; 
		}
		else if (ptr[1][1] == 'o' && Board->pie[x + 2][y + 1] == 'o') { 
			return true; 
		}
		else if (ptr[1][0] == 'o' && Board->pie[x + 2][y + 0] == 'o') { 
			return true; 
		}

		//row 0th
		else if (ptr[0][3] == 'o' && Board->pie[x + 1][y + 3] == 'o') { 
			return true; 
		}
		else if (ptr[0][2] == 'o' && Board->pie[x + 1][y + 2] == 'o') { 
			return true; 
		}
		else if (ptr[0][1] == 'o' && Board->pie[x + 1][y + 1] == 'o') { 
			return true; 
		}
		else if (ptr[0][0] == 'o' && Board->pie[x + 1][y + 0] == 'o') { 
			return true; 
		}
		else { 
			return false; 
		}
	}
	bool isLeftFree(char **ptr, int y, int x) {
		if (ptr[0][0] == 'o' && Board->pie[x-1][y] == 'o') {
			return true;
		}
		else if (ptr[0][1] == 'o' && Board->pie[x-1][y+1] == 'o') {
			return true;
		}
		else if (ptr[0][2] == 'o' && Board->pie[x-1][y+2] == 'o') {
			return true;
		}
		else if (ptr[0][3] == 'o' && Board->pie[x-1][y+3] == 'o') {
			return true;
		}
		else {
			return false;
		}
	}


	void play() {

		do {
			int x = 9;
			int y = 1;
			shape = randomeShape();
			
			BottomLine = false;
			int oldX = x;
			int oldY = y;
			while (!BottomLine) { // make a function that detect bottom line and return 1 if you detect
				Board->setArray(shape,x,y);
				Board->printBoard();
				
				oldX = x;
				oldY = y;
				//keyboard input
				if (GetAsyncKeyState(VK_DOWN) != 0) {
					Sleep(250);
				}
				else {
					Sleep(500);
				}
				if (GetAsyncKeyState(VK_UP) != 0) {// change shape function here
					
				}

				if (GetAsyncKeyState(VK_LEFT) != 0 && !isLeftFree(shape,x,y)) { //your work
					if (x > 2) { // left line detection function here
						x--;
					}
				}

				if (GetAsyncKeyState(VK_RIGHT) != 0) {// your work 
					if (x < 17) { // place rigth line detection function here
						x++;
					}
				}
				system("CLS");
				Board->remove(shape, oldX, oldY);
				if (isBootomLine(shape, oldX, oldY)) {
					BottomLine = true;
					Board->setArray(shape, x, y);
				}
				if (BottomLine == false) {
					y++;
				}
				//now generate emptSpace That will remove the effect;
			}
		} while (1);
	}

};



int main() {

	tetris game;
	game.play();

	return 0;
}