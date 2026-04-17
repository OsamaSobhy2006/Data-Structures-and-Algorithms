#pragma once

struct node {
	int data;
	node* next;
};

extern node* head;

void insertEnd(int value);
void insertBeginning(int value);
void display();
void deleteNode(int value);
void deleteBeginning();
void deleteEnd();
node* Reverse(node* head);
