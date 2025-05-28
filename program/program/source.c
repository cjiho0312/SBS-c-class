#include <stdio.h>

void main()
{
#pragma region 주소 연산자
	// 변수의 주소 값을 반환하는 연산자입니다.
	// 주소 연산자는 "&" 기호를 사용합니다.

	/*
	int data = 10;

	printf("data 변수의 주소 : %p\n", &data);
	*/

	// 데어터의 주소 값은 해당 데이터가 저장된 메모리의 시작 주소를 의미합니다.
#pragma endregion

#pragma region scanf_s 함수
	// 표준 입력함수로, 여러 종류의 데이터를 다양한 서식에 맞추어 입력해주는 함수입니다.
	// scanf_s("%d", &변수)

	/*
	
	int a = 0;

	printf("변수 a의 값을 설정하세요.\n");

	// 표준 입력 함수는 입력을 수행할 때까지 작업으로 넘어갈 수 없습니다.

	scanf_s("%d", &a);

	// 버퍼는 데이터가 이동할 때 임시로 저장되는 공간이며,
	// 형식 지정자에 따라 입력할 수 있는 데이터의 범위도 결정됩니다.

	printf("a의 값 : %d", a);

	*/

	// 표준 입력 함수로 데이터를 입력하게 되면 버퍼에 데이터를 보관하였다가
	// 입력하는 순간 버퍼 안의 내용을 프로그램에 전송합니다.
#pragma endregion

#pragma region 포인터
	//메모리의 주소값을 저장할 수 있는 변수입니다.
	// 자료형 * 변수;
	
	/*
	int a = 10;

	int * pointer = &a; // a 변수의 주소 값을 저장합니다.

	printf("a의 주소 : %p\n", &a);
	printf("pointer의 값 : %p\n", pointer);
	

	// 포인터 변수도 자신의 메모리 공간을 가지고 있으며,
	// 포인터 변수에 변수의 시작 주소릏 저장하게 되면
	// 해당 변수의 시작 주소를 가리키게 됩니다.

	int packet = 10;
	int* pointer = &packet;

	*pointer = 99;


	printf("packet 변수의 값 : %d\n", packet);
	printf("pointer가 가리키는 값 : %d\n", *pointer);

	// 포인터 변수는 포인터가 가리키는 메모리 공간의 자료형은 알 수 없으므로,
	// 포인터가 가리키는 메모리의 자료형을 선언해주어야 합니다.

	int storage = 10;
	pointer = &storage;

	*pointer = 20;


	printf("storage의 주소 : %p\n", &storage);
	printf("pointer의 값 : %p\n", pointer);

	printf("pointer 변수의 크기 : %u\n", sizeof(pointer));
	*/

	// 포인터 변수의 크기는 중앙 처리 장치가 한 번에 처리할 수 있는 크기로 정해지며,
	// 한 번에 처리할 수 있는 크기는 운영체제에 따라 크기가 결정됩니다.

#pragma endregion

#pragma region 상수 지시 포인터
	// 포인터가 가리키는 주소에 저장되어있는 값을 변경할 수 없도록 지정되어있는 포인터입니다.
	// const 자료형 * 변수 (여기서 const 자료형만 상수화 되고, 변수는 상수화 되지 않는다.)

	/*
	int height = 10;
	int width = 20;

	printf("height 변수의 값 : %d\n", height);
	printf("width 변수의 값 : %d\n\n", width);

	const int* constPointer = &height;

	printf("height의 주소 : %p\n", &height);
	printf("constPointer의 값 : %p\n", constPointer);
	printf("constPointer가 가르키는 값 : %d\n\n", *constPointer);

	constPointer = &width;

	printf("width의 주소 : %p\n", width);
	printf("constPointer의 값 : %p\n", constPointer);
	printf("constPointer가 가르키는 값 : %d\n\n", *constPointer);
	*/

#pragma endregion

#pragma region 포인터 상수
// 포인터 변수가 가리키고 있는 주소 값을 변경할 수 없도록 지정되어 있는 포인터입니다.
// 자료형 * const 변수 (const 변수가 상수화됩니다.)

/*
int a = 10;
int b = 20;

int* const pointer = &a;

printf("a의 값 : %d\n", a);
printf("pointer가 가리키는 값 : %d\n", *pointer);
printf("pointer의 값 : %p\n\n", pointer);

*pointer = 99;

printf("a의 값 : %d\n", a);
printf("pointer가 가리키는 값 : %d\n", *pointer);
printf("pointer의 값 : %p\n", pointer);
*/

//pointer = &b;



#pragma endregion

#pragma region 범용 포인터
// 자료형이 정해지지 않은 상태로 모든 자료형을 저장할 수 있는 포인터입니다.

char ch ='A';
int in = 13;
float fo = 5.3f;

void * box = &ch;
*(char *)box = 'B';

box = &in;
*(int*)box = 20;

box = &fo;
*(float*)box = 7.5f;

printf("ch 변수의 값 : %c\n", ch);
printf("in 변수의 값 : %d\n", in);
printf("fo 변수의 값 : %f\n", fo);


// 범용 포인터는 메모리 주소에 접근해서 값을 변경할 수 없으므로
// 범용 포인터가 가리키는 변수의 자료형으로 변환해주어야 합니다.
#pragma endregion


}

//질문
// 주소값이 매번 실행될 때마다 바뀌는 이유는 무엇인가요?