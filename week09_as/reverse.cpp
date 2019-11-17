//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

string revrev(vector<int> to_rev){
  if(to_rev.size() == 0){
    return "";
  } else {
    int temp = to_rev.back();
    to_rev.pop_back();
    return to_string(temp) + " " + revrev(to_rev);
  }
}

int main(){

  vector<int> inp;
  int a;

  while(cin >> a){
    inp.push_back(a);
  }
  cout << revrev(inp);

  return 0;
}
