//
// Created by Luka Avbreht on 2019-09-02.
//
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>

using namespace std;

float pi_aprox(int n){
  float res;
  for(int i = 0; i<n; i++){
    res += (pow(-1,i)/((2*i)+1));
  }
  return 4*res;
}

vector<int> primes(int n){
  vector<int> res;
  bool ok = true;
  for(int i = 2; i <= sqrt(n)+1; i++){
    for(auto t=res.begin(); t!=res.end(); ++t){
      if(i % *t == 0){
        ok = false;
      }
    }
    if(ok) res.push_back(i);
    else ok = true;
  }
  return res;
}

vector<int> primefactor(int n){
  vector<int> res;
  vector<int> prim = primes(n);

//  for(auto t=prim.begin(); t!=prim.end(); ++t){
//    cout << *t << " ";
//  }cout << endl;


  for(auto t=prim.begin(); t!=prim.end(); ++t){
    while(n%*t == 0){
      res.push_back(*t);
//      cout << *t << endl;
      n = (int)n/(*t);
//      cout << n << endl;
    }
  }
  if(n>2) res.push_back(n);

  sort(res.begin(),res.end());
  return res;
}

int main() {
  int n;
  cin >> n;

  vector<int> pri = primefactor(n);
  int k = pri.size();

  if(k==0) cout << n << endl;
  else {

    for (int i = 0; i < k - 1; i++) {
      cout << pri[i] << " * ";
    }
    cout << pri[k-1] << endl;
  }

//  for(auto t=pri.begin(); t!=pri.end()-1; ++t){
//    cout << *t << " * ";
//  }
//  cout << *(pri.end()-1) << endl;
  return 0;
}
