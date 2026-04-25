// solving the most common problem in linked list (reverse linked list)
// Function: Reverse Linked List
// -------------------------------------------
// This function reverses a singly linked list
// by changing the direction of the pointers.
//
// Example:
// Input:  1 -> 2 -> 3 -> NULL
// Output: 3 -> 2 -> 1 -> NULL

#include "linkedlist.h"


node* Reverse(node* head) {
	
	// prev will become the new head at the end
	node* prev = nullptr;

	// current starts from the original head
	node* current = head;

	// next is used to store the next node temporarily
	node* next = nullptr;

	// traverse the linked list until we reach the end
	while (current != nullptr) {
		// store the next node before breaking the link
		next = current->next;

		// reverse the direction of the current node
		current->next = prev;

		// move prev one step forward
		prev = current;

		// move current one step forward (using saved next)
		current = next;
	}

	// prev is now the new head of the reversed list
	return prev;
}

