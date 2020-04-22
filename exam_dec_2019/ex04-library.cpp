#include "ex04-library.h"
#include <iostream>

//Do not modify
Piece::~Piece(){}

//Do not modify
void Piece::printPosition(){
	cout << "(" << r << "," << c << ")" << endl;
}

//Exercise 4 (a) implement methods of WhitePiece
//put your code here

WhitePiece::WhitePiece(int a, int b) : Piece() {
	this->r = a;
	this->c = b;
}

WhitePiece::~WhitePiece() {
}

string WhitePiece::getColor() {
	return "white";
}

string WhitePiece::printCode() {
	return "W";
}

void WhitePiece::moveLeft() {
	this->r -= 1;
	this->c -= 1;
}

void WhitePiece::moveRight() {
	this->r -= 1;
	this->c += 1;
}

//Exercise 4 (b) implement methods of BlackPiece
//put your code here

BlackPiece::BlackPiece(int a, int b) : Piece() {
	this->r = a;
	this->c = b;
}

BlackPiece::~BlackPiece() {
}

string BlackPiece::getColor() {
	return "black";
}

string BlackPiece::printCode() {
	return "B";
}

void BlackPiece::moveLeft() {
	this->r += 1;
	this->c += 1;
}

void BlackPiece::moveRight() {
	this->r += 1;
	this->c -= 1;
}