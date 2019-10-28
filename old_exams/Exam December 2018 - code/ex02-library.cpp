#include "ex02-library.h"
#include <iostream>

//Do not modify
int Node::countChildren(){
	return children.size();
}

//Exercise 2 (a) Implement the constructor and getName()
Node::Node(string name){
	//put your code here
	this->name = name;
}

string Node::getName(){
	//put your code here
	return this->name;
}

//Exercise 2 (b) Implement this method
void Node::addChild(Node * child){
	//put your code here
	this->children.push_back(child);
}

//Exercise 2 (c) Check and correct if necessary
void Node::printParentNodes(){
	if(this->children.size() >= 1) {
		cout << this->name << ' ';
		for (int i = 0; i < this->children.size(); i++) {
			this->children[i]->printParentNodes();
		}
	}
}

//Exercise 2 (d) Implement this method
void Node::printMembersOfSubTree(int generation){
	//put your code here
	cout << this->name << ' ' << generation << ' ';
	for(int i=0; i<this->children.size();i++){
		children[i]->printMembersOfSubTree(generation+1);
	}
}
