#include <stdio.h>

void main()
{
#pragma region 배열
	// 같은 자료형의 변수들로 이루어진 유한 집합입니다.

	/*
	int array[7]; // 아직 초기화 전이라 garbage 값들이 들어가있음.

	int size = sizeof (array) / sizeof (int); // array의 크기(28) / int의 크기(4)

	for (int i = 0; i < size; i++)
	{
		array[i] = (i + 1) * 10;
		printf("array[%d] = %d\n", i, array[i]);
	}
	*/

	// 배열의 경우 첫번째 원소는 0부터 시작합니다.

	/*

	int list[5] = { 1, 2, 3, 4, 5 };

	int* pointer = &list[0];

	* pointer = 99;

	printf("list[0]의 값 : %d\n\n", list[0]);

	pointer += 1; // pointer = pointer + 1, list[1]을 가리키게 됨

	printf("pointer가 가리키는 값 : %d\n", *pointer);
	printf("pointer 값 : %p\n", pointer);
	printf("list[1]의 주소 값 : %p\n", &list[1]);

	*/


	// 배열은 원하는 원소에 원하는 값을 저장할 수 있으며
	// 배열의 크기는 컴파일이 되는 시점부터 고정된 메모리 공간을 가지게 됩니다.


	// float container[ ] = { 10.0f, 12.5f, 15.0f }


	// 배열의 크기는 생략할 수 있으며, 초기화 목록에서 설정한 요소에 따라
	// 배열의 크기가 결정됩니다.
#pragma endregion

#pragma region 문자열
	// 연속적인 메모리 공간에 저장된 문자 변수의 집합입니다.


	// const char * word = "Game";

	// printf("word의 문자열 : %s\n", word);


	// 문자열의 경우 포인터를 이용하여 문자열 상수를 가리키도록 할 수 있으며,
	// 문자열 상수는 데이터 영역에 읽기 전용 공간에 저장되기 때문에
	// 문자열의 값을 변경할 수 없습니다.


	// word = "Overwat\0ch"; // \0 (null)이 나오면 문자열이 끝납니다.

	// printf("word의 문자열 : %s\n", word);


	// 문자열의 공백도 함께 메모리 공간에 포함하여 크기가 결정되며,
	// 마지막에 문자열의 끝을 알려주는 제어 문자가 추가됩니다.

	/*
	char name[] = "CJiho";
	printf("name 배열의 값 : %s\n", name);

	name[0] = 'T';
	printf("name 배열의 값 : %s\n", name);

	// name = "school"; // 새로운 주소를 넣는 것은 불가능, 포인터 상수.
	*/


	// 문자열을 저장하게 되면 맨 마지막에 무효의 문자까지 메모리 공간에 저장됩니다.

#pragma endregion

#pragma region (2)차원 배열
	// 배열의 요소로 또다른 배열을 가지는 배열입니다.
	// 자료형 변수 [열][행] {{열과 행에 입력할 값}
	// 열과 행에 값을 입력할 때 ","를 붙여야 하며, 마지막에 세미콜론을 붙여줘야 합니다.

	/*
	int array[3][3] =
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 },
		{ 7, 8, 9 },
	};


	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	*/

	// 2차원 배열은 행과 열로 구분되며,
	// 앞에 있는 배열은 열을 의미하고,
	// 뒤에 있는 배열은 행을 의미합니다.
#pragma endregion


#pragma region ASCII code / Uni code


#pragma region  ASCII code
	// 아스키 코드란 ANSI(미국표준협회)에서 제시한 표준 코드 체계이며,
	// 영어, 알파벳, 숫자, 기호만 표현할 수 있습니다.

	// 7비트, 즉 0부터 127까지 총 128개의 문자만 표현 가능합니다.
	// 8비트를 모두 활용하는 방식으로 확장한 "확장 아스키"도 존재합니다.

	// printf("아스키코드 A를 문자로 표현 : %c\n", 'A'); // A 출력
	// printf("아스키코드 A를 숫자로 표현 : %d\n\n", 'A'); // 65 출력

	// c언어에서 char 자료형인 문자형은 숫자로 값을 저장하며,
	// 이후 아스키 코드를 이용해 문자로 변환하여 나타냅니다.
#pragma endregion

#pragma region Unicode
	// 유니코드는 전 세계의 문자를 표현하기 위한 국제 표준 문자 인코딩 방식입니다.
	// 유니코드는 각 문자에 고유한 번호(코드 포인트)를 부여하여,
	// 다양한 언어의 문자를 컴퓨터에서 일관되게 표현하고 처리할 수 있도록 합니다.

	// printf("유니코드(가) : \uAC00\n"); // "가" 출력
	// printf("유니코드(거) : \uAC70\n"); // "거" 출력
#pragma endregion

#pragma endregion


}

// 질문
// 보통 {} 뒤에는 ;를 붙이지 않는데 (for문 등), 왜 2차원 배열의 끝에는 ;를 붙이는가?