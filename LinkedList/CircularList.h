#pragma once
#include <iostream>
using namespace std;

class CircularList {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* tail;
    int count;

public:
    CircularList() {
        tail = nullptr;
        count = 0;
    }

    void append(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        if (tail == nullptr) {
            tail = newNode;
            tail->next = tail;
        }
        else {
            newNode->next = tail->next;
            tail->next = newNode;
            tail = newNode;
        }
        count++;
    }

    int length() {
        return count;
    }

    void display() {
        if (tail == nullptr) {
            cout << "List is empty." << endl;
            return;
        }
        Node* cur = tail->next;
        do {
            cout << cur->data << " ";
            cur = cur->next;
        } while (cur != tail->next);
        cout << "(back to head)" << endl;
    }
};