#include <stdio.h>
#include <stdlib.h>
//#define InitSize 10

#define MaxSize 10   //顺序表的默认最大长度

typedef struct{           //顺序表的实现-静态分配
	int data[MaxSize];    //直接定义一个数组
	int length;
}SqList;

/*bool ListInsert(SqList &L,int i,int e)
{
	if(i<1||i>L.length+1)
	{
		printf("不能在该处插入\n");
		return false;
	}
		if(L.length>=MaxSize)
		{
			printf("内存已满，不能再插入数据\n");
     		return false;
		}
		for(int j=L.length;j>=i;j--)
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
}*/

void InitList(SqList &L) //初始化顺序表L
{
    int i=0;
	for(i=0;i<MaxSize;i++)
		 L.data[i]=0;
		 L.length=0;
}

/*bool ListDelete(SqList &L,int i,int &e)   //删除顺序表中的元素
{
	if(i<1||i>L.length)
	{
	  printf("不能在该处删除\n");
	  return false;
	}
	e=L.data[i-1];
	for(int j=i;j<L.length;j++)
	{
		L.data[j-1]=L.data[j];
	}
	L.length--;
	return true;
}*/

int GetElem(SqList &L,int i)
{
	return L.data[i-1];
}

int LocatElem(SqList &L,int a )
{
	for(int i=0;i<L.length;i++)
	{
	
		if(L.data[i]==a)
			return 1;
		
	}
	
			return 0;
}
int main()
{
  SqList L;
  InitList(L);
  printf("删除前的顺序表:");
  for(int i=0;i<5;i++)  //给数组赋值
  {
	  L.data[i]=i;
	  L.length++;
	  printf("%d ",L.data[i]);
  }  
  printf("\n");
  int e=GetElem(L,2);  //按位查找，查找位序为2的元素
  printf("所查找的元素=%d\n",e);

  int ret=LocatElem(L,2);//按值查找，查找值为2的元素
  if(ret==1)
	  printf("找到了\n");
  else
	  printf("没找到\n");

 /* int e=0;
  ListDelete(L,3,e);
  printf("删除后的顺序表：");
  for(int i=0;i<L.length;i++)
	  printf("%d ",L.data[i]);
  printf("\n");
  printf("被删除的是%d\n",e);
  */
 /* ListInsert(L,9,3);  //在位序为3的地方插入3
  for(int i=0;i<L.length;i++)
  {
	  printf("%d ",L.data[i]);
  }*/
	  return 0;
}
/*
typedef struct
{
	int *data;  //指示动态分配数组的指针
	int MaxSize;//顺序表的最大容量
	int length;//顺序表的当前长度
}SeqList;

void InitList(SeqList &L)
{
	L.data=(int*)malloc(InitSize*sizeof(int));//初始化，用malloc申请地址
	L.length=0;
	L.MaxSize=InitSize;
}

void IncreaseSize(SeqList &L,int len)//增加动态数组的长度
{
	int *p=L.data;
	L.data=(int*)malloc((L.MaxSize+len)*sizeof(int));
	for(int i=0;i<L.length;i++)
		L.data[i]=p[i];  //将数据复制到新区域
	L.MaxSize=L.MaxSize+len;
	free(p);  //释放原来的空间
}
int main()
{
  SeqList L;
  InitList(L);
  IncreaseSize(L,5);
  return 0;
}
*/