//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct {
    int a;
    string b;
} par;


int main(){
  vector<int> a;
  vector<int> b;

  int x;
  char op;
  while(cin >> op){
    cin >> x;
    if(op == 'a'){
      a.push_back(x);
    }
    else{
      b.push_back(x);
    }
  }

//  sort(a.begin(),a.end());
//  sort(b.begin(),b.end());

  int len = max(a.size(),b.size());

  for(int i=0; i<len;i++){
    if(i < a.size()){
      cout << a[i] << " ";
    }
    if(i < b.size()){
      cout << b[i] << " ";
    }
  }

  return 0;
}
