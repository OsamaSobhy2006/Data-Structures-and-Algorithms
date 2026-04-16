#include<iostream>
#include "linkedlist.h"

using namespace std;

int main() {
	
	insertEnd(5);
	insertEnd(10);
	insertEnd(24);
	insertEnd(15);
	display();
	deleteNode(10);
	display();
	insertBeginning(7);
	display();
	deleteBeginning();
	display();
	deleteEnd();
	display();


	return 0;
}