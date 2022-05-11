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
		printf("가득찼습니다.\n");
		return;
	}
	t->i += 1;
	t->TreeArray[t->i] = x;
	
	
}

void printParentAndChild(struct Tree* t, int i)
{
	if (Size == 1)
	{
		printf("이 노드는 루트노드 입니다.");
	}
	else if (i * 2 >= Size)
	{
		printf("이 노드의 부모노드는 %c 이며 왼쪽 자식노드이며 단말노드 입니다.", t->TreeArray[(i) / 2]);
	}
	else if (i * 2 - 1 >= Size)
	{
		printf("이 노드의 부모노드는 %c 이며 오른쪽 자식노드이며 단말노드 입니다.", t->TreeArray[(i) / 2]);
	}
	else
		printf("이 노드는 부모노드가 %c 이며 왼쪽 자식노드는 %c, 오른쪽 자식노드는 %c 입니다.", t->TreeArray[(i)/2], t->TreeArray[i * 2], t->TreeArray[i * 2 - 1]);
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
	printf("노드의 인덱스 번호를 입력해주세요 >>\n");
	scanf_s("%d", &index);
	printParentAndChild(t, index);
	
	
	
}