#include <iostream>
#include "linkedlist.h"

using namespace std;

// initializing data of Node constructor
Node::Node(int value) {
	data = value;
	next = nullptr;
	prev = nullptr;
}

// initialize an empty list, both head and tail points to null
doublyLinkedList::doublyLinkedList(){
	head = nullptr;
	tail = nullptr;
}

// function to insert in the beginning of the linked list
void doublyLinkedList::insertFirst(int value) {
	// create new node
	Node* newNode = new Node(value);

	//check if the linked list is empty
	if (head == nullptr) {
		// the new node becomes both head and tail
		head = tail = newNode;
		return;
	}

	// if the linked list contains nodes

	// link new node to current head (forward link)
	newNode->next = head;

	// link current head back to new node (backward link)
	head->prev = newNode;

	// move head pointer to the new node
	head = newNode;

}

// function to insert in the tail of linked list
void doublyLinkedList::insertEnd(int value) {
	// create new node
	Node* newNode = new Node(value);

	// check if the linked list is empty
	if (head == nullptr) {
		// the new node becomes both head and tail
		head = tail = newNode;
		return;
	}

	// if list is not empty

	 // link new node with old tail (backward)
	newNode->prev = tail;

	// link old tail with new node (forward)
	tail->next = newNode;

	// move tail to the new node
	tail = newNode;
}

// function to delete from the beginning of the linked list
void doublyLinkedList::deleteFirst() {
	// check of the linked list is empty
	if (head == nullptr) {
		cout << "the linked list is empty" << "\n";
		return;
	}

	// if the linked list have only one node
	if (head == tail) {
		delete head;
		head = tail = nullptr;
		return;
	}

	// if there is more than one node

	// store current head
	Node* temp = head;

	// move head forward
	head = head->next;

	// remove backward link
	head->prev = nullptr;

	// delete old head
	delete temp;
}

// function to delete from the tail of linked list
void doublyLinkedList::deleteEnd() {
	// check of the linked list is empty
	if (tail == nullptr) {
		cout << "the linked list is empty" << "\n";
		return;
	}

	// if the linked list have only one node
	if (head == tail) {
		delete head;
		head = tail = nullptr;
		return;
	}

	// if there is more than one node

	// store current tail
	Node* temp = tail;

	// move tail backward
	tail = tail->prev;

	// remove forward link
	tail->next = nullptr;

	// delete old tail
	delete temp;
}

// function to display forward (from head to tail)
void doublyLinkedList::displayForward() {

	// start from the head
	Node* temp = head;

	// traverse until we reach null
	while (temp != nullptr) {

		// print the current node data
		cout << temp->data << " ";

		// move forward
		temp = temp->next;
	} 
	cout << "\n";
}

// function to display backward (from tail to head)
void doublyLinkedList::displayBackward() {
	
	// start from the tail
	Node* temp = tail;

    // traverse until we reach null
	while (temp != nullptr) {
        // price the current node data
		cout << temp->data << " ";

		// move backward
		temp = temp->prev;
	}
	cout << "\n";
}
