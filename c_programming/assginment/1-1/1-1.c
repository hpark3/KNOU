/* 다음을 실행하는 프로그램이다.
    1. 정수값 2개를 입력 받아
    2. 평균값을 정수로 구한 후
    3. 부호를 반전한 값 출력 */

    /* 도입부 */
#include <stdio.h> //C표준 라이브러리 중 하나인 stdio.h라는 헤더 파일에 선언된 내용
                   //(printf, scanf 등을 멤버 함수로 포함)을 포함
#pragma warning(disable:4996)

int x, y, result; //정수 저장 변수 선언문
int mean(int x, int y); //사용자 함수 원형

/* main() 함수 */
void main()
{
    printf("2개의 정수값을 입력하시오\n"); //주어진 출력 양식으로 자료를 출력

    /* 첫 번째 정수 입력 */
    printf("정수 x : ");
    scanf("%d", &x); //주어진 양식으로 자료를 입력받아 저장된 기억공간(변수)에 저장
    /* 두 번째 정수 입력 */
    printf("정수 y : ");
    scanf("%d", &y);
    /* 함수 호출에 의해 두 수의 평균값을 정수로 구하고 */
    result = mean(x, y);
    /* 부호를 변경한 값을 출력 */
    result *= -1;
    printf("x(%d)와 y(%d)의 평균값에 부호를 반전한 값은 %d입니다. \n", x, y, result);
}

/* 두 수의 평균을 계산하여 돌려주는 사용자 함수 */
int mean(int x, int y)
{
    return ((x + y) / 2);
}