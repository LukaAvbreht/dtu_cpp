//
// Created by Luka Avbreht on 2019-09-09.
//

// Include library iostream (reading and writing to console)
#include <iostream>
#include <iomanip>

// namespace (more on this later)
using namespace std;

int increment(int z){
  return z+1;
}

int main() {

  // Part 1
//
//  int z;
//
//  cout << "GIve me number:" << endl;
//  cin >> z;
//
//  int zi = increment(z);
//
//  cout << z << " incremented is " << zi << endl;
//

  // precision with float

  float fl1 = 1.2431243123;
  float fl2 = 1.45124651734;
  float fl3 = 0.234567635124356142535674567145637126456712854681724617417624561;

  cout << "fl1 is " << fl1 << " and fl2 is " << fl2 << endl;

  cout << "to set precision we use setprecision(20) " << setprecision(20) << fl3 << endl;


  return 0;
}