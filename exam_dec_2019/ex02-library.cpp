#include "ex02-library.h"
#include <iostream>

//Exercise 2 (a) Implement this function
string reverse(string s, int n){
	//put your code here
	if(s == "" or n==-1) {
    // base case
    return "";
  }
	return s[n] + reverse(s,n-1);
}

//Exercise 2 (b) Implement this function
bool isPalindrome(string s, int n1, int n2){
  if(s==""){
    return true;
  }
	//put your code here
	if(n1==n2) {
    // word with odd number of letters
    return true;
  } else if(n2-1==n1){
	  // word with even number of letters
    return (s[n1] == s[n2]);
	} else {
	 if(s[n1] == s[n2]){
     return isPalindrome(s,n1+1,n2-1);
	 } else {
     return false;
	 }
	}
}

//Exercise 2 (c) Implement this function
int distancePalindrome(string s, int n1, int n2){
  if(s==""){
    return 0;
  }
	//put your code here
  if(n1==n2) {
    // word with odd number of letters
    return 0;
  } else if(n2-1==n1){
    // word with even number of letters
    if(s[n1] == s[n2]){
      return 0;
    } else{
      return 1;
    }
  } else {
    if(s[n1] == s[n2]){
      return distancePalindrome(s,n1+1,n2-1);
    } else {
      return 1 + distancePalindrome(s,n1+1,n2-1);
    }
  }
}