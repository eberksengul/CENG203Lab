#include"ArrayStack.h"
#include<iostream>
using namespace std;
ArrayStack::ArrayStack() {
	topIndex = -1;
}
bool ArrayStack::push(int value) {
	if (isFull()) return false;
	items[++topIndex] = value;
	return true;
}
bool ArrayStack::pop(int& value) {
	if (isEmpty()) return false;
	value = items[topIndex--];
	return true;
}
bool ArrayStack::peek(int& value) const {
	if (isEmpty()) return false;
	value = items[topIndex];
	return true;
}
bool ArrayStack::isEmpty() const {
	return topIndex == -1;
}
bool ArrayStack::isFull() const {
	return topIndex == CAPACITY - 1;
}
int ArrayStack::size() const {
	return topIndex + 1;
}
void ArrayStack::display() const {
	cout << "top ->";
	for (int i = topIndex; i >= 0; i--)
		cout << " " << items[i];
	cout << endl;
}