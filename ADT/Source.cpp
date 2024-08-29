#include <iostream>
#include "BinaryTree.h"
 

template<typename T>
void ShowValue(const T& value)
{
	std::cout << value << " ";
}

template<typename T>
void Show(const BinaryTree<T>& tree)
{
	std::cout << "Tree elements: ";
	tree.DoForAllElements(ShowValue<T>);
	std::cout << std::endl;
}

int main()
{
	BinaryTree<int> b{ 10,3,4,7,8,13 };

	Show(b);
}
