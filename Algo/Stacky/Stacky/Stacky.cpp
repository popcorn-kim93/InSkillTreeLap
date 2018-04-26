// Stacky.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "LinkL.h"
#include "LStack.h"
#include "AStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{/*
	LStack<int> a;

	a.Push(10);
	a.Push(9);
	a.Push(8);
	a.Push(7);

	int b = a.Pop();
	printf("%d\n", b);
	b = a.Pop();
	printf("%d\n", b);

	a.Push(1);
	a.Push(2);
	a.Push(3);
	a.Push(4);
	a.Push(5);
	a.Push(6);

	while (a.Length() > 0) {
		printf("%d\n", a.Pop());
	}

	LStack<char> c;
	for (int i = 'Z'; i >= 'A'; --i) {
		c.Push(i);
	}

	while (c.Length() >= 1) {
		printf("%c\n", c.Pop());
	}*/

	AStack<int> goodA;
	goodA.Init(10);
	for (int i = 0; i < 10; ++i) {
		goodA.Push(i);
	}
	printf("%d\n", goodA.Pop());
	printf("%d\n", goodA.Pop());
	printf("%d\n", goodA.Pop());
	printf("%d\n", goodA.Pop());
	for (int i = 0; i > goodA.Length(); ++i) {
		goodA.Push(i + 10);
	}
	for (int i = 0; i > goodA.Length(); ++i) {
		printf("%d\n", goodA.Pop());
	}

    return 0;
}

