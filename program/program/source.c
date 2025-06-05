#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Shuffle(int array[ ], int size) // (변수, size)
{

	for (int i = 0; i < size; i++)
	{
	    int seed = rand() % size;

		int temporary = array[seed];

		array[seed] = array[i];

		array[i] = temporary;
	}

}

int main()
{
#pragma region 의사 난수
	// rand() : 0-32767 사이의 난수의 값을 반환하는 함수입니다.

	// time(NULL) : 1970년 1월 1일 (00:00:00) UTC 이후에 지난 초(second)를 반환하는 함수입니다.

	// srand : 난수 생성기의 시드를 설정하는 함수입니다.

	/*
	srand(time(NULL));
	
	int index = rand() % 10; // 랜덤한 값이 0-10 사이를 나타내도록 함.

	if (index == 0)
	{
		index + 1;
		printf("random value : %d", index);
	}
	else
	{
		printf("random value : %d", index);
	}
	*/

#pragma endregion


#pragma region 셔플 함수
	
	/*
	srand(time(NULL));

	int list[10] = {1,2,3,4,5,6,7,8,9,10};

	int size = sizeof(list) / sizeof(int);

	Shuffle(list, size);

	for (int i = 0; i < size; i++) 
	{
		printf("list[%d] : %d\n", i, list[i]);
	}
	*/

#pragma endregion


#pragma region 업다운 게임 예제
	// 플레이어는 목숨 5개, 컴퓨터는 1-50 중 랜덤한 값을 지정, 플레이어는 숫자를 예측하고, 틀리면 힌트 제공. 빅토리/디피트 출력 

	/*
	srand(time(NULL));

	int num = rand() % 50; // 컴퓨터가 지정한 숫자
	int player = 0; // 플레이어가 예측한 숫자
	int health = 5; // 플레이어 체력

	if (num == 0) // 값이 0이 지정됐을 때
	{
		num += 1;
	}

	// printf("(컴퓨터가 지정한 숫자 : %d)\n\n", num); // 결과 미리 확인용

	printf("***숫자 맞추기 게임 START****\n\n");

	while (health > 0)
	{
		printf("현재 체력 : ");

		for (int i = 0; i < health; i++) // health 하트 출력
		{
	    printf("\u2661");
		}
		printf("\n\n");

		printf("숫자(1~50)를 입력하세요.\n\n");

		scanf_s("%d", &player); // 플레이어에게서 값을 입력받음

		if (player < num)
		{
			printf("\n컴퓨터가 가지고 있는 값보다 작습니다.\n\n");
			health -= 1;
		}

		if (player > num)
		{
			printf("\n컴퓨터가 가지고 있는 값보다 큽니다.\n\n");
			health -= 1;
		}

		if (player == num)
		{
			printf("\n\nV I C T O R Y\n\n");
			break; // 반복문 탈출
		}
	}

	if (health <= 0) // 체력이 0이 되었을 때
	{
	printf("체력이 모두 소모되었습니다.\n");
	printf("\n\nD E F E A T\n\n\n");
	printf("컴퓨터가 지정한 숫자 : %d", num); // 정답 알려주기
	}
	*/

#pragma endregion


#pragma region 열거형
// 이론, 예제
#pragma endregion


	return 0;
}
