#include <stdio.h>


void process()
{
	printf("Process...\n");

}


void stats(int health, const char* name)
{
	printf("health : %d\nname : %s\n\n", health, name);
}


void Swap(int left, int right)
{

	int temporary = right;
	right = left;
	left = temporary;

	printf("[after] a�� �� : %d, b�� �� : %d\n\n", left, right);

}

void Swap_pointer(int* left, int* right) 
{

	int temporary = *right;
	*right = *left;
	*left = temporary;

}


void main()
{
#pragma region �Լ�
	// �ϳ��� Ư���� ������ �۾��� �����ϱ� ���� ���������� ����� �ڵ��� �����Դϴ�.
	 
	// process();

#pragma region �Ű� ����
	// �Լ��� ���ǿ��� ���޹��� �μ��� �Լ� ���η� �����ϱ� ���� ����ϴ� �����Դϴ�.
	
	// stats(100, "Slime");
	// stats(30, "Skull");

	// �Ű� ������ �Լ� ���ο����� ������ �̷������,
	// ���� ���� �Ű������� ������ �� �ֽ��ϴ�.
#pragma endregion


#pragma region �μ�
	// �Լ��� ȣ��� �� �Ű� ������ ������ ���޵Ǵ� ���Դϴ�.

	printf("call by value\n\n"); // ���� ���� ȣ��

	int a = 5;
	int b = 10;

	printf("[before] a�� �� : %d, b�� �� : %d\n\n", a, b);

	Swap(a, b);


	//-------------------------------------------

	printf("call by reference\n\n"); // ������ ���� ȣ��

	int x = 5;
	int y = 10;

	printf("[before] x�� �� : %d, y�� �� : %d\n\n", x, y);

	Swap_pointer(&x, &y);

	printf("[after] x�� �� : %d, y�� �� : %d\n\n", x, y);

	// �μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������
	// �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

	
	// �Լ��� ���α׷��� ���� ���϶� �Լ� ȣ�� ��ġ���� �ش� �Լ��� �̵���Ų ��,
	// �۾��� �����ϰ� �ٽ� ���� ��ġ�� ���ƿ��� �����Դϴ�.
#pragma endregion


}

//����
//void stats(int health, const char* name)��� �ڵ忡�� int ���� const�� ������ �ʴ� ����?