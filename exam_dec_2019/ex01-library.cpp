#include <iostream>
#include "ex01-library.h"

using namespace std;

//Exercise 1 (a) Implement this function
cell ** createAndInitBoard(int n){
	cell** ChekBoard = new cell*[n];
	//put your code here
	for(int i = 0; i < n; i++){
    ChekBoard[i] = new cell[n];
		for(int j = 0; j < n; j++){
			cellColor cel_color = computeColor(i,j);
			ChekBoard[i][j].color = cel_color;
			if(i < 3) {
        if (cel_color == dark) {
          ChekBoard[i][j].status = blackPiece;
        } else {
          ChekBoard[i][j].status = empty;
        }
      } else if(n-i < 4){
				if(cel_color == dark){
					ChekBoard[i][j].status = whitePiece;
				} else{
          ChekBoard[i][j].status = empty;
				}
			} else{
				ChekBoard[i][j].status = empty;
			}
		}
	}
	return ChekBoard;
}

//Exercise 1 (b) Implement this function
cell ** duplicateBoard(cell ** A, int n){
	//put your code here
  cell** ChekBoard = new cell*[n];
  //put your code here
  for(int i = 0; i < n; i++){
    ChekBoard[i] = new cell[n];
    for(int j = 0; j < n; j++){
      ChekBoard[i][j].color = A[i][j].color;
      ChekBoard[i][j].status = A[i][j].status;

    }
  }
  return ChekBoard;
}

//Exercise 1 (c) Implement this function
bool moveRight(cell ** A,int n,int r, int c){
	//put your code here
	// white piece
	if(A[r][c].status == whitePiece){
		//we move up
		if(r != 0 and c != n-1 and A[r-1][c+1].status == empty){
			// we are alloved to move
			A[r][c].status = empty;
			A[r-1][c+1].status = whitePiece;
			return true;
		}
	}
	// black piece
	if(A[r][c].status == blackPiece){
		//we move down
		if(r != n-1 and c != 0 and A[r+1][c-1].status == empty){
			// we are alloved to move
			A[r][c].status = empty;
			A[r+1][c-1].status = blackPiece;
			return true;
		}
	}
	return false;
}

//Exercise 1 (d) Implement this function
bool moveLeft(cell ** A,int n,int r, int c){
	//put your code here
	// white piece
	if(A[r][c].status == whitePiece){
		//we move up
		if(r != 0 and c != 0 and A[r-1][c-1].status == empty){
			// we are alloved to move
			A[r][c].status = empty;
			A[r-1][c-1].status = whitePiece;
			return true;
		}
	}
	// black piece
	if(A[r][c].status == blackPiece){
		//we move down
		if(r != n-1 and c != n-1 and A[r+1][c+1].status == empty){
			// we are alloved to move
			A[r][c].status = empty;
			A[r+1][c+1].status = blackPiece;
			return true;
		}
	}
	return false;
}

//Do not modify
cellColor computeColor(int r,int c){
	if((r%2 == 0 && c%2 == 0) || (r%2 != 0 && c%2 != 0)){
		return bright;
	}
	return dark;
}

//Do not modify
void printBoard(cell ** A, int n){
	cout << ' ';
	for(int c=0;c<n;c++){
		cout << c;
	}
	cout << endl;
	for(int r=0;r<n;r++){
		cout << r;
		for(int c=0;c<n;c++){
			//Print ' ' or '#' if empty, or the piece color (W or B)
			switch (A[r][c].status) {
			case empty:
				cout << ((A[r][c].color==bright)?' ':'#');
				break;
			case whitePiece:
				cout << "W";
				break;
			case blackPiece:
				cout << "B";
				break;
			}
		}
		cout << endl;
	}
	cout << endl;
}