// Exam_First.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include "Problem_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	int choise = 0;
	bool bye = true;
	while (bye) {
		std::cout << std::endl << std::endl;
		std::cout << "-----------------------------" << std::endl;
		std::cout << "문제의 번호를 입력해세요(1~20번까지 있습니다. 그 외의 숫자를 입력하면 종료됩니다.)"<<std::endl;;
		std::cin >> choise;

		switch (choise)
		{
		case 1:
		case 2:
			Prom_1_2();
			break;
		case 3:
			Prom_3();
			break;
		case 4:
			Prom_4();
			break;
		case 5:
			Prom_5();
			break;
		case 6:
			Prom_6();
			break;
		case 7:
			Prom_7();
			break;
		case 8:
			Prom_8();
			break;
		case 9:
			Prom_9();
			break;
		case 10:
			Prom_10();
			break;
		case 11:
			Prom_11();
			break;
		case 12:
			Prom_12();
			break;
		case 13:
			Prom_13();
			break;
		case 14:
			Prom_14();
			break;
		case 15:
			Prom_15();
			break;
		case 16:
			Prom_16();
			break;
		case 17:
			Prom_17();
			break;
		case 18:
			Prom_18();
			break;
		case 19:
			Prom_19();
			break;
		case 20:
			Prom_20();
			break;
		default:
			bye = false;
		}
	}
	std::cout << "BYE" << std::endl;

    return 0;
}

