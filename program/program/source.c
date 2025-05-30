#include <stdio.h>


void process()
{
	printf("Process...\n");

}


void stats(int health, const char* name)
{
	printf("health : %d\nname : %s\n\n", health, name);
}


void Swap(int left, int right)
{

	int temporary = right;
	right = left;
	left = temporary;

	printf("[after] a의 값 : %d, b의 값 : %d\n\n", left, right);

}

void Swap_pointer(int* left, int* right) 
{

	int temporary = *right;
	*right = *left;
	*left = temporary;

}


void main()
{
#pragma region 함수
	// 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 코드의 집합입니다.
	 
	// process();

#pragma region 매개 변수
	// 함수의 정의에서 전달받은 인수를 함수 내부로 전달하기 위해 사용하는 변수입니다.
	
	// stats(100, "Slime");
	// stats(30, "Skull");

	// 매개 변수는 함수 내부에서만 연산이 이루어지며,
	// 여러 개의 매개변수를 생성할 수 있습니다.
#pragma endregion


#pragma region 인수
	// 함수가 호출될 때 매개 변수에 실제로 전달되는 값입니다.

	printf("call by value\n\n"); // 값에 의한 호출

	int a = 5;
	int b = 10;

	printf("[before] a의 값 : %d, b의 값 : %d\n\n", a, b);

	Swap(a, b);


	//-------------------------------------------

	printf("call by reference\n\n"); // 참조에 의한 호출

	int x = 5;
	int y = 10;

	printf("[before] x의 값 : %d, y의 값 : %d\n\n", x, y);

	Swap_pointer(&x, &y);

	printf("[after] x의 값 : %d, y의 값 : %d\n\n", x, y);

	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion

	
	// 함수는 프로그램이 실행 중일때 함수 호출 위치에서 해당 함수로 이동시킨 뒤,
	// 작업을 수행하고 다시 원래 위치로 돌아오는 구조입니다.
#pragma endregion


}

//질문
//void stats(int health, const char* name)라는 코드에서 int 에는 const를 붙이지 않는 이유?