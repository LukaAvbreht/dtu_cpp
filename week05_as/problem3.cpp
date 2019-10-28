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

//  for(auto it = a.begin(); it != a.end(); ++it){
//    cout << *it << " ";
//  }cout << endl;
//  for(auto it = b.begin(); it != b.end(); ++it){
//    cout << *it << " ";
//  }cout << endl;


  int res = 0;
  for(int i=0; i<len;i++){
    if(i > a.size()){
      cout << res << endl;
      return 0;
    }
    if(i > b.size()){
      cout << res << endl;
      return 0;
    }
    else {
      res += (a[i] * b[i]);
    }
  }
  cout << res << endl;
  return 0;
}
