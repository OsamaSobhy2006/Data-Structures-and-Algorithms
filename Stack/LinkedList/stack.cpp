#include <iostream>
#include "stack.h"

using namespace std;

// pointer to the top element of the stack (initially empty)
node* top = nullptr;

// push: add a new element to the top of the stack (LIFO - Last In First Out)
void push(int value) {
    // create new node
    node* newNode = new node;

    // assign value and link it to the current top
    newNode->data = value;
    newNode->next = top;

    // update top to the new node
    top = newNode;
}

// pop: remove and return the top element of the stack
int pop() {

    // check if the stack is empty
    if (top == nullptr) {
        cout << "The Stack is Empty.\n";
        return -1;
    }

    // store the current top node
    node* first_node = top;

    // move top to the next node (removing the first node logically)
    top = first_node->next;

    // save the value before deleting the node
    int value = first_node->data;

    // free memory of the removed node
    delete first_node;

    return value;
}

// display: print all elements in the stack from top to bottom
void display() {

    // check if the stack is empty
    if (top == nullptr) {
        cout << "The Stack is Empty\n";
        return;
    }

    // temporary pointer used to traverse the stack
    node* temp = top;

    // traverse the stack until reaching the end (nullptr)
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

// peek: return the top element without removing it
int peek() {

    // check if the stack is empty
    if (top == nullptr) {
        cout << "The Stack is Empty.\n";
        return -1;
    }

    // return the value of the top node
    return top->data;
}