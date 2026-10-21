#include"Queue.h"
#include<iostream>
using namespace std;
Queue::Queue() {
	front = nullptr;
	rear = nullptr;
	count = 0;
}
Queue::~Queue() {
	int dummy;
	while (dequeue(dummy));
}
void Queue::enqueue(int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;
	if (isEmpty()) {
		front = newNode;
		rear = newNode;
	}
	else {
		rear->next = newNode;
		rear = newNode;
	}
	count++;
}
bool Queue::dequeue(int& value) {
	if (isEmpty()) return false;
	Node* temp = front;
	value = temp->data;
	front = front->next;
	delete temp;
	count--;
	if (front == nullptr) rear = nullptr;
	rear = nullptr; // Queue is now empty
	return true;
}
bool Queue::peek(int& value) const {
	if (isEmpty()) return false;
	value = front->data;
	return true;
}
bool Queue::isEmpty() const {
	return front == nullptr;
}
int Queue::size() const {
	return count;
}
void Queue::display() const {
	cout << "front ->";
	for (Node* cur = front; cur != nullptr; cur = cur->next)
		cout << " " << cur->data;
	cout << "<- rear" << endl;
}