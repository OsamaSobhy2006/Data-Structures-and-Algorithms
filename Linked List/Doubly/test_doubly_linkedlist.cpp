#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
	// create a new object
	doublyLinkedList list;

	list.insertFirst(10);
	list.insertFirst(20);
	list.insertFirst(30);
	list.insertFirst(40);
	list.insertEnd(50);
	list.insertEnd(60);
	list.deleteFirst();
	list.deleteEnd();


	list.displayForward();
	list.displayBackward();
}
