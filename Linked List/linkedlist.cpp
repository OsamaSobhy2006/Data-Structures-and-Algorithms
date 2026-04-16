#include <iostream>
#include "linkedlist.h"

using namespace std;

// declaring the head pointer with null
node* head = nullptr;

// function to insert new node at the end of the linked list
void insertEnd(int value) {
	// create new node
	node* newNode = new node;

	// create temp pointer to loop on the linked list elements and stop on the last element
	node* last;

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
	node* temp;

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
		cout << "\n";
	}
}

// function to delete nodes from the linked list
void deleteNode(int value) {
	node* current, * previous;

	current = head;
	previous = head;

	// remove a beginning of the linked list
	if (current->data == value) {
		head = current->next; // make the head points to the next node of the node we want to remove
		delete(current); // remove the node from the memory
		return;
	}
	
	// remove a specific value in the linked list
	while (current->data != value) {
		previous = current;
		current = current->next;
	}
	previous->next = current->next;
	delete(current);
}

// function to insert a new node from the beginning 
void insertBeginning(int value) {
	node* newNode = new node;
	newNode->data = value;
	newNode->next = head;
	head = newNode;
}

// function to delete from the beginning of the linked list
void deleteBeginning() {
	// check if the linked list is empty
	if (head == nullptr)
		cout << "The Linked List is Empty.\n";

	else {
		node* first_node = head;
		
		// move head to the next node (skip the first node)
		head = first_node->next;

		// remove the node from memory
		delete(first_node);
	}
}

// function to delete node from the end
void deleteEnd() {
	// check if the linked list is empty
	if (head == nullptr)
		cout << "The Linked List is Empty. \n";
	
	// if there is an one node in the linked list
	else if (head->next == nullptr) {
		// remove the node from memory
		delete(head);

		// make the head pointer = null because there is no noded in the linked list
		head = nullptr;
	}

	// if there is many nodes in the linked list
	else {
		node* ptr = head;

		// check if the next of node after the node = null
		while (ptr->next->next != nullptr)
			ptr = ptr->next;

		delete(ptr->next); // remove from memory
		ptr->next = nullptr; // change the value of next ptr

	}
}
