//
// Created by Luka Avbreht on 2019-09-02.
//
#include <iostream>

using namespace std;

int main() {
  int a,b;
  cin >> a >> b;

  if(a < b){
    std::cout << a << " is smaller than " << b << std::endl;
  }
  else if(a == b){
    std::cout << a << " is equal to " << b << std::endl;
  }
  else{
    std::cout << a << " is bigger than " << b << std::endl;
  }


  return 0;
}