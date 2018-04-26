// NewDDL.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//
#define _CRT_NONSTDC_NO_WARNINGS


#include "stdafx.h"
#include "Ddl.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

class Line {
public:
	Line();
	char data[80];
};

int main()
{
		// 일반 템플릿 클래스 호출법
	/*DLList<int> GoodList;
	GoodList.Push_Back(2);
	GoodList.Push_Front(1);
	for (int i = 0; i < 10; ++i) {
		GoodList.Push_Back(i);
	}
	DLLNode<int>* good = GoodList.DeleteNode(4);
	GoodList.DeleteNode(1);*/

	//--------------------------------------------

	//DLList<Line> T;    // Line 클래스 생성 테스트
	//Line T1;
	//T1.data[0] = 1;
	//Line T2;
	//T2.data[0] = 2;
	//Line T3;
	//T3.data[0] = 3;

	//T.Push_Back(T1);
	//T.Push_Back(T2);
	//T.Push_Back(T3);

	//DLLNode<Line>* Cursor = T.IndexOf(2);

	DLList<Line> T;              // 파일 읽기
	char buffer[1024] = { 0 };
	FILE* fp = fopen("data.txt", "r");
	Line Temp;

	while (!feof(fp)) {     // 파일 한줄씩 읽어서 List에 넣기
		fgets(buffer, 80, fp);
		memcpy(Temp.data, buffer, 80);
		T.Push_Back(Temp);
	}

	char InputKey;
	int StartLine = 1;
	int MaxLine = 100;
	int i = 0;
	
	do {         //  출력하는 방법
		for (DLLNode<Line>* Current = T.IndexOf(StartLine); Current != T.GetEnd(); Current = Current->Next) {
			i++;
			printf("%s", Current->Value.data);
			if (i > 5) {
				i = 0;
				break;
			}
		}
		InputKey = _getch();
		if (InputKey == 'w') {
			if (StartLine == 1) {

			}
			else {
				--StartLine;
			}
		}
		else if (InputKey == 's') {
			++StartLine;
		}
		system("cls");
	} while (InputKey != 'q');


	fclose(fp);
	
	return 0;
}
