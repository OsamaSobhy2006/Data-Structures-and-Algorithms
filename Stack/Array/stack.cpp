#include <iostream>
#include "stack.h"

using namespace std;

// global stack array and top pointer
int stack[size];
int top = -1;

// push: add element to the top of the stack
void push(int value) {

    // check if stack is full
    if (top == size - 1) {
        cout << "Stack is Full.\n";
        return;
    }

    // move top forward and insert value
    stack[++top] = value;
}

// pop: remove and return the top element (LIFO)
int pop() {

    // check if stack is empty
    if (top == -1) {
        cout << "Stack is Empty.\n";
        return -1;
    }

    // return top element then decrease top
    return stack[top--];
}

// peek: return the top element without removing it
int peek() {

    // check if stack is empty
    if (top == -1) {
        cout << "Stack is Empty.\n";
        return -1;
    }

    return stack[top];
}

// display: print stack elements from top to bottom
void display() {

    // check if stack is empty
    if (top == -1) {
        cout << "Stack is Empty.\n";
        return;
    }

    // print elements in LIFO order
    for (int i = top; i >= 0; i--) {
        cout << stack[i] << " ";
    }

    cout << "\n";
}
