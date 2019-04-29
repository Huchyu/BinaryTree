#include "BinaryTree.h"

BinaryTree::BinaryTree()
{
	rootNode = nullptr;
}

BinaryTree::~BinaryTree()
{
}

void BinaryTree::AddNode(int data)
{
	Node* newNode = CreateNode(data);

	if (rootNode == nullptr)
	{
		rootNode = newNode;
	}
	else
	{
		InsertNode(rootNode, newNode);
	}
}

void BinaryTree::RemoveNode(int data)
{
	if (rootNode == nullptr)
	{
		cout << "자료가 없습니다." << endl;
	}
	else
	{
		DeleteNode(rootNode, data);
	}
}

void BinaryTree::PrintAllNode()
{
	InOrder(rootNode);
}

Node * BinaryTree::CreateNode(int data)
{
	Node* newNode = new Node;
	newNode->left = nullptr;
	newNode->right = nullptr;
	newNode->data = data;
	return newNode;
}

void BinaryTree::InsertNode(Node * tree, Node * newNode)
{
	if (tree->data < newNode->data)
	{
		if (tree->right == nullptr)
		{
			tree->right = newNode;
		}
		else
		{
			InsertNode(tree->right, newNode);
		}
	}
	else if (tree->data > newNode->data)
	{
		if (tree->left == nullptr)
		{
			tree->left = newNode;
		}
		else
		{
			InsertNode(tree->left, newNode);
		}
	}
	else
	{
		tree->data = newNode->data;
	}
}

Node * BinaryTree::DeleteNode(Node * tree, int data)
{
	Node* temp = nullptr;
	if (tree == nullptr)
	{
		return nullptr;
	}
	else if (data < tree->data)
	{
		tree->left = DeleteNode(tree->left, data);
	}
	else if (data > tree->data)
	{
		tree->right = DeleteNode(tree->right, data);
	}
	else
	{
		//자식이 없을 경우
		if (tree->left == nullptr && tree->right == nullptr)
		{
			delete tree;
			tree = nullptr;
		}
		//자식이 오른쪽에 하나일 경우
		else if (tree->left == nullptr)
		{
			temp = tree;
			tree = tree->right;
			delete temp;
		}

		//자식이 왼쪽에 하나일 경우
		else if (tree->right == nullptr)
		{
			temp = tree;
			tree = tree->left;
			delete temp;
		}
		//자식이 둘다 있을 경우
		else
		{
			temp = FindMinParent(tree->right);
			tree->data = temp->data;
			tree->right = DeleteNode(tree->right, temp->data);
		}
	}

	return tree;
}

Node * BinaryTree::FindMinParent(Node * root)
{
	while (root->left != nullptr)
	{
		root = root->left;
	}

	return root;
}

void BinaryTree::InOrder(Node * root)
{
	if (root == nullptr)
	{
		return;
	}

	InOrder(root->left);

	cout << root->data << endl;

	InOrder(root->right);
}