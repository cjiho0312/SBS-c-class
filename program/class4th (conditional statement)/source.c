#include <stdio.h>

void main()
{
#pragma region ���ǹ�
	// ��� ������ �־����� ��, �ش� ���ǿ� ���� ������ �����ϵ��� �����ϴ� ��ɹ��Դϴ�.
#pragma region ���� ������
	// �ΰ��� �ǿ������� ���� ���Ͽ� �� �����
	// 1 �Ǵ� 0�̶�� ������ ��Ÿ���� �������Դϴ�.

	// > : ������ ���� �� ũ�ٸ�
	// < : �������� ���� �� ũ�ٸ�

	// >= : ������ ���� �� ũ�ų� ���ٸ�
	// <= : �������� ���� �� ũ�ų� ���ٸ�

	// == : ������ ���� ���ٸ�
	// != : ������ ���� �ٸ��ٸ�

	/*
	int state1 = 10 > 5;
	int state2 = 10 < 5;
	int state3 = 10 >= 5;
	int state4 = 10 <= 5;
	int state5 = 10 == 5;
	int state6 = 10 != 5;

	printf("%d\n", state1);
	printf("%d\n", state2);
	printf("%d\n", state3);
	printf("%d\n", state4);
	printf("%d\n", state5);
	printf("%d\n", state6);
	*/



#pragma endregion

#pragma region if��
	// � Ư���� ������ ���ϸ� ������ �´ٸ� ����Ǵ� ���ǹ��Դϴ�.

	/*
	int health = 0;
	if(health <= 0)
	{
	printf("You are dead.\n");
	}
	*/

	// if���� ������ 1�� �� ����Ǹ�, 0�� ���� ������� �ʽ��ϴ�.


#pragma endregion

#pragma region else if��
	// if������ ���� ���� ������ ���������� �˻��ϰ� ���� �� ����ϴ� ���ǹ��Դϴ�.
	// else if���� ��� �������� ����� �� ������
	// if�� ���Ǻ��� �Ʒ��� �ϳ��� �˻��ϴٰ� ���� ���� ������ �´� �б�� ���ϴ�.

	/*
	int coin = 20;

	if (coin >= 35) {
	printf("���� �����߽��ϴ�.\n");
	coin -= 35;
	printf("���� ���� : %d\n", coin);
	}

	else if (coin < 35) {

		printf("'%d'������ �����մϴ�.\n", 35 - coin);
		printf("����� ���� ���� : %d\n", coin);
	}
	*/


#pragma endregion

#pragma region else��
	// if���� ������ ���� ���ǹ����� ��� ������ ���� ���� �� ����Ǵ� ���ǹ��Դϴ�.

	//  int number = 0;
	//	if (number < 0) 
	//	{
	//		printf("%d : ���� �����Դϴ�.", number);
	//	}
	//	else if (number > 0) 
	//	{
	//		printf("%d : ���� ����Դϴ�.", number);
	//	}
	//	else
	//	{
	//		printf("%d : ���� 0�Դϴ�.", number);
	//	}

	// if���� ����� ��� ���ǹ��� ������ ���� �� ���� ���� �ִ� ���ǹ��� ����˴ϴ�.
#pragma endregion

#pragma region �� ������
	// �� �� �̻��� ������ �����ϰų� �ϳ��� ������ ������Ű�� �������Դϴ�.

#pragma region AND ������
	// �� ���� ������ �´ٸ� ����Ǵ� �������Դϴ�.
	// �� ���� ���� ���̿� '&&'�� �ֽ��ϴ�. 

// int number = 4;
// if (number > 2 && number < 5) 
// {
// 	printf("%d��(��) 2���� ũ�� 5���� �۽��ϴ�.", number);
// }

#pragma endregion

#pragma region OR ������
// �� ���� ���� �� �ϳ��� �´ٸ� ����Ǵ� �������Դϴ�.
// �� ���� ���̿� '||'�� ����ֽ��ϴ�.

/*
int soul = 3;
int key = 1;
if (soul >= 5 || key > 0) {
	printf("���� ���Ƚ��ϴ�.");
}
else {
	printf("��ȥ 5���� �������ų�, ���踦 �����;� �մϴ�.");
}
*/

// ���ǹ��� �� ǥ������ ���ϴ� ����, ����� �̹� Ȯ�����ٸ�. �� ������ �򰡸� �����մϴ�.

#pragma endregion

#pragma region NOT ������
// �ϳ��� ������ ������Ű�� �������Դϴ�.
// ���� �տ� '!'�� ���Դϴ�. ex) if(!����)
// ������ ������ �ƴ� ��� (�Ұ�ȣ)�� �̿��Ͽ� �켱������ �־� �մϴ�.

/*
int power = 0;

if (!power)
{
	printf("the power is on.");
}
else {
	printf("the power is off.");
}
*/

#pragma endregion

#pragma region ��и� ����

/*
float x = 0.1;
float y = -4.2;

if (x > 0 && y > 0)
{
	printf("�� 1 ��и�");
}
else if (x < 0 && y > 0)
{
	printf("�� 2 ��и�");
}
else if (x < 0 && y < 0)
{
	printf("�� 3 ��и�");
}
else if (x > 0 && y < 0)
{
	printf("�� 4 ��и�");
}
else if (x != 0 && y == 0)
{
	printf("x ����");
}
else if (x == 0 && y != 0)
{
	printf("y ����");
}
else if (x == 0 && y == 0)
{
	printf("����");
}
*/
#pragma endregion

#pragma region switch��
// � ����� ���� �� ������� ����Ǵ� ��ɹ��Դϴ�.
// �б⸦ Ż���Ű�� ���ؼ� 'break;' ��ɹ��� ����մϴ�.
// 'default'���� �´� ������ ���� �� ����˴ϴ�.

/*
int state = 5;

switch (state)
{
case 0: printf("Idle State\n");
	break;
case 1: printf("Attack State\n");
	break;
case 2: printf("Die State\n");
	break;
default: printf("Exception\n");
	break;
}
*/


// switch���� ���ǽ����� �Ǽ��� ������ �Ǽ��� ����� ������ �� �����ϴ�.


#pragma endregion



#pragma endregion


#pragma endregion

}