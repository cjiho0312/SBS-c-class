#include <stdio.h>

void main()
{
#pragma region �迭
	// ���� �ڷ����� ������� �̷���� ���� �����Դϴ�.
	
	/*
	int array[7]; // ���� �ʱ�ȭ ���̶� garbage ������ ������.

	int size = sizeof (array) / sizeof (int); // array�� ũ��(28) / int�� ũ��(4)

	for (int i = 0; i < size; i++)
	{
		array[i] = (i + 1) * 10;
		printf("array[%d] = %d\n", i, array[i]);
	}
	*/

	// �迭�� ��� ù��° ���Ҵ� 0���� �����մϴ�.

	/*
	
	int list[5] = { 1, 2, 3, 4, 5 };

	int* pointer = &list[0];

	* pointer = 99;

	printf("list[0]�� �� : %d\n\n", list[0]);

	pointer += 1; // pointer = pointer + 1, list[1]�� ����Ű�� ��

	printf("pointer�� ����Ű�� �� : %d\n", *pointer);
	printf("pointer �� : %p\n", pointer);
	printf("list[1]�� �ּ� �� : %p\n", &list[1]);

	*/


	// �迭�� ���ϴ� ���ҿ� ���ϴ� ���� ������ �� ������
	// �迭�� ũ��� �������� �Ǵ� �������� ������ �޸� ������ ������ �˴ϴ�.


	// float container[ ] = { 10.0f, 12.5f, 15.0f }


	// �迭�� ũ��� ������ �� ������, �ʱ�ȭ ��Ͽ��� ������ ��ҿ� ����
	// �迭�� ũ�Ⱑ �����˴ϴ�.
#pragma endregion

#pragma region ���ڿ�
	// �������� �޸� ������ ����� ���� ������ �����Դϴ�.


	// const char * word = "Game";
	
	// printf("word�� ���ڿ� : %s\n", word);


	// ���ڿ��� ��� �����͸� �̿��Ͽ� ���ڿ� ����� ����Ű���� �� �� ������,
	// ���ڿ� ����� ������ ������ �б� ���� ������ ����Ǳ� ������
	// ���ڿ��� ���� ������ �� �����ϴ�.


	// word = "Overwat\0ch"; // \0 (null)�� ������ ���ڿ��� �����ϴ�.
	
	// printf("word�� ���ڿ� : %s\n", word);


	// ���ڿ��� ���鵵 �Բ� �޸� ������ �����Ͽ� ũ�Ⱑ �����Ǹ�,
	// �������� ���ڿ��� ���� �˷��ִ� ���� ���ڰ� �߰��˴ϴ�.

	/*
	char name[] = "CJiho";
	printf("name �迭�� �� : %s\n", name);

	name[0] = 'T';
	printf("name �迭�� �� : %s\n", name);

	// name = "school"; // ���ο� �ּҸ� �ִ� ���� �Ұ���, ������ ���.
	*/


	// ���ڿ��� �����ϰ� �Ǹ� �� �������� ��ȿ�� ���ڱ��� �޸� ������ ����˴ϴ�.

#pragma endregion

#pragma region ASCII code, Uni code

	// ASCII �ڵ�(�̱�������ȯǥ�غ�ȣ)�� ���� ���ĺ��� ����ϴ� ��ǥ���� ���� ���ڵ� ����Դϴ�.
	// c���� char �ڷ����� �������� ���ڷ� ���� �����ϸ�,
	// ���� �ƽ�Ű �ڵ带 �̿��� ���ڷ� ��ȯ�Ͽ� ��Ÿ���ϴ�.

#pragma endregion


}