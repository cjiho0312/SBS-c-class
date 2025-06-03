#include <stdio.h>
#include <stdarg.h>


void process() // 함수 part
{
	printf("Process...\n");

}

void stats(int health, const char* name) // 매개 변수 part
{
	printf("health : %d\nname : %s\n\n", health, name);
}

void Swap(int left, int right) // 인수 part
{

	int temporary = right;
	right = left;
	left = temporary;

	printf("[after] a의 값 : %d, b의 값 : %d\n\n", left, right);

}

void Swap_pointer(int* left, int* right) // 인수 part
{

	int temporary = *right;
	*right = *left;
	*left = temporary;

}

void Recursion(int count) // 재귀 함수 part
{
	if (count <= 0)
	{
		return;
	}

	printf("Recursion\n");

	Recursion(count - 1);
}

inline void Collision() //인라인 함수 part
{
	printf("Collision\n");
}

void Average(int count, ...) // 가변 인수 목록 part
{
	// va_list : 가변 인수의 메모리 주소를 저장하는 포인터 변수입니다.

	va_list pointer;

	// va_start : 가변 인수를 가져올 수 있도록 포인터를 설정해주는 함수입니다.

	va_start(pointer, count);

	double sum = 0.0f;

	// va_arg : 가변 인수 포인터에서 특정 자료형의 크기만큼 값을 가져오는 함수입니다.

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = sum / count;

	printf("average : %lf\n", average);

	// va_end : 가변 인수가 끝났을 때 포인터를 NULL로 초기화하는 함수입니다.
	va_end(pointer);
}

void Provide() // 함수 포인터 part
{
	printf("Provide\n");
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


	/*
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
	*/


	// 인수의 경우 값을 전달하는 인수와 값을 전달받는 매개 변수의
	// 자료형이 서로 일치해야 합니다.
#pragma endregion


#pragma region 재귀 함수
	// 어떤 함수에서 자신을 다시 호출하여 작업을 수행하는 함수입니다.

	// Recursion(3);

	// return; -> 함수를 종료하고 main 함수로 복귀합니다.
#pragma endregion


#pragma region 인라인 함수
	// 함수를 호출하는 대신 함수가 호출되는 위치마다
	// 함수의 코드를 복사하여 전달하는 방식의 함수입니다.

	// 오버헤드를 줄이고자, 짧은 함수를 사용할 때 최적화 용도로 사용됩니다.
	// 오버헤드 : 프로그램이 실행되는 중에 다른 위치의 코드를 실행시켜야 할 때,
	// 간접적으로 시간, 메모리, 자원 등이 사용되는 현상

	// Collision();

	// 인라인 함수는 함수를 호출하는 과정이 없으므로 처리 속도가 빠르지만,
	// 인라인 함수를 많이 사용하게 되면 함수의 코드가 복사되기 때문에
	// 실행 파일의 크기가 커지게 됩니다.
#pragma endregion


#pragma region 가변 인수 목록
	// 고정되어 있는 매개 변수 외에 개수가 정해지지 않은 인수를 추가로 받을 수 있는 인수입니다.

	// Average(5, 10, 20, 30, 40, 50);

	// stdarg.h 헤더를 가져와야 사용할 수 있습니다.
#pragma endregion


#pragma region 함수 포인터
	// 함수의 주소 값을 저장하고 가리킬 수 있는 포인터 변수입니다.

	/*
	void (*functionPointer) ();

	functionPointer = Provide;

	functionPointer();
	*/

	// 자료형(*변수 이름) (자료형 매개변수, 자료형 매개변수) <- 매개변수는 없으면 안 적어도 됩니다.
#pragma endregion


	// 함수는 프로그램이 실행 중일때 함수 호출 위치에서 해당 함수로 이동시킨 뒤,
	// 작업을 수행하고 다시 원래 위치로 돌아오는 구조입니다.
#pragma endregion


}

//질문
// Q. void stats(int health, const char* name)라는 코드에서 int 에는 const를 붙이지 않는 이유?
// A. const char* name은 문자열 상수의 주소를 가리키는 포인터임. 문자열이 변경되지 않도록 const를 붙여 "읽기 전용"으로 만든 거고.
// 반면 int health는 값 그 자체를 복사해온 거라, 함수 내에서 health = 0;을 하더라도 원래 값엔 영향을 안 줌.
// 이 값은 함수 내에서만 쓰이기 때문에 const를 안 붙여도 안전함.
// 
// Q. Recursion(count-1); 를 Recursion(count--); 로 하면 오류가 나는 이유는?
// A. count--는 후위 연산자이기 때문에 해당 함수에서는 그대로의 값으로 계산하고, 그 다음 계산에서 -1이 되는 것.
// 즉, 이 재귀 함수 내에서는 '그 다음 계산'이 없고 단순히 안에 있는 계산으로 취급하기 때문임. 그래서 무한히 반복되는 것.
// 
// A. 재귀함수(Recursion(0))에서 return 시 이미 실행된 함수는 다시 넘어가서 첫 호출자 함수로 넘어가게 되는데,
// 이때 실행된 함수는 그냥 넘어가게 되는 매커니즘이 뭐야? count = 0의 값이 저장되어서 Recursion(2),(1),(0) 의 함수 실행이 안 되는 건지,
// 아니면 실행됐던 함수이기 때문에 그냥 돌아가는 건지 모르겠어.
// Q. 이미 실행된 함수이기 때문임. return 후 호출자 함수로 돌아가게 되면, 그 아래에 진행할 명령이 더이상 존재하지 않기 때문에 또 자동으로 return 됨.
// 즉, 각 함수는 자신의 Recursion 호출이 끝날 때까지 대기 상태다가 return 시 차례로 종료됨.

// 가변 인수 목록에서 sum += va_arg(pointer, int); 부분이 이해가 안가. 단순히 저 문장만 반복되는데 왜 각 다른 숫자가 나오는 거야?
// va_arg는 호출할 때마다 다음 인수로 pointer를 자동 이동시켜, 그래서 단순 반복문만 사용해도 각 다른 숫자를 꺼낼 수 있음.

// 함수 포인터의 구조가 이해가 안 가. 친절하게 설명해줘.
// 