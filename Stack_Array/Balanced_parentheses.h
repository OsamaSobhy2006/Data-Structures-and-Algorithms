#pragma once
#include<string>
using namespace std;

class Stack {
private:
    char arr[100];
    int top;

public:
    Stack();
    void push(char x);
    char pop();
    bool isEmpty();
};

bool isValid(string s);
