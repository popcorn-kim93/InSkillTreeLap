// RecursiveMeth.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <string>
#include <stdio.h>
#include <iostream>

int RecursiveSum(int n) {
	if (n == 1) {
		return 1;
	}
	return n + RecursiveSum(n-1);
}

int RecursiveArraySum(int* data, int n) {
	--n;
	if (n == 0) {
		return data[0];
	}
	return data[n] + RecursiveArraySum(data,n);
}

void NormalReversePrint(std::string str) {
	for (int i = str.length() - 1; i >= 0; --i) {
		std::cout << str[i];
	}
	std::cout << std::endl;
}

void RecursiveReversPrint(std::string str) {
	if (str.length() == 0) {
		return;
	}
	std::cout << str[str.length() - 1];
	str.pop_back();
	RecursiveReversPrint(str);
}

void RecursiveReversePrint2(std::string str) {
	if (str.length() == 0) {
		return;
	}
	RecursiveReversePrint2(str.substr(1));
	std::cout << str[0] << std::endl;
}

int NormalStriingLength(std::string str) {
	int length = 0;
	for (int i = 0; str[i] != NULL; ++i) {
		length++;
	}
	return length;
}

int RecursiveStringLength(std::string str, int num) {

	if (str[num] == NULL) {
		return 0;
	}
	return 1 + RecursiveStringLength(str, num+1);
}

void NormalBinaryPrint(int n) {
	while (n != 1) {
		if (n % 2 == 1) {
			std::cout << "0";
		}
		else if(n % 2 == 0) {
			std::cout << "1";
		}
		n = n / 2;
	}
}

void RecursiveBinaryPrint(int n){

}

int RecursiveSearch(int* data, int n, int target) {
	if (data[n] == target) {
		return n;
	}
	else
	{
		return RecursiveSearch(data, n - 1, target);
	}
}

int main()
{
	printf("%d", RecursiveSum(10));
	printf("\n");
	int data[10] = { 1,2,3,4,5,6,7,8,9,10 };
	printf("%d", RecursiveArraySum(data, 10));
	printf("\n");

	std::string str = "HELLO EVERYONE NICE MEET YOU";
	std::string good = "";
	int length = 0;
	std::cout << str.substr(1) << std::endl;
	std::cout << NormalStriingLength(str) << std::endl;
	std::cout << RecursiveStringLength(str,length) << std::endl;
	NormalReversePrint(str);
	RecursiveReversPrint(str);

	std::cout << std::endl;

	NormalBinaryPrint(8);

	std::cout << std::endl;

	int nice[10] = { 1,2,3,4,5,6,7,8,9,10 };
	std::cout << RecursiveSearch(nice, 10, 7) << std::endl;

`	return 0;
}

