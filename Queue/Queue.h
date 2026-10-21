#pragma once
#include"../LinkedList/Node.h"
class Queue {
private:
	Node* front;
	Node* rear;
	int count;
public:
	Queue();
	~Queue();
	void enqueue(int value);
	bool dequeue(int& value);
	bool isEmpty() const;
	bool peek(int& value) const;
	int size() const;
	void display() const;
};