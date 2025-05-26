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

#pragma region else문
	// if문을 포함한 여러 조건문에서 모든 조건이 맞지 않을 때 실행되는 조건문입니다.

	//  int number = 0;
	//	if (number < 0) 
	//	{
	//		printf("%d : 수가 음수입니다.", number);
	//	}
	//	else if (number > 0) 
	//	{
	//		printf("%d : 수가 양수입니다.", number);
	//	}
	//	else
	//	{
	//		printf("%d : 수가 0입니다.", number);
	//	}

	// if문에 연결된 모든 조건문의 조건이 맞을 때 가장 위에 있는 조건문만 실행됩니다.
#pragma endregion

#pragma region 논리 연산자
	// 두 개 이상의 조건을 결합하거나 하나의 조건을 반전시키는 연산자입니다.

#pragma region AND 연산자
	// 두 개의 조건이 맞다면 실행되는 연산자입니다.
	// 두 개의 조건 사이에 '&&'를 넣습니다. 

// int number = 4;
// if (number > 2 && number < 5) 
// {
// 	printf("%d은(는) 2보다 크고 5보다 작습니다.", number);
// }

#pragma endregion

#pragma region OR 연산자
// 두 개의 조건 중 하나라도 맞다면 실행되는 연산자입니다.
// 두 조건 사이에 '||'을 집어넣습니다.

/*
int soul = 3;
int key = 1;
if (soul >= 5 || key > 0) {
	printf("문이 열렸습니다.");
}
else {
	printf("영혼 5개를 가져오거나, 열쇠를 가져와야 합니다.");
}
*/

// 조건문의 논리 표현식을 평가하는 도중, 결과가 이미 확정났다면. 그 이후의 평가를 생략합니다.

#pragma endregion

#pragma region NOT 연산자
// 하나의 조건을 반전시키는 연산자입니다.
// 조건 앞에 '!'를 붙입니다. ex) if(!조건)
// 단일한 조건이 아닌 경우 (소괄호)를 이용하여 우선순위로 둬야 합니다.

/*
int power = 0;

if (!power)
{
	printf("the power is on.");
}
else {
	printf("the power is off.");
}
*/

#pragma endregion

#pragma region 사분면 예제

/*
float x = 0.1;
float y = -4.2;

if (x > 0 && y > 0)
{
	printf("제 1 사분면");
}
else if (x < 0 && y > 0)
{
	printf("제 2 사분면");
}
else if (x < 0 && y < 0)
{
	printf("제 3 사분면");
}
else if (x > 0 && y < 0)
{
	printf("제 4 사분면");
}
else if (x != 0 && y == 0)
{
	printf("x 절편");
}
else if (x == 0 && y != 0)
{
	printf("y 절편");
}
else if (x == 0 && y == 0)
{
	printf("원점");
}
*/
#pragma endregion

#pragma region switch문
// 어떤 결과에 따라 그 결과부터 실행되는 명령문입니다.
// 분기를 탈출시키기 위해선 'break;' 명령문을 사용합니다.
// 'default'문은 맞는 조건이 없을 때 실행됩니다.

/*
int state = 5;

switch (state)
{
case 0: printf("Idle State\n");
	break;
case 1: printf("Attack State\n");
	break;
case 2: printf("Die State\n");
	break;
default: printf("Exception\n");
	break;
}
*/


// switch문은 조건식으로 실수형 변수와 실수형 상수를 선언할 수 없습니다.


#pragma endregion



#pragma endregion


#pragma endregion

}