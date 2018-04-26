// Probl2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "MyQueue.h"
#include "MyAQueue.h"

//int Promb1() {                // 문자열 순서 바꾸기
//	std::stack<char> Good;
//	char Inp[100];
//	int e = 0;
//
//	scanf("%s", Inp);
//
//	e = 0;
//	while (Inp[e] != NULL) {
//		Good.push(Inp[e]);
//		++e;
//	}
//
//	int size = Good.size();
//
//	while (size > 0) {
//		printf("%c", Good.top());
//		Good.pop();
//		--size;
//	}
//	return 0;
//}

//class position {          // 길찾기 깊이 우선 탐색
//public:
//	int x;
//	int y;
//};
//
//#define max 10
//#define path 0
//#define wall 1
//#define visited 2
//#define backtrace 3
//
//int maze[max][max] = {
//	{ 0,0,0,0,1,0,0,0,1,0, },
//	{ 1,1,1,0,0,0,1,1,1,0, },
//	{ 1,1,1,0,1,1,1,1,1,0, },
//	{ 1,1,0,0,0,1,1,1,1,0, },
//	{ 1,1,0,1,1,1,1,0,0,0, },
//	{ 1,0,0,1,1,0,1,0,1,0, },
//	{ 1,0,1,1,1,0,1,0,1,0, },
//	{ 1,0,0,0,0,0,0,0,1,0, },
//	{ 1,1,1,1,1,0,1,1,1,0, },
//	{ 1,1,1,1,1,0,1,1,1,0, }
//};
//
//bool canmove(position& current) {
//	if (current.y - 1 >= 0 && maze[current.y - 1][current.x] == 0) {
//		current.y--;
//		return true;
//	}
//	else if (current.x + 1 < max&&maze[current.y][current.x + 1] == 0) {
//		current.x++;
//		return true;
//	}
//	else if (current.y + 1 < max&&maze[current.y + 1][current.x] == 0) {
//		current.y++;
//		return true;
//	}
//	else if (current.x - 1 >= 0 && maze[current.y][current.x - 1] == 0) {
//		current.x--;
//		return true;
//	}
//
//	return false;
//
//	position next;
//	for (int i = 0; i < 4; ++i) {
//
//	}
//}
//
//void printmaze(const position& current) {
//	for (int y = 0; y < max; y++) {
//		for (int x = 0; x < max; x++) {
//			if (current.x == x && current.y == y) {
//				std::cout << "p" << " ";
//			}
//			else {
//				std::cout << maze[y][x] << " ";
//			}
//		}
//		std::cout << std::endl;
//	}
//	std::cout << "(" << current.y << "," << current.x << ")" << std::endl;
//}
//
//int main()
//{
//	std::stack<Position> Map;
//	Position Current;
//	Current.x = 0;
//	Current.y = 0;
//
//	while (1) {
//		Maze[Current.y][Current.x] = VISITED;
//		if (!CanMove(Current)) {
//			Position Temp = Map.top();
//			Map.pop();
//			Maze[Current.y][Current.x] = BACKTRACE;
//			Current = Temp;
//		}
//		else {
//			Map.push(Current);
//		}
//		PrintMaze(Current);
//		getchar();
//		system("cls");
//
//		if (Current.x == (MAX - 1) && Current.y == MAX - 1) {
//			std::cout << "탈출~!" << std::endl;
//			break;
//		}
//	}
//
//	getchar();
//	return 0;
//}

class position {          // 길찾기 깊이 우선 탐색
public:
	int x;
	int y;
};

#define max 10
#define path 0
#define wall 1
#define visited 2
#define backtrace 3

position Dir[4];

void InitDir() {
	Dir[0].x = 0;
	Dir[0]
}

int maze[max][max] = {
	{ 0,0,0,0,1,0,0,0,1,0, },
	{ 1,1,1,0,0,0,1,1,1,0, },
	{ 1,1,1,0,1,1,1,1,1,0, },
	{ 1,1,0,0,0,1,1,1,1,0, },
	{ 1,1,0,1,1,1,1,0,0,0, },
	{ 1,0,0,1,1,0,1,0,1,0, },
	{ 1,0,1,1,1,0,1,0,1,0, },
	{ 1,0,0,0,0,0,0,0,1,0, },
	{ 1,1,1,1,1,0,1,1,1,0, },
	{ 1,1,1,1,1,0,1,1,1,0, }
};

bool canmove(position& current) {
	if (current.y - 1 >= 0 && maze[current.y - 1][current.x] == 0) {
		current.y--;
		return true;
	}
	else if (current.x + 1 < max&&maze[current.y][current.x + 1] == 0) {
		current.x++;
		return true;
	}
	else if (current.y + 1 < max&&maze[current.y + 1][current.x] == 0) {
		current.y++;
		return true;
	}
	else if (current.x - 1 >= 0 && maze[current.y][current.x - 1] == 0) {
		current.x--;
		return true;
	}

	return false;

	position next;
	for (int i = 0; i < 4; ++i) {

	}
}

void printmaze(const position& current) {
	for (int y = 0; y < max; y++) {
		for (int x = 0; x < max; x++) {
			if (current.x == x && current.y == y) {
				std::cout << "p" << " ";
			}
			else {
				std::cout << maze[y][x] << " ";
			}
		}
		std::cout << std::endl;
	}
	std::cout << "(" << current.y << "," << current.x << ")" << std::endl;
}

int main()
{
	AQueue<int> Q;
	Q.Init(1000);


	return 0;
}
