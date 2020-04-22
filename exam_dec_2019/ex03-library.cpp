#include "ex03-library.h"
#include <iostream>

//Do not modify
WordsList::WordsList(){
	allWords.push_back("121");
	wordsToPalindromeDistance["121"]=0;
	allWords.push_back("122");
	wordsToPalindromeDistance["122"]=1;
}

//Exercise 3 (a) implement this method
void WordsList::print(){
	//put your code here
	int size_of = this->allWords.size();
	cout << size_of << " words:";
	for(int i = 0; i < size_of;i++ ){
		cout << " " << allWords[i] << " (" << this->wordsToPalindromeDistance[allWords[i]] << ")";
	}

}

//Exercise 3 (b) implement this method
int WordsList::distancePalindrome(string s){
	//put your code here
	int res = 0;
	if(s == ""){
		return 0;
	}
	int string_len = s.length();
	int for_this = 0;
	if(string_len%2==1){
		for_this = (string_len-1)/2;
	}
	else{
		for_this = string_len/2;
	}
	for(int i = 0;i<for_this;i++){
		if(s[i] != s[string_len-i-1]){
			res +=1;
		}
	}
	return res;
}

//Exercise 3 (c) implement this method
void WordsList::addWord(string word){
	//put your code here
	this->allWords.push_back(word);
	this->wordsToPalindromeDistance[word] = this->distancePalindrome(word);
}

//Exercise 3 (d) implement this method
int WordsList::palindromeWords(){
	//put your code here
	int res = 0;
	int size_of = this->allWords.size();
	for(int i = 0; i < size_of;i++ ){
		if(this->wordsToPalindromeDistance[allWords[i]] == 0){
			res += 1;
		}
	}
	return res;
}