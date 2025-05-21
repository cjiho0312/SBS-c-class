#include <stdio.h>

void main()
{

#pragma region 자료형
	// 데이터를 저장하기 위해 데이터의 형태를 정해주는 것입니다.

	// 자료형은 각각의 자료형마다 크기가 정해져 있으며
	// 자료형의 크기는 바이트 단위로 이루어집니다.

	// 자료형의 경우 자료형에 따라 저장할 수 있는
	// 종류와 범위가 결정됩니다.
#pragma endregion



#pragma region 변수
	// 데이터를 저장할 수 있는 메모리 공간을
	// 생성하는 것입니다.

	// char alphabet = 'A';

	// int integer = 100;

	// float decimal = 36.5f;

	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);


	//변수는 프로그램이 실행되는 동안 값을 바꿀 수 있으며.
	//원래 저장되어 있는 값은 새로 저장된 값에 의해 지워집니다.

	// alphabet = 'B';
	// integer = 200;
	// decimal = 72.5f;
	// 
	// printf("alphabet 변수의 값 : %c\n", alphabet);
	// printf("integer 변수의 값 : %d\n", integer);
	// printf("decimal 변수의 값 : %f\n", decimal);


	// 변수의 메모리 공간은 프로그램이 실행될 때마다 바뀝니다.
#pragma endregion



#pragma region 네이밍 컨벤션


	// 네이밍 컨벤션
	// camel 표기법 : under Score 변수
	// pascal 표기법 : Attack() 함수
	// snake 표기법 : MAX_SIZE 매크로


#pragma endregion



#pragma region 변수의 이름 규칙

	// 1. 변수의 이름은 대문자와 소문자를 구별하여 사용할 수 있습니다.
	// ex) int score = 100;
	// int Score = 200;

	// 2. 변수의 이름으로 예약어를 사용할 수 없습니다.
	// ex) int int = 10;

	// 3. 변수의 이름에 공백이 들어갈 수 없습니다.
	// ex) int my score = 100;

	// 4. 변수의 이름으로 특수 기호는 "_"와 "$"만 사용할 수 있습니다.
	// ex) int my@score = 100;

	// 5. 변수의 이름은 숫자로 시작할 수 없습니다.
	// ex) int 5day = 5;


#pragma endregion



#pragma region 상수

	//프로그램 실행 중에 더 이상 값이 변경되지 않는 메모리입니다.

	// const float pi = 3.14f;

	// pi = 458.55f;

	// 상수의 경우 메모리 공간을 가지고 있지 않는 상수를 리터럴 상수라고 하며,
	// 메모리 공간을 가지고 있는 상수를 심볼릭 상수라고 합니다.
	// 심볼릭 상수 : pi
	// 리터럴 상수 : 3.14f

#pragma endregion



#pragma region 산술연산자

	// 1. 변수 = 변수 + 리터럴 상수

//int a = 10;
//int b = a + 5;
//printf("b의 값 : %d\n", b);


	// 2. 변수 = 리터럴 상수 - 심볼릭 상수

//const int t = 7;
//int c = 20 - t;
//printf("c의 값 : %d\n", c);

	// 3. 변수 = 변수 * 심볼릭 상수

//int d = a * t;
//printf("d의 값 : %d\n", d);

	// 4. 변수 = 변수 / 리터럴 상수

//int e = d / 2;
//printf("e의 값 : %d\n", e);

	// 5. 변수 = 리터럴 상수 % 리터럴 상수

//int f = 10 % 3;
//printf("f의 값 : %d\n", f);

//int max = b + c + d + e + f;
//printf("모든 값의 합계 : %d\n", max);


#pragma endregion







}