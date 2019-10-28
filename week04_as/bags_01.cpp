//
// Created by Luka Avbreht on 2019-09-23.
//

#include <iostream>
#include <math.h>
#include<set>

using namespace std;


int main(){
  set<int> bag;

  while(1){
    string a;
    cin >> a;
    int x;

    if(a == "add"){
      cin >> x;
      bag.insert(x);
    }
    else if(a == "del"){
      cin >> x;
      bag.erase(x);
    }
    else if(a == "qry"){
      cin >> x;
      if(bag.find(x) != bag.end()){
        cout << "T";
      }
      else cout  << "F";
    }
    if(a == "quit") {
      return 0;
    }
  }
}
