#pragma once
#include <iostream>

using namespace std;

struct Node
{
	Node* left;
	Node* right;
	int data;
};

class BinaryTree
{
public:
	Node* rootNode;
public:
	void AddNode(int data);
	void RemoveNode(int data);
	void PrintAllNode();
private:
	Node* CreateNode(int data);
	void InsertNode(Node* tree, Node* newNode);
	Node* DeleteNode(Node* tree, int data);
	Node* FindMinParent(Node* root);
	void InOrder(Node* root);
public:
	BinaryTree();
	~BinaryTree();
};
