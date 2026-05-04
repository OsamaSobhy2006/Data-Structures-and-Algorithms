#include<iostream>
#include "queue.h"
using namespace std;

int queue[size];
int front = -1, rear = -1;

// function to check if the queue is empty
bool isEmpty() {
	// the only case for queue to be empty 
	if (front == -1 && rear == -1)
		return true;
	else
		return false;
}

// function to check if the queue is full
bool isFull() {
	// check if the front in the beginning of queue and rear in the end of queue
	if (front == 0 && rear == size - 1)
		return true;

	// check if the front > rear , also being full
	else if (rear == front - 1)
		return true;

	// if the queue is empty
	else
		return false;
}

// function to insert values in the queue
void enqueue(int value) {
	// first: check if the queu is full
	if(isFull())
		cout << "Queue is Full. \n";

	// if the queue is not full
	else {
		// check if the queue is empty
		if (isEmpty()) {
			// increse front and rear by 1
			front = rear = 0;

			// insert the new value
			queue[rear] = value;
		}
		// here if the queue was full and we removed some values 
		// and we want to add some new values return the rear to 0
		/*   -1   0   1   2   3   4  <- index
                +---+---+---+---+---+
        Queue:  |   |   | ● | ● | ● |
                +---+---+---+---+---+
                          ↑       ↑
					    front    rear
		*/
		else if (rear == size - 1) {
			rear = 0;
			queue[rear] = value;
		}
		// adding a new value
		else
			queue[++rear] = value; // increase the raer by 1 and give it the value
	}
}

// function to remove elements from queue
void dequeue() {
	// first: check if the queue is empty
	if (isEmpty())
		cout << "Queue is Empty. \n";

	else {
		// that means we remove the last element in the queue (last element not the last in index)
		if (front == rear) {
			// return the front and rear to the first value of being empty
			front = rear = -1;
		}
		// if the front being last index in queue and by removing one returns to 0
		else if (front == size - 1)
			front = 0;
		
		// this is a normal case of removing element rear > front
		else
			front++;
	}
}

// function to return the element in the top of queue
int peek() {
	// first: check if the queu is empty
	if (isEmpty()) {
		cout << "Queue is Empty. \n";
		return -1;
	}
	// returing the value 
	else
		return queue[front];
}

// function to display elements in queue
void display() {
	// first: check if the queue is empty or no
	if (isEmpty())
		cout << "Queue is Empty. \n";

	// if queue is not empty
	else {
		// normal case for not empty queue
		if (front <= rear) {
			for (int i = front; i <= rear; i++) {
				cout << queue[i] << " ";
			} cout << "\n";
		}
		// if the front > rear and looks like this shape
		/*   -1   0   1   2   3   4  <- index
                +---+---+---+---+---+
        Queue:  | ● | ● |   | ● | ● |
                +---+---+---+---+---+
                      ↑       ↑
                    rear    front
		*/
		else {
			for (int i = front; i < size; i++) {
				cout << queue[i] << " ";
			} cout << "\n";
         	for (int i = 0; i <= rear; i++) {
				cout << queue[i] << " ";
			} cout << "\n";
	
		}
	}
}
