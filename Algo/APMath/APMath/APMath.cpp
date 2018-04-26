// APMath.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stack>

char Infix[] = "2 - 10 / 5 * 6 + 4";
char Operators[] = "+-/*";
int OperatorPriority[] = { 1,1,2,2 };

std::stack<char*> PostFixStack;

int IsOperator(char ch)
{
	for (int i = 0; i < (int)strlen(Operators); ++i)
	{
		if (ch == Operators[i])
		{
			return i; // 연산자 배열 위치
		}
	}

	return -1; //연산자가 아니면 -1
}

int GetPriority(char* Operator)
{
	return OperatorPriority[IsOperator(Operator[0])];
}


char* OperatorProcess(char* Operator, char* Cursor)
{
	if (PostFixStack.size() == 0)
	{
		PostFixStack.push(Operator);
	}
	else
	{
		char* Top = PostFixStack.top();
		while (!(PostFixStack.size() == 0) && GetPriority(Top) >= GetPriority(Operator))
		{
			PostFixStack.pop();
			// printf("%s ", Top);
			sprintf(Cursor, "%s ", Top);
			Cursor += (strlen(Top) + 1);

			if (!(PostFixStack.size() == 0))
			{
				Top = PostFixStack.top();
			}
		}
		PostFixStack.push(Operator);
	}
	return 0;
}

int main()
{
	char* PostFixString = new char[strlen(Infix) + 1];
	char* Cursor = PostFixString;   // 어디까지 했는지 가르키는 커서가 필요

	char* token = strtok(Infix, " ");
	while (token != NULL)
	{
		if (token[0] >= '0' && token[0] <= '9') // 숫자 일때 처리
		{
			// printf("%s ", token);
			sprintf(Cursor, "%s ", token);
			Cursor += (strlen(token) + 1);   // 중간중간에 공백이 있기때문에 1을 더함
		}
		else if (IsOperator(token[0]) != -1) //연산자 처리
		{
			OperatorProcess(token,Cursor);
		}
		else // 예외 처리
		{
			printf("error");
			return -1;
		}

		token = strtok(NULL, " ");
	}

	while (!(PostFixStack.size() == 0))
	{
		char* Pop = PostFixStack.top();
		PostFixStack.pop();
		//printf("%s ", Pop);
		sprintf(Cursor, "%s ", Pop);
		Cursor += (strlen(Pop) + 1);
	}

    return 0;
}

