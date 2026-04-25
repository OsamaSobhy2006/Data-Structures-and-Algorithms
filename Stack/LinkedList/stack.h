#pragma once


struct node {
	int data;
	node* next;
};

extern node* head;

void push(int value);
int pop();
int peek();
void display();