/* 사용자가 입력한 액수만큼 동전(500원, 100원, 50원, 10원)으로 교환해주는 프로그램이다. */

/* 도입부 */
#include <stdio.h> //표준입출력 함수 printf(), scanf()를 사용하기 위한 헤더 파일 포함
#pragma warning(disable:4996) // // 권장하지 않는 함수 사용에 대한 경고 메시지 무시

/* main()함수 부분*/
void main()
{
	/* 정수 저장할 변수 선언
	최초 금액 및 최종 잔돈 저장 -> in_money 
	500원, 100원, 50원, 10원짜리 동전 개수 저장 -> coin_500, coin_100, coin_50, coin_10 */
	int in_money, coin_500, coin_100, coin_50, coin_10;
	printf(" 동전으로 교환할 금액은? ");
	scanf("%d", &in_money);

	/* 고액의 동전을 먼저 바꾸어 동전의 총 개수 최소화*/

	// 500원 동전 개수(=입력받은 금액을 500으로 나눈 몫)를 coin_500에 저장 
	coin_500 = in_money / 500;
	// 500원 동전 모두 제외한 나머지 금액(=500으로 나눈 나머지)은 in_money에 저장
	in_money = in_money % 500;
	coin_100 = in_money / 100; // 100원 동전 개수
	in_money = in_money % 100; // 100원 동전 제외한 나머지 금액
	coin_50 = in_money / 50;   // 50원 동전 개수
	in_money = in_money % 50;  // 50원 동전 제외한 나머지 금액
	coin_10 = in_money / 10;   // 10원 동전 개수
	in_money = in_money % 10;  // 10원 동전 제외한 나머지 금액 (=최종 잔돈)
	printf("\n 오백 원짜리 ==> %d 개 \n", coin_500);
	printf(" 백 원짜리   ==> %d 개 \n", coin_100);
	printf(" 오십 원짜리 ==> %d 개 \n", coin_50);
	printf(" 십 원짜리   ==> %d 개 \n", coin_10);
	printf(" 바꾸지 못한 잔돈 ==> %d 원 \n", in_money);
}