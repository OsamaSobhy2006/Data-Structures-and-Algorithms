#include<iostream>
#include<string>
#include "stack.h"
#include "Balanced_parentheses.h"

using namespace std;

// Unfortunately this main function test 2 files 

void testProblem();

int main() {
	//push(5);
	//push(10);
	//push(15);
	//push(30);
	//push(40);
	//display();
	//pop();
	//display();
	//cout << peek();

	testProblem();
}

void testProblem() {
	string s;

	cout << "Enter String: ";
	cin >> s;

	if (isValid(s))
		cout << s << " is Valid. \n";
	else
		cout << s << " is inValid. \n";

}