#include <stdio.h>
#define MaxSize 10

typedef struct
{
	int data[MaxSize];
	int length;

}SqList;

//初始化顺序表
void InitList(SqList &S)
{
  for(int i=0;i<MaxSize;i++)
	  S.data[i]=0;
  S.length=0;

}

//插入操作
bool ListInsert(SqList &S,int i,int e)
{
	if(i<1||i>S.length+1)  //插入范围是否有效
		return false;
	if(S.length>=MaxSize) //顺序表是否放满
		return false;
	for(int j=i;j<S.length;j++)
		S.data[j]=S.data[j-1];
	S.data[i-1]=e;
	S.length++;
	return true;
}

//删除操作,返回被删除的元素
bool ListDelete(SqList &S,int i,int &e)
{
  if(i<1||i>S.length)
	  return false;
  e=S.data[i-1];
  for(int j=i;j<S.length;j++)
	  S.data[i-1]=S.data[i];
  S.length--;
  return true;
}

//按值查找
int LocateElem(SqList &S,int &e)
{
	for(int i=0;i<S.length;i++)
	{
		if(S.data[i]==e)
		  return S.data[i];
		else
			return e=-1;
	}
}

int main()
{
	int e=6;
  SqList S;
  InitList(S);
  printf("%d\n",S.length);
  ListInsert(S,1,1);
  ListInsert(S,2,2);
  ListInsert(S,3,3);
  ListInsert(S,4,4);
  ListInsert(S,5,5);
  printf("%d\n",S.length);
 // ListDelete(S,5,e);
 // printf("%d\n",S.length);
 // printf("%d\n",e);
  LocateElem(S,e);
  if(e==-1)
	  printf("没找到\n");
  else
	  printf("找到了\n");

	return 0;
}