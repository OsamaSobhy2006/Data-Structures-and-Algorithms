#pragma once

struct Node {
	int data;
	Node* next;
	Node* prev;

	Node(int value);
};

class doublyLinkedList {
private:
	Node* head;
	Node* tail;

public:
	doublyLinkedList();
	void insertFirst(int value);
	void insertEnd(int value);
	void deleteFirst();
	void deleteEnd();
	void displayForward();
	void displayBackward();
};