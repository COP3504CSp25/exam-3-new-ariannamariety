#pragma once

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    void addHead(const int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }
    
    LinkedList reverseList() const {
        // implement your function here!
        LinkedList list;
        Node* current = head;
        while (current!= nullptr) {
            list.addHead(current->data);
            current = current->next;
        }
        return list;
    }

    Node* head = nullptr;
};
