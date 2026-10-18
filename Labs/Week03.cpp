#include"Labs.h"
#include"../LinkedList/Node.h"
#include"../LinkedList/LinkedList.h"
#include"../LinkedList/CircularList.h"
#include"../LinkedList/DoublyLinkedList.h"
#include<iostream>
using namespace std;
void runWeek03() {
	//Q1:three nodes by hand,no class
	cout << "------ Week 3 - Linked Lists -----" << endl;
	Node* n1 = nullptr;
	cout << "[Q1] n1=" << n1 << "sizeof(n1)" << sizeof(n1) << "sizeof(Node)=" << sizeof(Node) << endl;
	n1 = new Node;
	cout << "[Q1] after new:data=" << n1->data << "next=" << n1->next << endl;
	Node* n2 = new Node;
	Node* n3 = new Node;
	n1->data = 5; n2->data = 7; n3->data = 11;
	n1->next = n2; n2->next = n3; n3->next = nullptr;
	for (Node* cur = n1; cur != nullptr; cur = cur->next)
		cout << "[Q1]" << cur << "data=" << cur->data << "next=" << cur->next << endl;
	delete n3; delete n2; delete n1;
	//Q2:insertAtEnd, length, createFromArray
	int arr[] = { 7,2,5,4 };
	LinkedList list;
	list.createFromArray(arr, 4);
	cout << "[Q2]"; list.display();
	cout << "[Q2] length=" << list.length() << endl;
	//Q3:search
	cout<<"[Q3] search(4)="<<list.search(4)<<"search(9)="<<list.search(9)<<endl;
	//Q4:update
	list.insertAtEnd(2);
	cout << "[Q4] update(2,9) changed" << list.update(2, 9) << "node(s):"; list.display();
	//Q5:insertAt
	list.insertAt(0,1);
	list.insertAt(3, 8);
	list.insertAt(list.length(), 6);
	cout << "[Q5]"; list.display();
	cout << boolalpha;
	cout << "[Q5] insertAt(99,0)=" << list.insertAt(99, 0) << endl;
	//Q6:deleteValue
	list.deleteValue(1); list.deleteValue(8); list.deleteValue(6);
	cout<<"[Q6]"; list.display();
	cout << "[Q6] deleteValue(42)=" << list.deleteValue(42) << endl;
	//Q7:merge
	int arr2[] = { 30,40};
	LinkedList other;
	other.createFromArray(arr2, 2);
	list.merge(other);
	cout << "[Q7] merged:"; list.display();
	cout << "[Q7] other.isEmpty()=" << other.isEmpty() << endl;
	//Q8: CircularList
	CircularList ring;
	ring.append(7); ring.append(2); ring.append(5); ring.append(4);
	cout << "[Q8]"; ring.display();
	cout << "[Q8] length=" << ring.length() << endl;
	//Q9: DoublyLinkedList
	DoublyLinkedList dl;
	dl.insertAtEnd(7); dl.insertAtEnd(20); dl.insertAtEnd(30); dl.insertAtEnd(10);
	cout << "[Q9]"; dl.displayForward();
	cout << "[Q9]"; dl.displayBackward();
	dl.deleteValue(20); dl.deleteValue(30);
	cout << "[Q9]"; dl.displayForward();
	cout << "[Q9]"; dl.displayBackward();
	cout << "[Q9] deleteValue(99)=" << dl.deleteValue(99) << endl;
}
