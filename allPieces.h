#ifndef pieceS_H
#define pieceS_H
#include"pieces.h"


class pieceS :public pieces { // skiew type piece
public:
	pieceS() {
		pie = new char*[4];
		for (int i = 0; i < 4; i++) {
			pie[i] = new char[4];
		}
	
		pie[0][0] = ' ', pie[0][1] = ' ', pie[0][2] = ' ', pie[0][3] = ' ';
		pie[1][0] = ' ', pie[1][1] = ' ', pie[1][2] = 'o', pie[1][3] = 'o';
		pie[2][0] = ' ', pie[2][1] = ' ', pie[2][2] = 'o', pie[2][3] = ' ';
		pie[3][0] = ' ', pie[3][1] = 'o', pie[3][2] = 'o', pie[3][3] = ' ';
	
	}

	char **getPiece() {
		return pie;
	}

	~pieceS() {
		if (pie != NULL) {
			for (int i = 0; i < 4; i++) {
					delete[] pie[i];
			}
			delete[] pie;
		}
	}

};
#endif // !pieceS_H

/////////////////////////////////////////////////////////
#ifndef pieceL_H
#define pieceL_H
#include "pieces.h"

class pieceL :public pieces { //L type piece
public:
	pieceL() {
		pie = new char*[4];
		for (int i = 0; i < 4; i++) {
			pie[i] = new char[4];
		}

		pie[0][0] = ' ', pie[0][1] = ' ', pie[0][2] = ' ', pie[0][3] = ' ';
		pie[1][0] = ' ', pie[1][1] = ' ', pie[1][2] = 'o', pie[1][3] = ' ';
		pie[2][0] = ' ', pie[2][1] = ' ', pie[2][2] = 'o', pie[2][3] = ' ';
		pie[3][0] = ' ', pie[3][1] = ' ', pie[3][2] = 'o', pie[3][3] = 'o';

	}
	char **getPiece() {
		return pie;
	}
	~pieceL() {
		if (pie != NULL) {
			for (int i = 0; i < 4; i++) {
				delete[] pie[i];
			}
			delete[] pie;
		}
	}
};
#endif // !pieceL

/////////////////////////////////////////////

#ifndef pieceI_H
#define pieceI_H
#include"pieces.h"

class pieceI :public pieces { // straight line piece
public:
	pieceI() {
		pie = new char*[4];
		for (int i = 0; i < 4; i++) {
			pie[i] = new char[4];
		}

		pie[0][0] = ' ', pie[0][1] = ' ', pie[0][2] = ' ', pie[0][3] = 'o';
		pie[1][0] = ' ', pie[1][1] = ' ', pie[1][2] = ' ', pie[1][3] = 'o';
		pie[2][0] = ' ', pie[2][1] = ' ', pie[2][2] = ' ', pie[2][3] = 'o';
		pie[3][0] = ' ', pie[3][1] = ' ', pie[3][2] = ' ', pie[3][3] = 'o';
	}
	char **getPiece() {
		return pie;
	}
	~pieceI() {
		if (pie != NULL) {
			for (int i = 0; i < 4; i++) {
				delete[] pie[i];
			}
			delete[] pie;
		}
	}
};

#endif // !pieceI

#ifndef pieceSq_H
#define pieceSq_H
#include"pieces.h"

class pieceSq :public pieces {//square type piece
public:
	pieceSq() {
		pie = new char*[4];
		for (int i = 0; i < 4; i++) {
			pie[i] = new char[4];
		}

		pie[0][0] = ' ', pie[0][1] = ' ', pie[0][2] = ' ', pie[0][3] = ' ';
		pie[1][0] = ' ', pie[1][1] = 'o', pie[1][2] = 'o', pie[1][3] = 'o';
		pie[2][0] = ' ', pie[2][1] = 'o', pie[2][2] = 'o', pie[2][3] = 'o';
		pie[3][0] = ' ', pie[3][1] = 'o', pie[3][2] = 'o', pie[3][3] = 'o';
	}
	char **getPiece() {
		return pie;
	}
	~pieceSq() {
		if (pie != NULL) {
			for (int i = 0; i < 4; i++) {
				delete[] pie[i];
			}
			delete[] pie;
		}
	}
};


#endif // !pieceSq

#ifndef pieceT_H
#define pieceT_H
#include"pieces.h"

class pieceT :public pieces { // T type piece
public:
	pieceT() {
		pie = new char*[4];
		for (int i = 0; i < 4; i++) {
			pie[i] = new char[4];
		}

		pie[0][0] = ' ', pie[0][1] = ' ', pie[0][2] = ' ', pie[0][3] = ' ';
		pie[1][0] = ' ', pie[1][1] = 'o', pie[1][2] = 'o', pie[1][3] = 'o';
		pie[2][0] = ' ', pie[2][1] = ' ', pie[2][2] = 'o', pie[2][3] = ' ';
		pie[3][0] = ' ', pie[3][1] = ' ', pie[3][2] = 'o', pie[3][3] = ' ';
	}
	char **getPiece() {
		return pie;
	}
	~pieceT() {
		if (pie != NULL) {
			for (int i = 0; i < 4; i++) {
				delete[] pie[i];
			}
			delete[] pie;
		}
	}
};

#endif // !pieceT
