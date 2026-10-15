#pragma once
#include "Node.h"
class LinkedList {
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	void insertAtFront(int value);
	bool isEmpty() const;
	void display() const;
};