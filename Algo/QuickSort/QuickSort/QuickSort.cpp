// QuickSort.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int partition(int* data, int begin, int end)
{
	int pivot = data[end];
	int min = begin - 1;

	for (int max = begin; max <= end - 1; ++max)
	{
		if (data[max] <= pivot)
		{
			min++;
			int temp = data[min];
			data[min] = data[max];
			data[max] = temp;
		}
	}
	int temp = data[min+1];
	data[min + 1] = data[end];
	data[end] = temp;

	return min + 1;
}

void quicksort(int* data, int begin, int end)
{
	if (begin < end)
	{
		int pivot = partition(data, begin, end);
		quicksort(data, begin, pivot - 1);
		quicksort(data, pivot + 1, end);

	}
}

void BubbleS(int* data, int end) {
	int good = 1;
	while (good != 0) {
		good = 0;
		for (int i = 0; i < end - 1; ++i) {
			if (data[i + 1] < data[i]) {
				int temp = data[i + 1];
				data[i + 1] = data[i];
				data[i] = temp;
				good++;
			}
		}
	}
}

int main()
{
	int data[100];
	for (int i = 0; i < 100; ++i) {
		data[i] = rand() % 100;
	}
	for (int i = 0; i < 100; ++i) {
		std::cout << data[i] << " ";
	}

	BubbleS(data, 100);

	std::cout << std::endl;

	for (int i = 0; i < 100; ++i) {
		std::cout << data[i] << " ";
	}

    return 0;
}

