#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void Shuffle(int array[ ], int size) // (����, size)
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
#pragma region �ǻ� ����
	// rand() : 0-32767 ������ ������ ���� ��ȯ�ϴ� �Լ��Դϴ�.

	// time(NULL) : 1970�� 1�� 1�� (00:00:00) UTC ���Ŀ� ���� ��(second)�� ��ȯ�ϴ� �Լ��Դϴ�.

	// srand : ���� �������� �õ带 �����ϴ� �Լ��Դϴ�.

	/*
	srand(time(NULL));
	
	int index = rand() % 10; // ������ ���� 0-10 ���̸� ��Ÿ������ ��.

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


#pragma region ���� �Լ�
	
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


#pragma region ���ٿ� ���� ����
	// �÷��̾�� ��� 5��, ��ǻ�ʹ� 1-50 �� ������ ���� ����, �÷��̾�� ���ڸ� �����ϰ�, Ʋ���� ��Ʈ ����. ���丮/����Ʈ ��� 

	/*
	srand(time(NULL));

	int num = rand() % 50; // ��ǻ�Ͱ� ������ ����
	int player = 0; // �÷��̾ ������ ����
	int health = 5; // �÷��̾� ü��

	if (num == 0) // ���� 0�� �������� ��
	{
		num += 1;
	}

	// printf("(��ǻ�Ͱ� ������ ���� : %d)\n\n", num); // ��� �̸� Ȯ�ο�

	printf("***���� ���߱� ���� START****\n\n");

	while (health > 0)
	{
		printf("���� ü�� : ");

		for (int i = 0; i < health; i++) // health ��Ʈ ���
		{
	    printf("\u2661");
		}
		printf("\n\n");

		printf("����(1~50)�� �Է��ϼ���.\n\n");

		scanf_s("%d", &player); // �÷��̾�Լ� ���� �Է¹���

		if (player < num)
		{
			printf("\n��ǻ�Ͱ� ������ �ִ� ������ �۽��ϴ�.\n\n");
			health -= 1;
		}

		if (player > num)
		{
			printf("\n��ǻ�Ͱ� ������ �ִ� ������ Ů�ϴ�.\n\n");
			health -= 1;
		}

		if (player == num)
		{
			printf("\n\nV I C T O R Y\n\n");
			break; // �ݺ��� Ż��
		}
	}

	if (health <= 0) // ü���� 0�� �Ǿ��� ��
	{
	printf("ü���� ��� �Ҹ�Ǿ����ϴ�.\n");
	printf("\n\nD E F E A T\n\n\n");
	printf("��ǻ�Ͱ� ������ ���� : %d", num); // ���� �˷��ֱ�
	}
	*/

#pragma endregion


#pragma region ������
// �̷�, ����
#pragma endregion


	return 0;
}
