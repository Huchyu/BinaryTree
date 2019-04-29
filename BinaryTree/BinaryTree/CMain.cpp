#include "BinaryTree.h"


int iSum = 1;
int iN = 0;

int sum()
{
	if (iSum < 5)
	{
		iN = iSum * sum();
	}

	iSum++;

	return iN;
}

void main()
{
	//BinaryTree binaryTree;
	//
	//binaryTree.AddNode(7);
	//binaryTree.AddNode(5);
	//binaryTree.AddNode(6);
	//binaryTree.AddNode(3);
	//binaryTree.AddNode(4);
	//binaryTree.AddNode(2);
	//binaryTree.AddNode(1);
	//binaryTree.AddNode(9);
	//binaryTree.AddNode(8);
	//binaryTree.AddNode(10);
	//
	//
	//binaryTree.PrintAllNode();
	//
	//cout << "========================" << endl;
	//
	//binaryTree.RemoveNode(5);
	//
	//binaryTree.PrintAllNode();

	cout << sum() << endl;

}