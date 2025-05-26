#include <stdio.h>

void main()
{
#pragma region 반복문
	// 프로그램 내에서 특정한 작업을 반복적으로 수행하는 명령문입니다.

#pragma region 증감 연산자
	// 피연산자를 하나씩 증가시키거나 감소시키는 연산자입니다.

#pragma region 전위 증감 연산자
	// 변수의 값을 증감시킨 후에 연산을 수행하는 연산자입니다.

	// int a = 0;
	// int b = ++a;
	// printf("a : %d\nb : %d\n", a, b);
	// b = --a;
	// printf("a : %d\nb : %d\n", a, b);

#pragma endregion

#pragma region 후위 증감 연산자
	// 연산을 수행한 다음 변수의 값을 증감시키는 연산자입니다.

	// int a = 0;
	// int b = 0;
	// b = a++;
	// printf("a: %d\nb : %d\n", a, b);
	// b = a--;
	// printf("a: %d\nb : %d\n", a, b);

#pragma endregion



#pragma endregion

#pragma region for문
	// 초기 식을 연산하여 조건식의 결과에 따라 특정한 수만큼 반복하는 명령문입니다.

	// 반복문이 동작하는 순서는 "초기화 -> 조건검색 -> 실행 -> 증감"의 구조로 동작합니다.

	// for (int i = 0; i < 5; i++) // 이 때의 증감연산자(++,--)는 변수의 앞에 붙이든 뒤에 붙이든 상관없습니다.
	// {
	// 	printf("Hello World\n");
	// }


#pragma endregion

#pragma region while문
	// 특정 조건을 만족할 때까지 반복하는 명령문입니다.

	// 반복문을 순차적으로 실행하면서 조건 분기를 만나게 되면
	// 어느 쪽으로 실행 흐름이 갈 지 미리 확인합니다.

	// int a = 0;
	// while (a < 5)
	// {
	// 	printf("a : %d\n", a);
	// 
	// 	a++;
	// }


#pragma endregion

#pragma region do while문
	// 조건과 상관없이 한 번의 작업을 수행한 후에
	// 조건에 따라 명령문을 실행하는 반복	문입니다.

	// int a = 0;
	// do {
	// 	printf("a : %d\n", a);
	// 	a++;
	// } while (a < 5);

	// 반복문의 경우 미리 예측해서 실행하는 구조를 가지며
	// 예측이 틀렸다면 현재 반복문 내의 조건 분기면 다시 검사하여 처리합니다.

#pragma endregion

#pragma region nested for문
	// 반복문 내에 반복문을 포함하는 구조입니다.

	// for (int i = 0; i < 3; i++) 
	// {
	// 	printf("i = %d\n\n", i);
	// 
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("j = %d\n", j);
	// 	}
	// 	printf("\n");
	// }


#pragma endregion

#pragma region continue문
	// 해당 조건문만 실행하지 않고, 반복문은 이어서 실행하는 제어문입니다.

	/*
	printf("1부터 10까지 나열하되, 3의 배수는 빼고 나열한다.\n");

	for (int count = 1; count <= 10; count++)
	{
		if (count % 3 == 0) // 변수를 3으로 나눈 나머지 값이 0일 때
		{
			continue; // 이번에는 실행하지 않는다
		}
		printf("%d\n", count);

	}
	*/

#pragma endregion


#pragma endregion


}