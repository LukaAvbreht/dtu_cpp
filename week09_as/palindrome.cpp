//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

string palindrome(vector<int> is_palin){
  if(is_palin.size() == 0 or is_palin.size() == 1){
    return "yes";
  }
  else {
    if(is_palin[0] == is_palin.back()){
      is_palin.pop_back();
      is_palin.erase(is_palin.begin());
      return palindrome(is_palin);
    }
    else {
      return "no";
    }
  }
}

int main(){
  vector<int> inp;
  int a;

  while(cin >> a){
    inp.push_back(a);
  }
  cout << palindrome(inp);

  return 0;
}
