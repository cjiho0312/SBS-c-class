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

#pragma region ASCII code, Uni code

	// ASCII 코드(미국정보교환표준부호)는 영문 알파벳을 사용하는 대표적인 문자 인코딩 방식입니다.
	// c언어에서 char 자료형인 문자형은 숫자로 값을 저장하며,
	// 이후 아스키 코드를 이용해 문자로 변환하여 나타냅니다.

#pragma endregion


}