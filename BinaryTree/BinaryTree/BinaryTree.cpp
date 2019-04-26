#include "BinaryTree.h"



BinaryTree::BinaryTree()
{
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::AddNode(int _data)
{
	Node* newNode = CreateNode(_data);

	if (rootNode == nullptr)
	{
		rootNode = newNode;
	}
	else
	{
		InsertNode(rootNode, newNode);
	}
}

void BinaryTree::RemoveNode(int _data)
{
	if (rootNode == nullptr)
	{
		cout << "자료가 없습니다." << endl;
	}
	else
	{
		DeleteNode(rootNode, _data);
	}
}

void BinaryTree::PrintAllNode()
{
}

Node * BinaryTree::CreateNode(int _data)
{
	Node* newNode = new Node;
	newNode->left = nullptr;
	newNode->right = nullptr;
	newNode->data = _data;
	return newNode;
}

void BinaryTree::InsertNode(Node * _tree, Node * _newNode)
{
	if (_tree->data < _newNode->data)
	{
		if (_tree->right == nullptr)
		{
			_tree->right = _newNode;
		}
		else
		{
			InsertNode(_tree->right, _newNode);
		}
	}
	else if (_tree->data > _newNode->data)
	{
		if (_tree->left == nullptr)
		{
			_tree->left = _newNode;
		}
		else
		{
			InsertNode(_tree->left, _newNode);
		}
	}
	else
	{
		_tree->data = _newNode->data;
	}
}

Node * BinaryTree::DeleteNode(Node * _tree, int _data)
{
	if (_tree->data > _data)
	{
		DeleteNode(_tree->left, _data);
	}
	else if (_tree->data < _data)
	{
		DeleteNode(_tree->right, _data);
	}
	else
	{
		if (_tree->left == nullptr && _tree->right == nullptr)
		{
			delete _tree;
			_tree = nullptr;
		}
		else if (_tree->left == nullptr || _tree->right == nullptr)
		{
			if (_tree->left == nullptr)
			{
				_tree = _tree->right;
			}
			else if (_tree->right == nullptr)
			{
				_tree = _tree->left;
			}
		}
		else
		{
			if (_tree->left->data < _tree->right->data)
			{

			}
			else if (_tree->left->data > _tree->right->data)
			{

			}
			else
			{

			}
		}
	}
	return nullptr;
}

Node * BinaryTree::FindIn(Node * _root)
{
	return nullptr;
}

void BinaryTree::InOrder(Node * _root)
{
}
