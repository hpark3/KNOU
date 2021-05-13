/* 다음을 실행하는 프로그램이다.
	1. 사다리꼴의 윗변, 밑변, 높이를 정수값으로 입력 받고
	2. 넓이를 실수값 소수점 이하 세 자리까지 출력 */

/* 도입부 */
#include <stdio.h>	//선행처리기
					//(printf(), scanf()를 사용하기 위한 헤더파일 포함

int a, b, h;		//정수 저장 변수 선언문
				// a: short base(윗변)
				// b: long base(밑변)
				// h: height(alttitude,높이)
float result;	//실수(사다리꼴 넓이) 저장 변수 선언문
float area(int a, int b, int h); //사용자 함수 원형

/* main() 함수 */
void main()
{
	printf("사다리꼴의 넓이를 구하기 위해 윗변, 밑변, 높이를 입력하시오.\n");
	/* 윗변 입력 */
	printf("윗변 : ");
	scanf("%d", &a);
	/* 밑변 입력 */
	printf("밑변 : ");
	scanf("%d", &b);
	/* 높이 입력 */
	printf("높이 : ");
	scanf("%d", &h);
	/* 함수 호출에 의해 사다리꼴 넓이를 실수값으로 구하고, 소수점 3자리까지 출력 */
	result = area(a, b, h);
	printf("윗변(%d), 밑변(%d), 높이(%d)를 가지는 사다리꼴의 면적은 %.3f입니다.", a, b, h, result);
	// %f 점의 오른쪽에 있는 값: 소수점 아래의 자릿수. 자릿수에 맞춰 자동으로 값을 반올림하여 출력

	printf("\n--------------------------------\n"); //실행 예시와 같이 개행 및 구분선 출력
}

float area(int a, int b, int h)
{
	/* int로 입력 받은 값들의 계산값을 실수로 구하기 위해 강제형 변환: cast 연산자 사용
	   각 변수 앞에 (float)을 붙여 a, b, h에 저장된 값을 float형으로 변환 */
	return((((float)a + (float)b) * (float)h / 2)); // 넓이 공식 = (윗변+밑변)*높이/2
}