/*
	solving the most common problem in stack (balanced parentheses)
	Function: Check Balanced Parentheses
	-------------------------------------------
	This function checks if a string of brackets
	(), {}, [] is valid using a stack.

	Idea:
	Push opening brackets into the stack.
	When a closing bracket appears:
	check if it matches the last opening bracket.

	Example:
	Input:  ({[]})
	Output: Valid

	Input:  ([)]
	Output: Invalid
*/

#include<iostream>
#include<string>
#include "Balanced_parentheses.h"
using namespace std;



// Constructor: initialize stack as empty
Stack::Stack() {
	top = -1;
}

// Push: add element to top of stack
void Stack::push(char x) {

	// Check if stack is full
	if (top == 99) {
		cout << "Stack is Full.\n";
		return;
	}

	// Increment top and insert value
	arr[++top] = x;
}

// Pop: remove and return top element (LIFO)
char Stack::pop() {

	// Check if stack is empty
	if (top == -1) {
		cout << "Stack is Empty.\n";
		return '#'; // dummy value
	}

	// Return top element then decrease top
	return arr[top--];
}

// Check if stack is empty
bool Stack::isEmpty() {
	return top == -1;
}

// Check if parentheses are balanced
bool isValid(string s) {

	Stack st; // create stack

	// Traverse each character in the string
	for (char c : s) {

		// If opening bracket, push to stack
		if (c == '(' || c == '[' || c == '{')
			st.push(c);

		else {
			// If closing bracket and stack is empty → invalid
			if (st.isEmpty())
				return false;

			// Pop the last opening bracket
			char t = st.pop();

			// Check if it matches the current closing bracket
			if ((c == ')' && t != '(') ||
				(c == ']' && t != '[') ||
				(c == '}' && t != '{'))
				return false;
		}
	}

	// If stack is empty, all brackets are matched
	return st.isEmpty();
}

