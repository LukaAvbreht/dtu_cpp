//
// Created by Luka Avbreht on 2019-09-16.
//
#include <iostream>
#include <math.h>

using namespace std;

int main(){
  int l,n;
  int *data,*output;
  cin >> l >> n;
  data = new int[n];
  int maxnum = 0;
  for(int i = 0; i < n; i++){
    cin >> data[i];
    if(data[i] > maxnum) maxnum = data[i];
  }
  int k_val = (int)ceil(float(maxnum)/l);
  output = new int[l]();
  for(int i = 0; i < n; i++){
    if(data[i]/k_val == float(l)) output[((int)data[i]/k_val)-1] += 1;
    else output[(int)data[i]/k_val] += 1;
  }
  for(int i = 0; i < l; i++){
    cout << i*k_val << ": " << output[i] << endl;
  }
  delete[] (data);
  delete[] (output);
  return 0;
}