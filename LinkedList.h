#ifndef LINKEDLIST_H
//#define LINKEDLIST_H

#include <iostream>
#include "ADT.h"

using namespace std;

class LinkedList : public ADT {
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void insert(int val) override {
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = head;
        head = newNode;
    }

    void remove() override {
        if (!head) {
            cout << "Error: List is empty, cannot remove." << endl;
            return;
        } else {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }

    void print() const override {
        Node* temp = head;
        while (temp) {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    // Insert after specific node
    void insertAfter(Node* node, int val) {
        if (node == nullptr) {
            cout << "Given previous node cannot be NULL" << endl;
            return;
        }
        Node* newNode = new Node;
        newNode->val = val;
        newNode->next = node->next;
        node->next = newNode;
    }
};

#endif 
