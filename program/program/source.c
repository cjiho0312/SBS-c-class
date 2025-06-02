#include <stdio.h>
#include <stdarg.h>


void process() // �Լ� part
{
	printf("Process...\n");

}


void stats(int health, const char* name) // �Ű� ���� part
{
	printf("health : %d\nname : %s\n\n", health, name);
}

void Swap(int left, int right) // �μ� part
{

	int temporary = right;
	right = left;
	left = temporary;

	printf("[after] a�� �� : %d, b�� �� : %d\n\n", left, right);

}

void Swap_pointer(int* left, int* right) // �μ� part
{

	int temporary = *right;
	*right = *left;
	*left = temporary;

}

void Recursion(int count) // ��� �Լ� part
{
	if (count <= 0)
	{
	return;
	}

	printf("Recursion\n");

	Recursion(count-1);
}

inline void Collision() //�ζ��� �Լ� part
{
	printf("Collision\n");
}

void Average(int count, ...) // ���� �μ� ��� part
{
	// va_list : ���� �μ��� �޸� �ּҸ� �����ϴ� ������ �����Դϴ�.
	
	va_list pointer;
	
	// va_start : ���� �μ��� ������ �� �ֵ��� �����͸� �������ִ� �Լ��Դϴ�.
	
	va_start(pointer, count);
	
	double sum = 0.0f;
	
	// va_arg : ���� �μ� �����Ϳ��� Ư�� �ڷ����� ũ�⸸ŭ ���� �������� �Լ��Դϴ�.

	for (int i = 0; i < count; i++)
	{
		sum += va_arg(pointer, int);
	}

	double average = sum / count;

	printf("average : %lf\n", average);
	
	// va_end : ���� �μ��� ������ �� �����͸� NULL�� �ʱ�ȭ�ϴ� �Լ��Դϴ�.
	va_end(pointer);
}

void Provide() // �Լ� ������ part
{
	printf("Provide\n");
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


	/*
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
	*/


	// �μ��� ��� ���� �����ϴ� �μ��� ���� ���޹޴� �Ű� ������
	// �ڷ����� ���� ��ġ�ؾ� �մϴ�.
#pragma endregion

	
#pragma region ��� �Լ�
	// � �Լ����� �ڽ��� �ٽ� ȣ���Ͽ� �۾��� �����ϴ� �Լ��Դϴ�.

	// Recursion(3);

	// return; -> �Լ��� �����ϰ� main �Լ��� �����մϴ�.
#pragma endregion


#pragma region �ζ��� �Լ�
	// �Լ��� ȣ���ϴ� ��� �Լ��� ȣ��Ǵ� ��ġ����
	// �Լ��� �ڵ带 �����Ͽ� �����ϴ� ����� �Լ��Դϴ�.

	// ª�� �Լ��� ����� �� ����ȭ �뵵�� ���˴ϴ�.

	// Collision();

	// �ζ��� �Լ��� �Լ��� ȣ���ϴ� ������ �����Ƿ� ó�� �ӵ��� ��������,
	// �ζ��� �Լ��� ���� ����ϰ� �Ǹ� �Լ��� �ڵ尡 ����Ǳ� ������
	// ���� ������ ũ�Ⱑ Ŀ���� �˴ϴ�.
#pragma endregion


#pragma region ���� �μ� ���
	// �����Ǿ� �ִ� �Ű� ���� �ܿ� ������ �������� ���� �μ��� �߰��� ���� �� �ִ� �μ��Դϴ�.
	
	// Average(5, 10, 20, 30, 40, 50);

	// stdarg.h ����� �����;� ����� �� �ֽ��ϴ�.
#pragma endregion


#pragma region �Լ� ������
	// �Լ��� �ּ� ���� �����ϰ� ����ų �� �ִ� ������ �����Դϴ�.

	void (*functionPointer) ();

	functionPointer = Provide;

	functionPointer();

	// �ڷ���(*���� �̸�) (�ڷ��� �Ű�����, �ڷ��� �Ű�����) <- �Ű������� ������ �� ��� �˴ϴ�.
#pragma endregion


	// �Լ��� ���α׷��� ���� ���϶� �Լ� ȣ�� ��ġ���� �ش� �Լ��� �̵���Ų ��,
	// �۾��� �����ϰ� �ٽ� ���� ��ġ�� ���ƿ��� �����Դϴ�.
#pragma endregion


#pragma region �������

#pragma endregion


}

//����
// void stats(int health, const char* name)��� �ڵ忡�� int ���� const�� ������ �ʴ� ����?
// 
// Recursion(count-1); �� Recursion(count--); �� �ϸ� ������ ���� ������?
// 
// ����Լ�(Recursion(0))���� return �� �̹� ����� �Լ��� �ٽ� �Ѿ�� ù ȣ���� �Լ��� �Ѿ�� �Ǵµ�,
// �̶� ����� �Լ��� �׳� �Ѿ�� �Ǵ� ��Ŀ������ ����? count = 0�� ���� ����Ǿ Recursion(2),(1),(0) �� �Լ� ������ �� �Ǵ� ����,
// �ƴϸ� ����ƴ� �Լ��̱� ������ �׳� ���ư��� ���� �𸣰ھ�.

// ���� �μ� ����� ���ذ� �� �Ȱ�.