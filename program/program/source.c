#include <stdio.h>

void main()
{
#pragma region �ּ� ������
	// ������ �ּ� ���� ��ȯ�ϴ� �������Դϴ�.
	// �ּ� �����ڴ� "&" ��ȣ�� ����մϴ�.

	/*
	int data = 10;

	printf("data ������ �ּ� : %p\n", &data);
	*/

	// �������� �ּ� ���� �ش� �����Ͱ� ����� �޸��� ���� �ּҸ� �ǹ��մϴ�.
#pragma endregion

#pragma region scanf_s �Լ�
	// ǥ�� �Է��Լ���, ���� ������ �����͸� �پ��� ���Ŀ� ���߾� �Է����ִ� �Լ��Դϴ�.
	// scanf_s("%d", &����)

	/*
	
	int a = 0;

	printf("���� a�� ���� �����ϼ���.\n");

	// ǥ�� �Է� �Լ��� �Է��� ������ ������ �۾����� �Ѿ �� �����ϴ�.

	scanf_s("%d", &a);

	// ���۴� �����Ͱ� �̵��� �� �ӽ÷� ����Ǵ� �����̸�,
	// ���� �����ڿ� ���� �Է��� �� �ִ� �������� ������ �����˴ϴ�.

	printf("a�� �� : %d", a);

	*/

	// ǥ�� �Է� �Լ��� �����͸� �Է��ϰ� �Ǹ� ���ۿ� �����͸� �����Ͽ��ٰ�
	// �Է��ϴ� ���� ���� ���� ������ ���α׷��� �����մϴ�.
#pragma endregion

#pragma region ������
	//�޸��� �ּҰ��� ������ �� �ִ� �����Դϴ�.
	// �ڷ��� * ����;
	
	/*
	int a = 10;

	int * pointer = &a; // a ������ �ּ� ���� �����մϴ�.

	printf("a�� �ּ� : %p\n", &a);
	printf("pointer�� �� : %p\n", pointer);
	

	// ������ ������ �ڽ��� �޸� ������ ������ ������,
	// ������ ������ ������ ���� �ּҐk �����ϰ� �Ǹ�
	// �ش� ������ ���� �ּҸ� ����Ű�� �˴ϴ�.

	int packet = 10;
	int* pointer = &packet;

	*pointer = 99;


	printf("packet ������ �� : %d\n", packet);
	printf("pointer�� ����Ű�� �� : %d\n", *pointer);

	// ������ ������ �����Ͱ� ����Ű�� �޸� ������ �ڷ����� �� �� �����Ƿ�,
	// �����Ͱ� ����Ű�� �޸��� �ڷ����� �������־�� �մϴ�.

	int storage = 10;
	pointer = &storage;

	*pointer = 20;


	printf("storage�� �ּ� : %p\n", &storage);
	printf("pointer�� �� : %p\n", pointer);

	printf("pointer ������ ũ�� : %u\n", sizeof(pointer));
	*/

	// ������ ������ ũ��� �߾� ó�� ��ġ�� �� ���� ó���� �� �ִ� ũ��� ��������,
	// �� ���� ó���� �� �ִ� ũ��� �ü���� ���� ũ�Ⱑ �����˴ϴ�.

#pragma endregion

#pragma region ��� ���� ������
	// �����Ͱ� ����Ű�� �ּҿ� ����Ǿ��ִ� ���� ������ �� ������ �����Ǿ��ִ� �������Դϴ�.
	// const �ڷ��� * ���� (���⼭ const �ڷ����� ���ȭ �ǰ�, ������ ���ȭ ���� �ʴ´�.)

	/*
	int height = 10;
	int width = 20;

	printf("height ������ �� : %d\n", height);
	printf("width ������ �� : %d\n\n", width);

	const int* constPointer = &height;

	printf("height�� �ּ� : %p\n", &height);
	printf("constPointer�� �� : %p\n", constPointer);
	printf("constPointer�� ����Ű�� �� : %d\n\n", *constPointer);

	constPointer = &width;

	printf("width�� �ּ� : %p\n", width);
	printf("constPointer�� �� : %p\n", constPointer);
	printf("constPointer�� ����Ű�� �� : %d\n\n", *constPointer);
	*/

#pragma endregion

#pragma region ������ ���
// ������ ������ ����Ű�� �ִ� �ּ� ���� ������ �� ������ �����Ǿ� �ִ� �������Դϴ�.
// �ڷ��� * const ���� (const ������ ���ȭ�˴ϴ�.)

/*
int a = 10;
int b = 20;

int* const pointer = &a;

printf("a�� �� : %d\n", a);
printf("pointer�� ����Ű�� �� : %d\n", *pointer);
printf("pointer�� �� : %p\n\n", pointer);

*pointer = 99;

printf("a�� �� : %d\n", a);
printf("pointer�� ����Ű�� �� : %d\n", *pointer);
printf("pointer�� �� : %p\n", pointer);
*/

//pointer = &b;



#pragma endregion

#pragma region ���� ������
// �ڷ����� �������� ���� ���·� ��� �ڷ����� ������ �� �ִ� �������Դϴ�.

char ch ='A';
int in = 13;
float fo = 5.3f;

void * box = &ch;
*(char *)box = 'B';

box = &in;
*(int*)box = 20;

box = &fo;
*(float*)box = 7.5f;

printf("ch ������ �� : %c\n", ch);
printf("in ������ �� : %d\n", in);
printf("fo ������ �� : %f\n", fo);


// ���� �����ʹ� �޸� �ּҿ� �����ؼ� ���� ������ �� �����Ƿ�
// ���� �����Ͱ� ����Ű�� ������ �ڷ������� ��ȯ���־�� �մϴ�.
#pragma endregion


}

//����
// �ּҰ��� �Ź� ����� ������ �ٲ�� ������ �����ΰ���?