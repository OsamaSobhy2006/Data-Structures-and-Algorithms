#include<iostream>
#include "queue.h"
using namespace std;

int queue[size];
int front = -1, rear = -1;


// function to insert values in the queue
void  enqueue(int value) {
	// check if the queue is not full
	if (rear != size - 1) {
		// check if the queue is empty
		if (front == -1 && rear == -1) {
			// increase front value by 1
			front++;

			// increate the rear value by 1 and give it the value
			queue[++rear] = value;
		}
		// first check if the queue is not full and add the new value
		else
			queue[++rear] = value;
	}
	// if the queue is empty
	else
		cout << "Queue is Empty.\n";
}

// function to remove elements from queue
void dequeue() {
	// check if the queue is not empty
	if (front != -1 && rear != -1 && front <= rear) {
		// move the front to the next point
		front++; // now he moved to the next point and ignore the first point
	}
	// if the queue is empty
	else
		cout << "Queue is Empty.\n";
}

void display() {
	// check if the queu is not empty
	if (front != -1 && rear != -1 && front <= rear) {
		// loop on the array (queue)
		for (int i = front; i <= rear; i++) {
			// print the value 
			cout << queue[i] << " ";
		}
		cout << "\n";
	} 
	// if queue is empty
	else {
		cout << "Queue is Empty.\n";
	}

}

// function to return the element in the top of queue
int peek() {
	// check if the queu is not empty
	if (front != -1 && rear != -1 && front <= rear) {
		// return the value of front
		return queue[front];
	} 
	// if queue is empty
	else {
		cout << "Queue is Empty.\n";
		return -1;
	}
}