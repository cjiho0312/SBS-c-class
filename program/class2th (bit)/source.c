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

	// int x1 = 8; // 00001000
	// int x2 = 12; // 00001100
	// printf("x1 | x2 = %d\n", x1 | x2); // 00001100

#pragma endregion


#pragma region XOR 연산자


	// 두 개의 피연산자가 서로 같으면 0을 반환하고,
	// 서로 다르면 1을 반환하는 연산자입니다.
	// 키보드 ^

	// int x3 = 3; // 00000011
	// int y3 = 8; // 00001000
	// printf("%d\n", x3 ^ y3);


#pragma endregion


#pragma region NOT 연산자

	// 비트를 반전시키는 연산자입니다.
	// 변수 앞에 ~를 붙여서 사용합니다.

	// char packet = 14; // 00001110
	// printf("%d\n", ~packet); // 11110001

	// 비트의 경우 가장 앞에있는 비트는 부호를 나타내며
	// 1이 있다면 값은 음수가 됩니다.

#pragma endregion


#pragma region 시프트 연산자

	// 값의 모든 비트를 지정한 수만큼 특정한 위치로 이동시키는 연산자입니다.
	// 키보드 <<, >>. ex) 변수 << 2는 변수를 왼쪽으로 2칸 이동시킵니다.

	// char data = 10; // 00001010
	// printf("data << 2 : %d\n", data << 2);
	// printf("data >> 2 : %d\n", data >> 2);

#pragma endregion


#pragma endregion

#pragma region 오버플로우

	// 특정한 자료형이 표현할 수 있는 최대값의 범위를 넘어서 연산을 수행하는 과정입니다.

	// char byte = 129;
	// printf("byte 변수의 값 : %d\n", byte);

	// 오버플로우는 부호 없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 오버플로우가 발생하면 infinity가 출력됩니다.

#pragma endregion

#pragma region 언더플로우

	// 특정한 자료형이 표현할 수 있는 최소값의 범위를 넘어서 연산을 수행하는 과정입니다.

// char byte = -129;
// printf("byte 변수의 값 : %d\n", byte);


	// 언더플로우는 부호없는 자료형에서도 똑같이 발생하며,
	// 실수일 때 언더플로우가 발생하면 -infinity가 출력됩니다.

#pragma endregion

#pragma region 부호 없는 자료형

// 정수 값을 저장할 수 있는 자료형 중에서, 부호 비트
// 없이 앞의 정수와 0만을 표형할 수 있는 자료형입니다.
// %d를 사용해도 되긴 하지만 %u를 사용하는 것이 좋습니다.

// unsigned int experience = -1; // 11111111
// printf("ecperince 변수의 값 : %u\n", experience);
// experience = 4294967295; // unsigned의 경우 11111111는 4294967295를 나타내게 됩니다.
// printf("ecperince 변수의 값 : %d\n", experience);

// 실수는 IBEE 754 구조가 부호 비트를 표현할 수 있으므로
// 부호 없이 사용할 수 있습니다.

#pragma endregion

#pragma region 실수를 저장하는 방법

#pragma region 고정 소수점

// 소수점의 위치를 고정하여 소수점의 위치를 나타내는 방법입니다.
// 고정 소수점은 정수부와 소수부의 크기가 작으므로 표현할 수 있는 범위가 한정되어 있습니다.

#pragma endregion

#pragma region 부동 소수점

// 소수점의 위치를 고정하지 않고, 소수점의 위치를 나타내는 방법입니다.
// 가수부에 있는 비트 중에서 가장 왼쪽에 있는 수는 표현하지 않습니다.

#pragma endregion


	double attack = 0.3;
	printf("attack 변수의 값 : %.9f\n", attack);

#pragma endregion


	// 메모리는 비트 단위로 데이터를 저장할 수 있으며,
	// 1개의 비트에는 0또는 1의 값만 저장할 수 있습니다.

#pragma endregion


}