#include<iostream>
#include "stack.h"

using namespace std;

int main() {
	push(5);
	push(10);
	push(15);
	push(30);
	push(40);
	display();
	pop();
	display();
	cout << peek();
}