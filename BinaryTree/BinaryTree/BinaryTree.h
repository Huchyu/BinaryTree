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
	void AddNode(int _data);
	void RemoveNode(int _data);
	void PrintAllNode();
private:
	Node* CreateNode(int _data);
	void InsertNode(Node* _tree, Node* _newNode);
	Node* DeleteNode(Node* _tree, int _data);
	Node* FindIn(Node* _root);
	void InOrder(Node* _root);
public:
	BinaryTree();
	~BinaryTree();
};