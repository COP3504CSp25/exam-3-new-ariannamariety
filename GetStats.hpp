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

    int* getStats() const{
        //write your function here!
        int min = 0;
        int max = 0;
        int avg = 0;
        int* returnVals[3] = {&min, &max, &avg};

        if (head == nullptr) {
            return returnVals[0];
        }
        min = head->data;
        max = head->data;
        int total = 0;
        int count = 0;
        Node* current = head;
        while (current != nullptr) {
            if (current->data < min) {
                min = current->data;
            }
            if (current->data > max) {
                max = current->data;
            }
            total += current->data;
            count++;
            current = current->next;
        }
        avg = total/count;
        *returnVals[0] = min;
        *returnVals[1] = max;
        *returnVals[2] = avg;

        return returnVals[0];
    }
    

private:
    Node* head = nullptr;
};
