#include"Stack.h"
#include<iostream>
using namespace std;
Stack::Stack() {
	top = nullptr;
	count = 0;
}
Stack::~Stack() {
	clear();
}
bool Stack::isEmpty() const {
	return top == nullptr;
}
void Stack::push(int value) {
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = top;
	top = newNode;
	count++;
}
bool Stack::pop(int& value) {
	if (isEmpty()) return false;
	Node* temp = top;
	value = top->data;
	top = top->next;
	delete temp;
	count--;
	return true;
}
bool Stack::peek(int& value) const {
	if (isEmpty()) return false;
	value = top->data;
	return true;
}
int Stack::size() const {
	return count;
}
void Stack::clear() {
	int dummy;
	while (pop(dummy));
}
void Stack::display() const {
	cout << "top ->";
	for (Node* cur = top; cur != nullptr; cur = cur->next)
		cout << " "<<cur->data;
	cout << endl;
}
