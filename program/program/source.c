#include <stdio.h>

void main()
{

#pragma region 비트

	// 데이터를 나타내는 최소의 단위이며, 0또는 1의
	// 조합으로 논리 계산을 수행하는 단위입니다.

#pragma region (10)진수를 (2)진수로 변환하는 과정

	// 10진수를 1이 될 때까지 계속 2로 나누어준 다음
	// 나눈 위치의 나머지 값을 아래에서 워로 순서대로 정렬합니다.

#pragma endregion

#pragma region (2)진수를 (10)진수로 변환하는 과정

	// 1 바이트에 2진수로 저장된 값을 2의 제곱으로 나타냅니다.
	// 각각의 비트에 1이 있다면 1과 2의 제곱의 위치를 계산한 다음
	// 각각의 비트를 모두 더하여 10진수로 나타냅니다.

#pragma endregion

#pragma region 비트 연산자

	// 비트 단위로 논리 연산을 수행하기 위해 사용하는 연산자입니다.
	
#pragma region AND 연산자

	// 두 개의 피연산자가 모두 1이면 1을 반환하는 연산자입니다.
	// 키보드 &

	// int x1 = 10; // 00001010
	// int x2 = 6;  // 00000110
	// int x3 = x1 & x2; // 00000010
	// printf("x1 & x2 = %d\n", x1 & x2); // 2

#pragma endregion


#pragma region OR 연산자

	// 두 개의 피연산자 중 하나라도 1이면 1을 반환하는 연산자입니다.
	// 키보드 \와 shift

	int x1 = 8; // 00001000
	int x2 = 12; // 00001100
	printf("x1 | x2 = %d\n", x1 | x2); // 00001100

#pragma endregion


#pragma endregion



	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0또는 1의 값만 저장할 수 있습니다.

#pragma endregion


}