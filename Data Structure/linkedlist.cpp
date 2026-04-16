#include <iostream>
using namespace std;
#include "linkedlist.h"

// declaring the head pointer with null
node* head = nullptr;

// function to insert new node at the end of the linked list
void insertEnd(int value) {
	// create new node
	node* newNode = new node;

	// create temp pointer to loop on the linked list elements and stop on the last element
	node* last = new node;

	//give the new node values
	newNode->data = value;
	newNode->next = nullptr;

	// check if the node is the first node in the linked list
	if (head == nullptr) {
		head = newNode; // make head pointer points on the new node
		newNode->next = nullptr; // make the new node points to null
	}
	else {
		last = head; // make last points on the first element like head

		// this while loop create the "last" points to the last element in linked list
		while (last->next != nullptr) {
			last = last->next; 
		}
		last->next = newNode; // make the last points to the new node
		newNode->next = nullptr; // make the new node points to the null
	}
}

// functin to display the nodes in linked list
void display() {
	// declaring temporary pointer to loop on the elements of the linked list
	node* temp = new node;

	// check if the linked list is Empty
	if (head == nullptr) {
		cout << "The Linked List is Empty" << endl;
	}
	else {
		temp = head; // make the temp pointer points to the first element

		// look until found the temp->next == nullptr then stop
		while (temp != nullptr) {
			cout << temp->data << " "; // printing the data of node
			temp = temp->next; // go to the next node
		}
	}
}
