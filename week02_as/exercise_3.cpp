//
// Created by Luka Avbreht on 2019-09-02.
//
#include <iostream>
#include <math.h>

using namespace std;

float pi_aprox(int n){
  float res;
  for(int i = 0; i<n; i++){
    if(i%2==0){
      res += (1./((2*i)+1));
    }
    else{
      res -= (1./((2*i)+1));
    }
  }
  return 4*res;
}

double pi_aprox2(int n){
  double res = 0;
  for(int i = 0; i<n; i++){
      res += (pow(-1,i)/(2*i+1));
  }
  return 4*res;
}


int main() {
  int n;
  cin >> n;
  cout << pi_aprox2(n) << endl;
  return 0;
}
