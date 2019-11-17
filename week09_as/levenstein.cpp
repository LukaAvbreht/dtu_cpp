//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int levenstein(string a_str, string b_str){
  // cout << a_str << " " << b_str << endl << endl;
  if(a_str.size() == 0){
    return b_str.size();
  } else if(b_str.size() == 0){
    return a_str.size();
  } else {
    int fab = 1-(a_str[0]==b_str[0]);
//    cout << levenstein(a_str.substr(1, a_str.size()),b_str) << endl;
//    cout << levenstein(a_str,b_str.substr(1, b_str.size())) << endl;
//    cout << levenstein(b_str.substr(1, b_str.size()),a_str.substr(1, a_str.size())) << endl;
    return min(min(levenstein(a_str.substr(1, a_str.size()),b_str) + 1,  // substring from element 1 to end
               levenstein(a_str,b_str.substr(1, b_str.size())) + 1),
               levenstein(a_str.substr(1, a_str.size()),b_str.substr(1, b_str.size())) + fab);
  }
}

int main(){
  string str_aa, str_bb;
  cin >> str_aa >> str_bb;
  cout << levenstein(str_aa,str_bb);
  return 0;
}
