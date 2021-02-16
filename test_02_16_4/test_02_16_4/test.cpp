#include <stdio.h>
#include <stdlib.h>

#define MaxSize 10
struct SeqList
{
	int data[MaxSize];
	int length;
};

void InitList(SeqList &L)
{
	L.length=0;
}

//#define InitSize 10
//
//struct SeqList
//{
//	int *data;
//	int MaxSize;
//	int length;
//};
//
//void InitList(SeqList &L)
//{
//	L.data=(int *)malloc(InitSize*sizeof(int));
//	L.length=0;
//	L.MaxSize=InitSize;
//}

//void IncreaseSize(SeqList &L,int len)
//{
//	int *p=L.data;
//	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
//	for(int i=0;i<L.length;i++)
//		L.data[i]=p[i];
//	L.MaxSize=L.MaxSize+len;
//	free(p);
//}

bool ListInsert(SeqList &L,int i,int e)
{
	if(i<1||i>L.length+1)
		return false;
	if(L.length>=MaxSize)
		return false;
	for(int j=L.length;j>=i;j--)
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
	return true;
}

bool ListDelete(SeqList &L,int i,int &e)
{
	if(i<1||i>L.length)
		return false;
	e=L.data[i-1];
	for(int j=i;j<L.length;j++)
		L.data[j-1]=L.data[j];
	L.length--;
	return true;
}

int main()
{
	struct SeqList L;
	InitList(L);
	for(int i=1;i<5;i++)
	{
		ListInsert(L,i,i); //在位序为i的地方插入元素i
	}
		for(int i=0;i<L.length;i++)
	{
		printf("%d ",L.data [i]);
	}
	int e=0;
	if(ListDelete(L,3,e))
		printf("%d\n",e);
	else
		printf("不合法");

	/*SeqList L;
	InitList(L);
	IncreaseSize(L,5);*/

	system("pause");
	return 0;
}