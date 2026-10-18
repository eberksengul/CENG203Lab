#pragma once
#include <iostream>
using namespace std;

class DoublyLinkedList {
private:
    struct Node {
        int data;
        Node* prev;
        Node* next;
    };
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertAtEnd(int value) {
        Node* newNode = new Node();
        newNode->data = value;
        newNode->next = nullptr;
        if (head == nullptr) {
            newNode->prev = nullptr;
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void displayForward() {
        Node* cur = head;
        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->next;
        }
        cout << endl;
    }

    void displayBackward() {
        Node* cur = tail;
        while (cur != nullptr) {
            cout << cur->data << " ";
            cur = cur->prev;
        }
        cout << endl;
    }

    bool deleteValue(int value) {
        Node* cur = head;
        while (cur != nullptr) {
            if (cur->data == value) {
                if (cur == head && cur == tail) {
                    head = nullptr;
                    tail = nullptr;
                }
                else if (cur == head) {
                    head = head->next;
                    head->prev = nullptr;
                }
                else if (cur == tail) {
                    tail = tail->prev;
                    tail->next = nullptr;
                }
                else {
                    cur->prev->next = cur->next;
                    cur->next->prev = cur->prev;
                }
                delete cur;
                return true;
            }
            cur = cur->next;
        }
        return false;
    }
};