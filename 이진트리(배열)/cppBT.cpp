//#include <iostream>
//#define Size 16
//using namespace std;
//
//struct TreeNode {
//	char data;
//};
//
//struct Tree {
//	TreeNode TreeArray[Size];
//	int i = 1;
//};
//
//struct heapType {
//	int heap[Size];
//	int heap_size;
//};
//heapType *createHeap()
//{
//	heapType* h = new heapType;
//	h->heap_size = 0;
//	return h;
//}
//void insertHeap(heapType* h, int item)
//{
//	int i;
//	h->heap_size += 1;
//	i = h->heap_size;
//	while ((i != 1) && item > h->heap[i / 2])
//	{
//		h->heap[i] = h->heap[i / 2];
//		i /= 2;
//	}
//	h->heap[i] = item;
//}
//void printHeap(heapType* h)
//{
//	cout << "H = ";
//	for (int i = 1; i <= h->heap_size; i++)
//	{
//		cout << "[" << h->heap[i] << "]";
//	}
//}
//
//Tree *creteBT()
//{
//	Tree* t = new Tree;
//	return t;
//}
//
//void insertNode(Tree *t, char x)
//{
//	if (t->i == Size)
//	{
//		printf("가득찼습니다.\n");
//		return;
//	}
//	t->TreeArray[t->i].data = x;
//	t->i += 1;
//}
//void printRightChild(Tree* t, int i)
//{
//	if (i * 2 > Size)
//	{
//		printf("이 노드는 단말노드입니다.");
//		return;
//	}
//	printf("오른쪽 자식 노드는 %c 입니다.", t->TreeArray[i * 2].data);
//}
//void printLeftChild(struct Tree* t, int i)
//{
//	if (i * 2 - 1 > Size)
//	{
//		printf("이 노드는 단말노드입니다.");
//		return;
//	}
//	printf("오른쪽 자식 노드는 %c 입니다.", t->TreeArray[i * 2 - 1].data);
//}
//void printParents(struct Tree* t, int i)
//{
//	if (i <= 0)
//	{
//		printf("\n");
//		return ;
//	}
//	printf("%c", t->TreeArray[i].data);
//	if (i % 2 == 1)
//		return printParents(t, (i - 1) / 2);
//	if (i % 2 == 0)
//		return printParents(t, i / 2);
//}
//void printBT(struct Tree* t)
//{
//	cout << "BT = ";
//	for (int j = 1; j <= t->i; j++)
//	{
//		cout << "[" << t->TreeArray[j].data << "]";
//	}
//}
//
////int main()
////{
////	heapType* h = createHeap();
////	insertHeap(h, 10);
////	insertHeap(h, 45);
////	insertHeap(h, 19);
////	insertHeap(h, 11);
////	insertHeap(h, 96);
////	printHeap(h);
////}
