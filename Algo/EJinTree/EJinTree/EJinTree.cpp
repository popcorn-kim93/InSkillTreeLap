// EJinTree.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "BTree.h"
#include <iostream>


int main()
{
	BTree TestTree(1);

	TestTree.Root->MakeLeftChild(2);
	TestTree.Root->MakeRightChild(3);
	TestTree.Root->Left->MakeLeftChild(4);
	TestTree.Root->Left->MakeRightChild(5);
	TestTree.Root->Right->MakeRightChild(6);
	TestTree.Root->Left->Left->MakeLeftChild(7);
	TestTree.Root->Left->Right->MakeLeftChild(8);
	TestTree.Root->Right->Right->MakeLeftChild(9);
	TestTree.Root->Right->Right->MakeRightChild(10);
	TestTree.Root->Left->Right->Left->MakeLeftChild(11);
	TestTree.Root->Left->Right->Left->MakeRightChild(12);

	TestTree.PreorderSearch(TestTree.Root);
	std::cout << std::endl;
	TestTree.InorderSearch(TestTree.Root);
	std::cout << std::endl;
	TestTree.PostorderSearch(TestTree.Root);

	int end;
	std::cin >> end;

    return 0;
}

