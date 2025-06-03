#include <stdio.h>


int stage = 1;

void SetStage(int count)
{
	stage = count;
}

void Increase()
{
	static int score = 0; // static이 없을 경우 지역변수, 즉 값이 누적되지 않고 함수가 실행될 때마다 계속 초기화 됩니다.

	score++;

	printf("score : %d\n", score);
}


int main()
{
#pragma region 메모리 영역

#pragma region CODE 영역
	// 프로그램을 실행하기 위해 필요한 코드가 저장되는 영역으로
	// 함수의 주수와 상수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region DATA 영역
	// 프로그램의 시작과 함께 메모리에 저장되며, 프로그램이 종료될 때 메모리가 해제되고,
	// 초기화가 이루어진 전역 변수와 정적 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region BSS 영역
	// 프로그램이 실행될 때 초기화가 이루어지지 않은 전역 변수와 정적 변수가
	// 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region STACK 영역
	// 프로그램이 자동으로 사용하는 임시 메모리 영역으로
	// 함수 호출 시 생성되는 지역 변수와 매개 변수가 저장되는 메모리 영역입니다.
#pragma endregion

#pragma region HEAP 영역
	// 사용자가 직접 메모리 공간을 저장해주는 메모리 영역이며,
	// 사용하지 않는 경우 사용자가 직접 메모리를 헤제해야 하는 메모리 영역입니다.
#pragma endregion

#pragma endregion

#pragma region 변수의 범위

#pragma region 지역 변수
	// 함수 내부에서 선언된 변수로 함수 내부에서만 접근할 수 있으며,
	// "함수가 종료되었을 때" 메모리에서 사라지는 특징을 가지고 있는 변수입니다.

	/*
	int x = 10;
	{
		int x = 20;
		printf("%d\n", x); // 현재 블록에서의 x는 20
	}
	printf("%d\n", x); // 현재 블록에서의 x는 10
	*/

	//지역 변수는 선언과 동시에 초기화하지 않으면 이전에 메모리 위치에 존재했던 값(garbage 값)을 가지게 됩니다.
#pragma endregion

#pragma region 전역 변수
	// 함수 외부에서 선언된 변수로 프로그램이 실행될 때 메모리에 올라가게 되며,
	// "프로그램이 종료되면" 메모리에서 해제되는 변수입니다.

	// SetStage(3);

	// printf("stage의 값 : %d\n", stage);

	// 전역 변수는 선언과 동시에 초기화가 되어 있지 않으면 자동으로 초기화됩니다.
#pragma endregion

#pragma region 정적 변수
	// 프로그램이 실행되는 동안 메모리에 존재하며, 선언된 범위 내에서만
	// 접근이 가능한 특징을 가지고 있는 변수입니다.


	// Increase();
	// Increase();
	// Increase();


	// 정적 변수는 단 한 번만 초기화가 이루어집니다.
#pragma endregion


#pragma endregion


	return 0;
}

/*
질문

Q. int main과 void main의 차이가 뭔지, return 0;은 int main 블록 내에서 어떤 역할을 하는지?

Q. 지역 변수를 쓸 때, 블록 단위로 나누어 지는 것인지? 저번에 for 문을 쓸 때에는 for 블록 내부가 아닌 외부에서 선언된 지역변수도 for문 안에서 값이 잘 전달됨. 이유가 뭔지?

*/