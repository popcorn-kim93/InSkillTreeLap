// Hellow.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
//#include <iostream>
#include <string.h>

//int* sum_execute(int *nume);                               // 내가 만든 함수
//void sum_execute_ori(int *arr, int* outSum, int* outAvg);  // 원래 의도 함수
//
////int main()    // 첫번째 시간
////{
////	int *result;
////	int sum = 0;
////	int i = 0;
////	int avg = 0;
////
////	int num[10];
////	for (i = 0; i < 10; ++i) {
////		std::cin >> num[i];
////	}
////
////	result = sum_execute(num);
////
////	sum = result[0];
////	avg = result[1];
////
////	std::cout << "총 합은 " << sum << std::endl;
////	std::cout << "평균은 " << avg << std::endl;
////
////	sum = 0;
////	avg = 0;
////
////	sum_execute_ori(num, &sum, &avg);
////	std::cout << "배운 함수로 구한 총 합은 " << sum << std::endl;
////	std::cout << "배운 함수로 구한 평균은 " << avg << std::endl;
////
////	std::cin >> i;
////
////    return 0;
////}
////
////int* sum_execute(int *nume) {
////	int result[2];                    // 결과를 담을 배열
////	
////	int avg = 0;
////	int sum = 0;
////	for (int i = 0; i < 10; ++i) {    // 합
////		sum += *(nume + i);
////	}
////
////	avg = sum / 10;                   // 평균
////
////	result[0] = sum;
////	result[1] = avg;
////
////	return result;                    // 전달
////}
////
////void sum_execute_ori(int *arr, int* outSum, int* outAvg) {
////	*outSum = 0;
////	*outAvg = 0;
////
////	for (int i = 0; i < 10; ++i) {
////		*outSum += arr[i];
////	}
////
////	*outAvg = (*outSum) / 10;
////	
////}

//int main() {                               // 동적으로 문자열을 넣고싶을때(동적 메모리할당)
//	char* words[100];
//	char buffer[1024] = { 0 };
//
//	for (int i = 0; i < 3; ++i) {
//		scanf("%s", buffer);
//		words[i] = (char*)malloc(l * sizeof(char));
//		strcpy(words[i], buffer);
//	}
//
//	for (int = i = 0; i < 3; ++i) {
//		printf("%s\n", words[i]);
//	}
//}

//void InputString(char* good) {    // 왜안될까 썅
//	char buffer[100] = { 0 };
//	int len = 0;
//
//	scanf("%s", buffer);
//	good = (char*)malloc(strlen(buffer) * sizeof(char));
//	len = strlen(buffer);
//	strcpy(good, buffer);
//}
//void PrintString(char* good) {
//	if (good) {
//		printf("%s:%d", good, strlen(good));
//	}
//}
//int main() {
//	char* good[100] = { 0 };
//
//	for (int i = 0; i < 2; ++i) {
//		InputString(good[i]);
//		PrintString(good[i]);
//	}
//}


char *my_strdup(const char *s) {
	char *p = malloc(strlen(s) + 1);
	if (p) { strcpy(p, s); }
	return p;
}
int main() {
	char* words[100];            // 자료 저장 배열
	char buffer[1024];           // 입력 임시 저장소
	int MaxCount = 100;          // 최대 갯수
	int Count = 0;               // 입력된 갯수

	FILE* fp = fopen("data.txt","r");

	do
	{
		//gets_s(buffer, 1024);
		//fgets(buffer, 1024, stdin);                  // 키보드(기본입력) 입력

		fgets(buffer, 1024, fp);                     // 파일에서 입력받기

		int WordsCount = strlen(buffer);
		if (WordsCount > 0) {
			printf("%s:%d\n", buffer, WordsCount);  // 출력
			words[Count] = my_strdup(buffer);          // 버퍼 내용을 메모리 복사 생성
			Count++;
		}
	} while (strlen(buffer) != 0 && Count < MaxCount);  // 최대 갯수가 넘지를 않고, 입력이 없을때까지

	for (int i = 0; i < Count; ++i) {
		int WordsCount = strlen(words[i]);
		printf("%s:%d\n", buffer, WordsCount);
	}
}
