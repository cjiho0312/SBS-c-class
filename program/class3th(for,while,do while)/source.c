#include <stdio.h>

void main()
{
#pragma region �ݺ���
	// ���α׷� ������ Ư���� �۾��� �ݺ������� �����ϴ� ��ɹ��Դϴ�.

#pragma region ���� ������
	// �ǿ����ڸ� �ϳ��� ������Ű�ų� ���ҽ�Ű�� �������Դϴ�.

#pragma region ���� ���� ������
	// ������ ���� ������Ų �Ŀ� ������ �����ϴ� �������Դϴ�.

	// int a = 0;
	// int b = ++a;
	// printf("a : %d\nb : %d\n", a, b);
	// b = --a;
	// printf("a : %d\nb : %d\n", a, b);

#pragma endregion

#pragma region ���� ���� ������
	// ������ ������ ���� ������ ���� ������Ű�� �������Դϴ�.

	// int a = 0;
	// int b = 0;
	// b = a++;
	// printf("a: %d\nb : %d\n", a, b);
	// b = a--;
	// printf("a: %d\nb : %d\n", a, b);

#pragma endregion



#pragma endregion

#pragma region for��
	// �ʱ� ���� �����Ͽ� ���ǽ��� ����� ���� Ư���� ����ŭ �ݺ��ϴ� ��ɹ��Դϴ�.

	// �ݺ����� �����ϴ� ������ "�ʱ�ȭ -> ���ǰ˻� -> ���� -> ����"�� ������ �����մϴ�.

	// for (int i = 0; i < 5; i++) // �� ���� ����������(++,--)�� ������ �տ� ���̵� �ڿ� ���̵� ��������ϴ�.
	// {
	// 	printf("Hello World\n");
	// }


#pragma endregion

#pragma region while��
	// Ư�� ������ ������ ������ �ݺ��ϴ� ��ɹ��Դϴ�.

	// �ݺ����� ���������� �����ϸ鼭 ���� �б⸦ ������ �Ǹ�
	// ��� ������ ���� �帧�� �� �� �̸� Ȯ���մϴ�.

	// int a = 0;
	// while (a < 5)
	// {
	// 	printf("a : %d\n", a);
	// 
	// 	a++;
	// }


#pragma endregion

#pragma region do while��
	// ���ǰ� ������� �� ���� �۾��� ������ �Ŀ�
	// ���ǿ� ���� ��ɹ��� �����ϴ� �ݺ�	���Դϴ�.

	// int a = 0;
	// do {
	// 	printf("a : %d\n", a);
	// 	a++;
	// } while (a < 5);

	// �ݺ����� ��� �̸� �����ؼ� �����ϴ� ������ ������
	// ������ Ʋ�ȴٸ� ���� �ݺ��� ���� ���� �б�� �ٽ� �˻��Ͽ� ó���մϴ�.

#pragma endregion

#pragma region nested for��
	// �ݺ��� ���� �ݺ����� �����ϴ� �����Դϴ�.

	// for (int i = 0; i < 3; i++) 
	// {
	// 	printf("i = %d\n\n", i);
	// 
	// 	for (int j = 0; j < 3; j++)
	// 	{
	// 		printf("j = %d\n", j);
	// 	}
	// 	printf("\n");
	// }


#pragma endregion

#pragma region continue��
	// �ش� ���ǹ��� �������� �ʰ�, �ݺ����� �̾ �����ϴ� ����Դϴ�.

	/*
	printf("1���� 10���� �����ϵ�, 3�� ����� ���� �����Ѵ�.\n");

	for (int count = 1; count <= 10; count++)
	{
		if (count % 3 == 0) // ������ 3���� ���� ������ ���� 0�� ��
		{
			continue; // �̹����� �������� �ʴ´�
		}
		printf("%d\n", count);

	}
	*/

#pragma endregion


#pragma endregion


}