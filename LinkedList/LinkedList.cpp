#include "LinkedList.h"
#include <iostream>
using namespace std;
LinkedList::LinkedList()
{
	head = nullptr;
}
LinkedList::~LinkedList()
{
	while (head != nullptr) {
		Node* temp = head;
		head = head->next;
		delete temp;
	}
}
void LinkedList::insertAtFront(int value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}
void LinkedList::display() const
{
	for (Node* cur = head; cur != nullptr; cur = cur->next)
		cout << cur->data << " -> ";
	cout << "NULL" << endl;
}
bool LinkedList::isEmpty() const
{
	return head == nullptr;
}
void LinkedList::insertAtEnd(int value) {
	Node* newNode = new Node();
	newNode->data = value;
	newNode->next = nullptr;
	if (head==nullptr) {
		head = newNode;
	}
	else {
		Node* cur = head;
		while (cur->next != nullptr) {
			cur = cur->next;
		}
		cur->next = newNode;
	}
}
int LinkedList::length() const {
	int count = 0;
	for (Node* cur = head; cur != nullptr; cur = cur->next) {
		count++;
	}
	return count;
}
void LinkedList::createFromArray(const int arr[], int n) {
	for (int i = 0; i < n; i++) {
		insertAtEnd(arr[i]);
	}
}
int LinkedList::search(int value) const {
	int index = 0;
	Node* cur = head;
	while (cur != nullptr) {
		if (cur->data == value) {
			return index;
		}
		cur = cur->next;
		index++;
	}
	return -1;
}
int LinkedList::update(int oldValue, int newValue) {
	int count = 0;
	Node* cur = head;
	while (cur != nullptr) {
		if (cur->data == oldValue) {
			cur->data = newValue;
			count++;
		}
		cur = cur->next;
	}
	return count;
}
bool LinkedList::insertAt(int index, int value) {
	if (index< 0 || index > length()) {
		return false;
	}
	if (index == 0) {
		insertAtFront(value);
		return true;
	}
		Node* newNode = new Node();
		newNode->data = value;

		Node* cur = head;
		for (int i = 0; i < index - 1; i++) {
			cur = cur->next;
		}
		newNode->next = cur->next;
		cur->next = newNode;
}
bool LinkedList::deleteValue(int value) {
	if (head == nullptr) {
		return false;
	}
	if (head->data == value) {
		Node* temp = head;
		head = head->next;
		delete temp;
		return true;
	}
	Node* cur = head;
	while (cur->next != nullptr && cur->next->data != value) {
		cur = cur->next;
	}
	if (cur->next == nullptr) {
		return false;
	}
	Node* temp = cur->next;
	cur->next = temp->next;
	delete temp;
	return true;
}
void LinkedList::merge(LinkedList& otherList) {
	if (otherList.head == nullptr) {
		return;
	}
	if (head == nullptr) {
		head = otherList.head;
		return;
	}
	Node* cur = head;
	while (cur->next != nullptr) {
		cur = cur->next;
	}
	cur->next = otherList.head;
	otherList.head = nullptr;
}