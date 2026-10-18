#pragma once
#include "Node.h"
class LinkedList {
private:
	Node* head;
public:
	LinkedList();
	~LinkedList();
	// =====week2=====
	void insertAtFront(int value);
	bool isEmpty() const;
	void display() const;
	// =====week3=====
	void insertAtEnd(int value);
	int length() const;
	void createFromArray(const int arr[], int n);
	int search(int value) const;
	int update(int oldValue, int newValue);
	bool insertAt(int index, int value);
	bool deleteValue(int value);
	void merge(LinkedList& otherList);
};