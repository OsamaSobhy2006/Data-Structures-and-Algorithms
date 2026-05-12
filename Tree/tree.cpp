#include<iostream>
#include "tree.h"
using namespace std;

Node::Node(int value) {
	data = value;
	left = nullptr;
	right = nullptr;
}

// constructor
BST::BST(){
	// initialize empty tree
	root = nullptr;
}

// insert helper function
Node* BST::insertHelper(Node* node, int value) {
	// create new node if current node is null
	if (node == nullptr)
		return new Node(value);

	// insert into left subtree
	if (value < node->data)
		node->left = insertHelper(node->left, value);

	// insert into right subtree
	else if (value > node->data)
		node->right = insertHelper(node->right, value);

	// return current node
	return node;
}

// public insert function
void BST::insert(int value) {
	// start insertion from root
	root = insertHelper(root, value);
}

// search helper function
bool BST::searchHelper(Node* node, int value) {

	// value not found
	if (node == nullptr)
		return false;

	// value fould
	if (node->data == value)
		return true;

	// search in left subtree
	if (value < node->data)
		return searchHelper(node->left, value);

	// search in right subtree
	return searchHelper(node->right, value);
}

// public search function
bool BST::search(int value) {
		
	// start searching from root
	return searchHelper(root, value);
}

// inorder traversal helper
void BST::inorderHelper(Node* node) {
	
	// stop recursion if node is null (no data to print)
	if (node == nullptr)
		return;

	// visit left subtree
	inorderHelper(node->left);

	// print current node
	cout << node->data << " ";

	// visit right subtree
	inorderHelper(node->right);
}

// public inorder traversal
void BST::inorder() {
	
	// start traversal from root
	inorderHelper(root);
	cout << endl;
}

// find min node
Node* BST::findMin(Node* node) {

	// move left until smallest node
	while (node->left != nullptr)
		node = node->left;

	// return min node
	return node;
}

// remove helper function
Node* BST::removeHelper(Node* node, int value) {

	// node not found
	if (node == nullptr)
		return nullptr;

	// search in left subtree
	if (value < node->data)
		node->left = removeHelper(node->left, value);

	// search in right subtree
	else if (value > node->data)
		node->right = removeHelper(node->right, value);

	// node found
	else {
		// case 1 if no children
		if (node->left == nullptr && node->right == nullptr) {
			delete node;
			return nullptr;
		}

		// case 2 if one right children
		else if (node->left == nullptr) {
			Node* temp = node->right; // act like new root
			delete node;
			return temp;
		}

		// case 3 if one left children
		else if (node->right == nullptr) {
			Node* temp = node->left; // act like new root
			delete node;
			return temp;
		}

		// case 4 two children
		else {
			// get min node from right subtree
			Node* minNode = findMin(node->right);

			// replace current value
			node->data = minNode->data;

			// delete duplicate node
			node->right = removeHelper(node->right, minNode->data);
		}

	}

	// return updated node
	return node;
}

// public remove function
void BST::remove(int value) {

	// start removing from root
	root = removeHelper(root, value);
}