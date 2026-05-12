#include <iostream>
#include "tree.h"

using namespace std;

int main()
{
	BST tree;
	// insert values
	tree.insert(50);
	tree.insert(30);
	tree.insert(70);
	tree.insert(20);
	tree.insert(40);
	tree.insert(60);
	tree.insert(80);

	// print inorder traversal
	cout << "InOrder Traversal: ";
	tree.inorder();

	// search for value
	cout << "Search 40: ";

	if (tree.search(40))
		cout << "Found" << endl;
	else
		cout << "Not Found" << endl;

	// remove value
	tree.remove(70);

	// print inorder after deletion
	tree.inorder();


	return 0;
}