#pragma once
class CircularQueue {
private:
	static const int CAPACITY = 5;
	int items[CAPACITY];
	int front;
	int count;
public:
	CircularQueue();
	bool enqueue(int value);
	bool dequeue(int& value);
	bool peek(int& value) const;
	bool isEmpty() const;
	bool isFull() const;
	int size() const;
	void display() const;
};