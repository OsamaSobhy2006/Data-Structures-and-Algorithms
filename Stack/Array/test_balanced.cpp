#include <iostream>
#include <string>
#include "Balanced_parentheses.h"

using namespace std;


int main(){
	string s;

	cout << "Enter String: ";
	cin >> s;

	if (isValid(s))
		cout << s << " is Valid. \n";
	else
		cout << s << " is inValid. \n";
}