// Miro2.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Position.h"
#include "FoundMethods.h"
#include <queue>
#include <stack>
#include <iostream>


int main()
{
	// 내가만든 리커시브 길찾기

	//std::stack<Position*> Good;
	//Position Start;
	//Start.x = 0;
	//Start.y = 0;

	//int num = 100;    // 순서를 세기 위함

	//num = FoundRoute(Start, num);

	//FoundFinalRoute(Good);  // 여기서부터 안됌

	//ClearMase();

	//WriteFinalRoute(Good, num);

	//PrintFinalRoute();

	//printf("%d,%d", Start.y, Start.x);

	
	// 범위 구하기
	bool good = true;
	while (good) {
		PrintMazeRange();
		Position Start;
		std::cout << "X 좌표 : " << std::ends;
		std::cin >> Start.x;

		std::cout << "Y 좌표 : " << std::ends;
		std::cin >> Start.y;

		int count = FoundRange(Start, 0);
		std::cout << "선택된 영역의 갯수는 " << count << "개 입니다" << std::endl;

		int re;
		std::cout << "다시?" << std::ends;
		std::cin >> re;
		if (re == 1) {
			good = true;
		}
		else {
			good = false;
		}
	}
	
	return 0;
}

