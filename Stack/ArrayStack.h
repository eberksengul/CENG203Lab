#pragma once
class ArrayStack {
private:
	static const int CAPACITY = 5;
	int items[CAPACITY];
	int topIndex;
public:
	ArrayStack();
	bool push(int value);
	bool pop(int& value);
	bool isEmpty() const;
	bool peek(int& value) const;
	int size() const;
	bool isFull() const;
	void display() const;
};