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

  sort(a.begin(),a.end());
  sort(b.begin(),b.end());

  for(auto it = a.begin(); it != a.end(); ++it){
    cout << *it << " ";
  }
  for(auto it = b.begin(); it != b.end(); ++it){
    cout << *it << " ";
  }

  return 0;
}
