#pragma once


struct Node {
	int data;
	Node* left;
	Node* right;
	Node(int value);
};

class BST {
private:
	// root of the tree
	Node* root;

	// helper function for insertion
	Node* insertHelper(Node* node, int value);

	// helper function for searching 
	bool searchHelper(Node* node, int value);

	// helper function for inorder traversal
	void inorderHelper(Node* node);

	// helper function for deleting node
	Node* removeHelper(Node* node, int value);

	// helper function to get minimum node
	Node* findMin(Node* node);

public: 
	// constructor
	BST();

	// insert value into tree
	void insert(int value);

	// search for value
	bool search(int value);

	// print inorder traversal
	void inorder();

	// remove value from tree
	void remove(int value);
};