#include<iostream>
#include"Labs/Labs.h"
using namespace std;
int main() {
	int choice;
	do {
		cout << "\n====== CENG203 Data Structure Lab =====" << endl;
		cout << "2. Week 2- project structure test" << endl;
		cout << "0. Exit" << endl;
		cout << "3. week 3 - linked list" << endl;
		cout << "4. week 4 - stack and queue" << endl;
		cout << "Your choice: ";
		cin >> choice;

		switch (choice) {
		case 2: runWeek02(); break;
		case 3: runWeek03(); break;
		case 4: runWeek04(); break;
		case 0: cout << "Bye" << endl; break;
		default: cout << "Invalid choice!" << endl; break;
		}
	} while (choice != 0);
	return 0;
}