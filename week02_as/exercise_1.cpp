//
// Created by Luka Avbreht on 2019-09-02.
//
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;

  if(n%2 == 0){
    n = n/2;
  }
  else{
    n = (n-1)/2;
  }

  cout << n*(n+1) << endl;

  return 0;
}