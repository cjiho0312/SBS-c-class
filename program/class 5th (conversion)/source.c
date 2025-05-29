#include <stdio.h>
#include "../program/library.h"

#define SIZE 5

void main()
{
#pragma region 자료형 변환
	// 서로 다른 자료형을 가지고 있는 변수끼리 연산이 이루어질 때
	// 기존에 저장했던 자료형을 다른 자료형으로 변환하여 연산을 수행하는 과정입니다.

#pragma region 정수의 승격
	// 값의 타입이 'int' 또는 더 큰 정수형으로 자동 변환되는 과정을 의미합니다.
	// 주로 연산 과정에서 작은 정수형 타입(char, short 등)이 int로 변환되는 것을 말합니다.

	/*
	char a = 5;
	short b = 7;
	
	printf("char a의 메모리 크기 : %u\n", sizeof(a)); // 1 byte
	printf("short b 의 메모리 크기 : %u\n", sizeof(b)); // 2 byte
	printf("a와 b를 합했을 때 결과값의 메모리 크기 : %u\n", sizeof(a + b)); // 4 byte (int 자료형)
	*/

#pragma endregion


#pragma region 암묵적 형 변환
	// 서로 다른 자료형으로 연산이 이루어질 때 자료형의 크기가 큰 자료형으로 변환되는 과정입니다.

	/*
	int integer = 100;
	float decimal = 36.5f;
	printf("char 자료형의 크기 : %u\n", sizeof(integer + decimal));
	*/

	// 표현 범위가 작은 자료형에 표현 범위가 큰 자료형을 저장하게 되면 암묵적으로 데이터 손실이 발생합니다.

#pragma endregion

#pragma region 명시적 형 변환
	// 연산이 이루어지기 전에 사용자가 직업 자료형을 변환하는 과정입니다.

	/*
	int a = 10;
	int b = 3;
	float c = (float)a / b;

	printf("c의 값 : %f\n", c);
	*/

	// 정수형 변수끼리 연산을 수행하게 되면 정수의 결과값만 가질 수 있습니다.
#pragma endregion

#pragma endregion


#pragma region 전처리기
	// 프로그램이 컴파일되기 전에 프로그램에 대한 사전 처리하는 과정입니다.

#pragma region 매크로
	// 프로그램 내에서 특정한 데이터가 문자열로 정의되고 처리되는 과정입니다.

	// printf("SIZE 변수의 값 : %d\n", SIZE);

	// 매크로의 경우 자료형이 존재하지 않으므로, 메모리 공간을 가지고 있지 않습니다.

	// 매크로의 과정은 컴파일 이전에 실행되며, 각 매크로가 실행될 때
	// 매크로의 대체 목록을 넣어야 하므로 프로그램의 크기가 커지게 됩니다.
#pragma endregion

	// printf("channel 변수의 값 : %d\n", channel);

	// 전처리기는 컴파일러가 아닌 선행처리기에 의해 처리되는 문장이기 때문에
	// 명령문 끝에 ";"를 붙이지 않습니다.
#pragma endregion

}


// 질문
// 명시적 형 변환 시 	float c = (float)a / b; 뒤에 f를 붙이지 않는 이유는?
// 굳이 변수를 사용하지 않고 define을 사용하는 이유? int SIZE = 5;나 const int SIZE = 5; 같은 경우와의 차이점?
// 헤더 library.h 파일을 이동시켰는데도 / program/library.h로 인식되는 이유는?
