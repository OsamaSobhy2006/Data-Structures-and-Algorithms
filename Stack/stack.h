#pragma once

#define size 5

extern int stack[size];
extern int top;

void push(int value);
int pop();
int peek();
void display();
