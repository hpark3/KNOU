/********************************/
/*  2021년 기말평가 온라인 과제물 /
/*  2019년도 1학기 기출           /
/********************************/

// 10. 다음 프로그램의 출력결과로 올바른 것은?

#include <stdio.h>
void main() {
	int a, b, sum = 0;
	for (a = 0; a < 10; a++)
		for (b = 5; b > 1; b--)
			sum += 1;
	printf("%d", sum);	//출력결과: 40
						// 이중for문으로 반복문 안의 실행문이 총 40번 반복됨
}