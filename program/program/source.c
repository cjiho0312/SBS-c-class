#include <stdio.h>

void main()
{
#pragma region 대입 연산자

	//대입 연산자는 변수에 값을 대입하는 연산자입니다.

	int a = 10;
	int b;
	printf("b = a : %d\n", b = a);
	printf("b += a : %d\n", b += a);
	printf("b -= a : %d\n", b -= a);


#pragma endregion

}