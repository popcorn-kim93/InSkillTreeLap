// DoubleLinded.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "DLList.h"
#include "DLLClass.h"

template<typename T>  // 템플릿 생성법
void Swap(T* a, T* b) {
	T Temp = T* a;
	T* a = T * b;
	T* b = Temp;
}

int main()
{
	//
	//for (int i = 1; i < 10; ++i) {
	//	AddNode(i);
	//}

	//PrintNodeFromHead();
	//PrintNodeFromTail();
	//DeleteNode(4);
	//PrintNodeFromHead();
	//DeleteNode(1);
	//PrintNodeFromHead();
	//DeleteNode(9);
	//PrintNodeFromHead();
	//InsertBefore(2, 1);
	//PrintNodeFromHead();
	//InsertAfter(8, 9);
	//PrintNodeFromHead();

	//int a = 3;
	//int b = 7;

	//Swap<int>(&a, &b);  // templete 사용법

	

	DLList<int> IntList;
	for (int i = 1; i < 10; ++i) {
		IntList.AddNode(i);
	}
	IntList.PrintNodeFromHead();
	IntList.InsertAfter(2, 444);
	IntList.InsertBefore(6, 555);
	IntList.PrintNodeFromHead();
	IntList.DeleteNode(4);
	IntList.PrintNodeFromHead();

	DLList<float> FloatList;
	FloatList.AddNode(1.4f);
	FloatList.AddNode(2.5f);
	FloatList.AddNode(3.7f);
	FloatList.AddNode(4.5f);
	FloatList.AddNode(5.1f);
	FloatList.AddNode(6.9f);
	FloatList.PrintNodeFromHead();  // printf가 실수로 표현을 안해서 이상한게 나옴
	FloatList.InsertAfter(1.4f, 24.3f);
	FloatList.InsertBefore(4.5f, 266.2f);
	FloatList.PrintNodeFromHead();

	int haha = 0;
	scanf("%d", haha);

    return 0;
}
