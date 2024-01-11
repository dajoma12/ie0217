// Linked list implementation in C++

#incude <bits/stdc++.h>
#include <iostream>
using namespace std;

// Creating a Node

class Node {
    public:
      int value;
      Node* next
};

int main() {
    Node* head;
    Node* one = Null;
    Node* two = Null;
    Node* three = Null;

    // Assign value values
    one->next = two;
    two->next = three;
    three->next = NULL;

    // print the linked list value
    head = one;
    while (heap != NULL) {
        cout << head->value;
        head = head->next;
    }
}