#include <stdio.h>
#include <stdlib.h>

int main()
{

#pragma region ���� �Ҵ�
	
	int* pointer = malloc(4);
	
	// ���α׷��� ���� �߿� �ʿ��� ��ŭ �޸𸮸� �Ҵ��ϴ� �۾��Դϴ�.

	*pointer = 10;

	printf("pointer�� ����Ű�� �� : %d\n\n", *pointer);

	// ���� �Ҵ��� ���� �ð��� ���������� �޸��� ũ�⸦ �����ų �� ������,
	// �������� �޸��� ũ�⸦ �Ҵ��� �� ����Ʈ ������ �����մϴ�.

	free(pointer);

	// �������� �Ҵ��� �޸𸮴� �� ������ �����Ǿ� �����Ƿ�
	// ����� ������ ���� �������־�� �մϴ�.

#pragma endregion

#pragma region ���� �迭
	
	pointer = malloc(sizeof(int)*3); // malloc(12)�� ����.

	for (int i = 0; i < 3; i++) {
		pointer[i] = (i + 1) * 10;
		printf("pointer[%d] = %d\n", i, pointer[i]);
	}

	free(pointer);

#pragma endregion

#pragma region UAF
	// �̷�, �ǽ�����
	// UFA(Use After Free)�� �޸𸮸� �����ϰ� �ٽ� ����� �� ����� ����� �Դϴ�.



#pragma endregion

	return 0;
}

/*
����


*/