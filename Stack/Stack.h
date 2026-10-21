#pragma once
#include"../LinkedList/Node.h"
class Stack {
private:
	Node* top;
	int count;
public:
	Stack();
	~Stack();
	void push(int value);
	bool pop(int& value);
	bool isEmpty() const;
	bool peek(int& value) const;
	int size() const;
	void clear();
	void display() const;
};