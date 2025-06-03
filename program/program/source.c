#include <stdio.h>
#include <stdlib.h>

int main()
{

#pragma region 동적 할당
	
	// int* pointer = malloc(4);
	
	// 프로그램을 실행 중에 필요한 만큼 메모리를 할당하는 작업입니다.

	// *pointer = 10;

	// printf("pointer가 가리키는 값 : %d\n\n", *pointer);

	// 동적 할당은 실행 시간애 가변적으로 메모리의 크기를 변경시킬 수 있으며,
	// 동적으로 메모리의 크기를 할당할 때 바이트 단위로 지정합니다.

	// free(pointer);

	// 동적으로 할당한 메모리는 합 영역에 보관되어 있으므로
	// 사용이 끝나면 직접 해제해주어야 합니다.

#pragma endregion

#pragma region 동적 배열
	
	/*
	pointer = malloc(sizeof(int)*3); // malloc(12)와 같음.

	for (int i = 0; i < 3; i++) {
		pointer[i] = (i + 1) * 10;
		printf("pointer[%d] = %d\n", i, pointer[i]);
	}

	free(pointer);
	*/

#pragma endregion

#pragma region UAF
	// UAF(Use After Free)는 메모리를 해제하고 다시 사용할 때 생기는 취약점 입니다.
	// 이미 free()로 해제된 메모리 영역을 계속 사용하게 되면 정의되지 않은 동작(Undefined Behavior)을 유발하며, 
	// 프로그램이 예기치 않게 동작하거나 보안 문제로 이어질 수 있습니다.

	int* a = malloc(sizeof(int));  // 동적 메모리 할당

	*a = 5;  // 메모리 사용

	printf("a의 값 : %d\n", *a);

	free(a);  // 메모리 해제

	printf("메모리 해제 후 접근: %d\n", *a);  // UAF 발생

#pragma endregion

	return 0;
}

/*
질문


*/