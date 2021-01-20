#ifndef piece_H
#define piece_H
#include<iostream>
using namespace std;

class pieces {
public:
	char **pie;
	int x;
	int y;
	pieces() {
		pie = NULL;
		x = 0;
		y = 0;
	}

	void setX(int x) {
		this->x = x;
	}

	void setY(int y) {
		this->y = y;
	}

	int getX() {
		return x;
	}

	int getY() {
		return y;
	}

	virtual void printBoard() { // print board
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 5; j++) {
				cout << pie[i][j];
			}
			cout << " ";
		}
	}
	
	virtual char** getPiece() {
		return pie;
	}
	
	~pieces() {

	}
};
#endif
