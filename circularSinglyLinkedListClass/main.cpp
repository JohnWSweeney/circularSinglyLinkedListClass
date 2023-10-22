#include <iostream>
#include "nodes.h"
#include "csList.h"

int main()
{
	std::cout << "Circular Singly Linked List Class v1.0.0\n\n";
	int result;
	int nodeCount;
	int data;
	int position;
	node* list = nullptr;
	node* ptr = nullptr;

	csList cslist;

	list = cslist.init(1234);
	for (int i = 0; i < 9; i++)
	{
		cslist.addNodeBack(list, pow(i, 5));
	}
	result = cslist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		cslist.print(list);
	}
	else
	{
		std::cout << "List is empty.\n";
	}
	/// test code here:
	
	///
	result = cslist.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		cslist.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}