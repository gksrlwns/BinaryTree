#include <stdio.h>
#include <stdlib.h>
#define Size 16

struct Tree {
	
	char TreeArray[Size];
	int i;
};


struct Tree *creteBT()
{
	struct Tree* t = (struct Tree*)malloc(sizeof(struct Tree));
	t->i = 0;
	return t;
}

void insertNode(struct Tree *t, char x)
{
	if (t->i == Size)
	{
		printf("����á���ϴ�.\n");
		return;
	}
	t->i += 1;
	t->TreeArray[t->i] = x;
	
	
}

void printParentAndChild(struct Tree* t, int i)
{
	if (Size == 1)
	{
		printf("�� ���� ��Ʈ��� �Դϴ�.");
	}
	else if (i * 2 >= Size)
	{
		printf("�� ����� �θ���� %c �̸� ���� �ڽĳ���̸� �ܸ���� �Դϴ�.", t->TreeArray[(i) / 2]);
	}
	else if (i * 2 - 1 >= Size)
	{
		printf("�� ����� �θ���� %c �̸� ������ �ڽĳ���̸� �ܸ���� �Դϴ�.", t->TreeArray[(i) / 2]);
	}
	else
		printf("�� ���� �θ��尡 %c �̸� ���� �ڽĳ��� %c, ������ �ڽĳ��� %c �Դϴ�.", t->TreeArray[(i)/2], t->TreeArray[i * 2], t->TreeArray[i * 2 - 1]);
}

void printBT(struct Tree* t)
{
	printf("BT = ");
	for (int j = 1; j < t->i; j++)
	{
			printf("[%c]", t->TreeArray[j]);
	}
	printf("\n");
	/*for (int j = 1; j <= t->i; j++)
	{
		printf("[%c]", t->TreeArray[j]);
	}*/
}


int main()
{
	int index = 0;
	struct Tree* t = creteBT();
	insertNode(t, 'A');
	insertNode(t, 'B');
	insertNode(t, 'C');
	insertNode(t, 'D');
	insertNode(t, 'E');
	insertNode(t, 'F');
	insertNode(t, 'G');
	insertNode(t, 'H');
	insertNode(t, 'I');
	insertNode(t, 'J');
	insertNode(t, 'K');
	insertNode(t, 'L');
	insertNode(t, 'M');
	insertNode(t, 'N');
	insertNode(t, 'O');
	printBT(t);
	printf("����� �ε��� ��ȣ�� �Է����ּ��� >>\n");
	scanf_s("%d", &index);
	printParentAndChild(t, index);
	
	
	
}