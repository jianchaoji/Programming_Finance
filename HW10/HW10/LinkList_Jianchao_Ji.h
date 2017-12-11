#pragma once
#include"Node_Jianchao_Ji.h"
#include<iostream>
using namespace std;

class LinkedList {
public:
	LinkedList();
	~LinkedList();
	int size() const;
	void addToStart(Node *);
	void addToEnd(Node *);
	void printList();
	bool removeFromStart();
	bool removeFromEnd();
	void removeNodeFromList(int);
	void removeNodeFromList(string);
private:
	Node *myHead;
	Node *myTail;
	int mySize;
};

