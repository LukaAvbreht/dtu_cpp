//
// Created by Luka Avbreht on 2019-09-30.
//
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <algorithm>

using namespace std;

int fib(int n){
  if(n == 0){
    return 1;
  }
  else if(n == 1){
    return 1;
  } else {
    return fib(n-1) + fib(n-2);
  }
}

int main(){

  int a;

  while(cin >> a){
    cout << fib(a) << " ";
  }
  return 0;
}
