#include <stdio.h>
#include <math.h>


struct Card
{
	char grade; // 1byte

	double attack; // 8byte

	int health; // 4byte

	// ����ü�� ũ��� ����ü�� �����ϴ� ��� �߿��� ũ�Ⱑ ���� ū �ڷ����� ����� �ǵ��� �����մϴ�.
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
} enemy; // ����ü ��Ī�� enemy�� ����


int main()
{
#pragma region ����ü
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ����
	// �ϳ��� ��ü�� �����ϴ� ���Դϴ�.

	// struct Card card = { 'C', 20, 7.5 };

	// ����ü�� �� ����� ����ü ���𿡼� ��Ÿ���� ������� �ʱ�ȭ�ؾ� �ϸ�,
	// �� ������ ���ʿ��� ���������� �̾����ϴ�.

	// printf("Grage : %c\nHealth : %d\nAttack : %.1lf\n\n", card.grade, card.health, card.attack);

	// card.grade = 'A';
	// card.health = 50;
	// card.attack = 10.8;

	// printf("Grage : %c\nHealth : %d\nAttack : %.1lf\n", card.grade, card.health, card.attack);

	// ����ü�� �����ϱ� ���� ����ü�� �޸� ������ �������� �����Ƿ�,
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ �� �� �����ϴ�.
#pragma endregion

#pragma region ����Ʈ �е�
	// ��� ������ �޸𸮿��� CPU�� ���� �� �� ���� ���� �� �ֵ���
	// �����Ϸ��� ���������� ��Ͽ� ���߾� ����Ʈ�� �е����ִ� ����ȭ �۾��Դϴ�.

	// printf("Card ����ü�� ũ�� : %d\n", sizeof(struct Card)); // 16byte

	// ����ü ũ���� ��� ��� ������ ������ ���� �޸� ũ�Ⱑ �ٸ��� ������ �� ������,
	// ����ü ũ�⸦ �����ϴ� ���´� �⺻ �ڷ������θ� �����˴ϴ�.
	// ���� ũ�Ⱑ ū �ڷ����� ������ �� �Ʒ��� ��ġ���Ѿ� �޸𸮸� �Ƴ� �� �����ϴ�.
#pragma endregion

#pragma region �� �� ������ �Ÿ�

	// sqrt(100);
	// printf("sqrt 100 : %lf\n", sqrt(100)); // ��Ʈ 100
	// printf("pow(2,3): %lf\n", pow(2, 3)); // 2�� 3��

	/*
	struct coordinate player = { 7, 3 };
	struct coordinate enemy = { 8, 4 };

	double distance = sqrt (pow((enemy.x - player.x), 2) + (pow((enemy.y - player.y), 2))) ; // �� �� ������ �Ÿ� ���


	if (distance > 3.0)
	{
		printf("moving...");
	}

	if (distance <= 3.0) // Ȥ�� else�� ��� ��.
	{
		printf("attack mode");
	}
	*/

#pragma endregion

#pragma region �ڱ� ���� ����ü
	// �ڱ� �ڽŰ� ���� Ÿ���� �����͸� ����� ǥ���ϰ� �ִ� ����ü�Դϴ�.

	/*
	-ù ��° ���-

	struct Node node = { 10 };

	for (int i = 1; i < 4; i++)
	{
		printf("node%d : %d\n", i, node.data);
		node.data = node.data + 10;
	}
	*/

	/*
	-�� ��° ���-

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
		printf("node%d�� data �� : %d\n", i++, currentNode->data);
		currentNode = currentNode->next;
	}
	*/

#pragma endregion

#pragma region typedef
	// ������ �ڷ����� ���Ӱ� ��Ī�� �ο��� �� ����մϴ�.

	// struct �տ� typedef�� �����ϰ� ������ �ڿ� ���ο� ��Ī�� �߰��� �������ָ�
	// ����ü ������ ������ �� struct�� ������ �ʾƵ� �˴ϴ�.

/*
enemy slime;

slime.health = 20;
slime.attack = 5.2;

printf("ü�� : %d\n", slime.health);
printf("���ݷ� : %lf\n", slime.attack);
*/

#pragma endregion


	return 0;
}

//����
/*
Q. struct Node *next;�� ������ ���ϴ� �Ű�, �� �� �ִ� ����?


*/