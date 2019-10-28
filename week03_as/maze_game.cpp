//
// Created by Luka Avbreht on 2019-09-16.
//
#include <iostream>
#include <math.h>

#define n 12
#define m 16

int N = 5,M = 5;

using namespace std;

typedef enum {wood , stone} material;

typedef struct{
    int x,y;
    bool isWall;
    material type;
} field;



void print_box(field polje[n][m]){
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(i == N and j == M) {
        cout << "O";
      }
      else{
        if(polje[i][j].type == stone) cout << "*";
        else if(polje[i][j].type == wood) cout << " ";
      }
    }cout << endl;
  }
}

void play_game(char a,field polje[n][m]){
  if(a == 'l'){
    // goes left
    if(polje[N][M-1].type == wood){
      M -= 1;
    }
    print_box(polje);
    return;
  }
  else if(a == 'r'){
    // goes right
    if(polje[N][M+1].type == wood){
      M += 1;
    }
    print_box(polje);
    return;
  }
  else if(a == 'd'){
    // goes down
    if(polje[N+1][M].type == wood){
      N += 1;
    }
    print_box(polje);
    return;
  }
  else if(a == 'u'){
    // goes up
    if(polje[N-1][M].type == wood){
      N -= 1;
    }
    print_box(polje);
    return;
  }
  else if(a == 'q'){
    // quit game
    // exit with code 0
    return;
  }
}


field playground[n][m];
int main(){
  // Init
  for (int i=0; i<n; i++){
    for (int j=0; j<m; j++){
      playground[i][j].x=i;
      playground[i][j].y=j;
      playground[i][j].isWall=(i==0||i==(n-1)||(j==0) ||j==(m-1));
      if (playground[i][j].isWall && !(i==0 && j==3)){
        playground [i][j].type=stone;
      }
      else{
        playground [i][j].type=wood;
      }
    }
  }

  print_box(playground);

  string input;
  cin >> input;

  for(int ii=0; ii < input.size(); ii++){
    play_game(input[ii],playground);
  }

  return 0;
}
