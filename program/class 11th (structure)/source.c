#include <stdio.h>
#include <math.h>


struct Card
{
	char grade; // 1byte

	double attack; // 8byte

	int health; // 4byte

	// 구조체의 크기는 구조체를 구성하는 멤버 중에서 크기가 가장 큰 자료형의 배수가 되도록 설정합니다.
};


struct coordinate
{
	double x;
	double y;
};


struct Node
{
	int data;

	struct Node* next;

};

typedef struct Enemy
{
	int health;
	double attack;
} enemy; // 구조체 별칭을 enemy로 정의


int main()
{
#pragma region 구조체
	// 여러 개의 변수를 하나의 집합으로 구조화한 다음
	// 하나의 객체를 생성하는 것입니다.

	// struct Card card = { 'C', 20, 7.5 };

	// 구조체의 각 멤버는 구조체 선언에서 나타나는 순서대로 초기화해야 하며,
	// 이 순서는 왼쪽에서 오른쪽으로 이어집니다.

	// printf("Grage : %c\nHealth : %d\nAttack : %.1lf\n\n", card.grade, card.health, card.attack);

	// card.grade = 'A';
	// card.health = 50;
	// card.attack = 10.8;

	// printf("Grage : %c\nHealth : %d\nAttack : %.1lf\n", card.grade, card.health, card.attack);

	// 구조체를 선언하기 전에 구조체는 메모리 공간이 생성되지 않으므로,
	// 구조체 내부에 있는 데이터를 초기화 할 수 없습니다.
#pragma endregion

#pragma region 바이트 패딩
	// 멤버 변수를 메모리에서 CPU로 읽을 때 한 번에 읽을 수 있도록
	// 컴파일러가 레지스터의 블록에 맞추어 바이트를 패딩해주는 최적화 작업입니다.

	// printf("Card 구조체의 크기 : %d\n", sizeof(struct Card)); // 16byte

	// 구조체 크기의 경우 멤버 변수의 순서에 따라 메모리 크기가 다르게 설정될 수 있으며,
	// 구조체 크기를 결정하는 형태는 기본 자료형으로만 구성됩니다.
	// 가장 크기가 큰 자료형의 변수를 맨 아래에 위치시켜야 메모리를 아낄 수 었습니다.
#pragma endregion

#pragma region 두 점 사이의 거리

	// sqrt(100);
	// printf("sqrt 100 : %lf\n", sqrt(100)); // 루트 100
	// printf("pow(2,3): %lf\n", pow(2, 3)); // 2의 3승

	/*
	struct coordinate player = { 7, 3 };
	struct coordinate enemy = { 8, 4 };

	double distance = sqrt (pow((enemy.x - player.x), 2) + (pow((enemy.y - player.y), 2))) ; // 두 점 사이의 거리 계산


	if (distance > 3.0)
	{
		printf("moving...");
	}

	if (distance <= 3.0) // 혹은 else만 적어도 됨.
	{
		printf("attack mode");
	}
	*/

#pragma endregion

#pragma region 자기 참조 구조체
	// 자기 자신과 같은 타입의 포인터를 멤버로 표현하고 있는 구조체입니다.

	/*
	-첫 번째 방법-

	struct Node node = { 10 };

	for (int i = 1; i < 4; i++)
	{
		printf("node%d : %d\n", i, node.data);
		node.data = node.data + 10;
	}
	*/

	/*
	-두 번째 방법-

	struct Node node1 = { 10, NULL };
	struct Node node2 = { 20, NULL };
	struct Node node3 = { 30, NULL };

	node1.next = &node2;
	node2.next = &node3;
	node3.next = NULL;

	struct Node* currentNode = &node1;

	int i = 1;

	while (currentNode != NULL)
	{
		printf("node%d의 data 값 : %d\n", i++, currentNode->data);
		currentNode = currentNode->next;
	}
	*/

#pragma endregion

#pragma region typedef
	// 기존의 자료형에 새롭게 별칭을 부여할 때 사용합니다.

	// struct 앞에 typedef을 선언하고 정의한 뒤에 새로운 별칭을 추가로 선언해주면
	// 구조체 변수를 선언할 때 struct를 붙이지 않아도 됩니다.

/*
enemy slime;

slime.health = 20;
slime.attack = 5.2;

printf("체력 : %d\n", slime.health);
printf("공격력 : %lf\n", slime.attack);
*/

#pragma endregion


	return 0;
}

//질문
/*
Q. struct Node *next;가 무엇을 뜻하는 거고, 왜 들어가 있는 건지?


*/