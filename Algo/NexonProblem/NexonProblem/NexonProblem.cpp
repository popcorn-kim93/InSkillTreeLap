// NexonProblem.cpp: 콘솔 응용 프로그램의 진입점을 정의합니다.
//

#include "stdafx.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	unsigned long long* X;   // 입력받은 숫자 들
	int N = 0;   // 입력받은 숫자 갯수

	int power = 1;
	
	// N 입력받음
	scanf("%d", &N);

	// N 의 조건 ( 1<=N<2^18 )
	if (N >= 1 && N < pow(2,18)) {
		// X 할당
		X = (unsigned long long*)malloc(sizeof(unsigned long long)*N);

		unsigned long long temp = 0;
		// 반복 N만큼
		for (int i = 0; i < N; ) {
			// X에 숫자 입력받음
			scanf("%lld", &temp);
			// 조건 검사 ( X의 조건, 1 < X < 2^63 )
			if (temp > 1 && temp < pow(2,63)) {
				power = 1;                  // power 는 작은것부터 시작하기때문에 1로 초기화
				while (1) {                 // 입력받은 temp 보다는 큰 가장 가까운 2의 배수를 찾기
					if (power > temp) {     // power 가 temp 보다 크면
						X[i] = power;       // power 를 X[i] 에 넣음
						break;
					}
					else {                   // 크지 않으면
						power = power * 2;   // power 를 곱하기 2
					}
				}
				++i;
			}
		}
		// 반복할것
		for (int j = 1; j< N; ++j) {
			X[0] = X[0] ^ X[j];
		}
		// result 출력
		printf("%lld", X[0]);
	}
	
    return 0;
}

