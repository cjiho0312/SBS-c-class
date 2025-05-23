#include <stdio.h>

void main()
{
#pragma region 조건문
	// 어떠한 조건이 주어졌을 때, 해당 조건에 따라 동작을 수행하도록 실행하는 명령문입니다.
#pragma region 관계 연산자
	// 두개의 피연산자의 값을 비교하여 그 결과를
	// 1 또는 0이라는 값으로 나타내는 연산자입니다.

	// > : 왼쪽의 값이 더 크다면
	// < : 오른쪽의 값이 더 크다면
	
	// >= : 왼쪽의 값이 더 크거나 같다면
	// <= : 오른쪽의 값이 더 크거나 같다면

	// == : 서로의 값이 같다면
	// != : 서로의 값이 다르다면

	/*
	int state1 = 10 > 5;
	int state2 = 10 < 5;
	int state3 = 10 >= 5;
	int state4 = 10 <= 5;
	int state5 = 10 == 5;
	int state6 = 10 != 5;

	printf("%d\n", state1);
	printf("%d\n", state2);
	printf("%d\n", state3);
	printf("%d\n", state4);
	printf("%d\n", state5);
	printf("%d\n", state6);
	*/



#pragma endregion

#pragma region if문
	// 어떤 특정한 조건을 비교하며 조건이 맞다면 실행되는 조건문입니다.
	
	/*
	int health = 0;
	if(health <= 0) 
	{
	printf("You are dead.\n");
	}
	*/

	// if문은 조건이 1일 때 실행되며, 0일 때는 실행되지 않습니다.


#pragma endregion

#pragma region else if문
	// if문에서 여러 개의 조건을 순차적으로 검사하고 싶을 때 사용하는 조건문입니다.
	// else if문의 경우 여러개를 사용할 수 있으며
	// if문 조건부터 아래로 하나씩 검사하다가 가장 먼저 조건이 맞는 분기로 들어갑니다.
	
	/*
	int coin = 20;

	if (coin >= 35) {
	printf("검을 구매했습니다.\n");
	coin -= 35;
	printf("남은 코인 : %d\n", coin);
	}

	else if (coin < 35) {

		printf("'%d'코인이 부족합니다.\n", 35 - coin);
		printf("당신의 현재 코인 : %d\n", coin);
	}
	*/


#pragma endregion

#pragma endregion

}