#include <stdio.h>
#define MaxSize 5
//从顺序表中删除具有最小值的元素，并返回其值，删除的元素由最后一个元素代替

typedef struct
{
   int data[MaxSize];
   int length;

}SqList;

void InitList(SqList &L)//初始化顺序表
{
   for(int i=0;i<MaxSize;i++)
   {
	   L.data[i]=0;
	   L.length=0;
   }
}

bool Del_Min(SqList &L,int &e)//删除元素
{
	int temp=0;
   if(L.length ==0)
	   return false;
   e=L.data[0];
   for(int i=1;i<MaxSize;i++)
   {
	   if(L.data[i]<e)
	   {
		   e=L.data[i];
		   temp=i;
	   }
   }
   L.data[temp]=L.data[L.length-1];
   
   return true;
}
int main()
{
	int e=0;
	SqList L;
	InitList(L);
	printf("输入为：");
	for(int i=0;i<MaxSize;i++)
	{
		scanf("%d",&L.data[i]);
		L.length++;
	}
	Del_Min(L,e);
	printf("更改后的：");
	for(int i=0;i<MaxSize;i++)
	{
	  printf("%d ",L.data[i]);
	}
	printf("\n");
	printf("被删除的为e=%d\n",e);
  return 0;
}