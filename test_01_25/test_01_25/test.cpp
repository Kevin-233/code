#include <stdio.h>
#include <stdlib.h>
//#define InitSize 10

#define MaxSize 10   //˳����Ĭ����󳤶�

typedef struct{           //˳����ʵ��-��̬����
	int data[MaxSize];    //ֱ�Ӷ���һ������
	int length;
}SqList;

/*bool ListInsert(SqList &L,int i,int e)
{
	if(i<1||i>L.length+1)
	{
		printf("�����ڸô�����\n");
		return false;
	}
		if(L.length>=MaxSize)
		{
			printf("�ڴ������������ٲ�������\n");
     		return false;
		}
		for(int j=L.length;j>=i;j--)
		L.data[j]=L.data[j-1];
	L.data[i-1]=e;
	L.length++;
}*/

void InitList(SqList &L) //��ʼ��˳���L
{
    int i=0;
	for(i=0;i<MaxSize;i++)
		 L.data[i]=0;
		 L.length=0;
}

/*bool ListDelete(SqList &L,int i,int &e)   //ɾ��˳����е�Ԫ��
{
	if(i<1||i>L.length)
	{
	  printf("�����ڸô�ɾ��\n");
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
  printf("ɾ��ǰ��˳���:");
  for(int i=0;i<5;i++)  //�����鸳ֵ
  {
	  L.data[i]=i;
	  L.length++;
	  printf("%d ",L.data[i]);
  }  
  printf("\n");
  int e=GetElem(L,2);  //��λ���ң�����λ��Ϊ2��Ԫ��
  printf("�����ҵ�Ԫ��=%d\n",e);

  int ret=LocatElem(L,2);//��ֵ���ң�����ֵΪ2��Ԫ��
  if(ret==1)
	  printf("�ҵ���\n");
  else
	  printf("û�ҵ�\n");

 /* int e=0;
  ListDelete(L,3,e);
  printf("ɾ�����˳���");
  for(int i=0;i<L.length;i++)
	  printf("%d ",L.data[i]);
  printf("\n");
  printf("��ɾ������%d\n",e);
  */
 /* ListInsert(L,9,3);  //��λ��Ϊ3�ĵط�����3
  for(int i=0;i<L.length;i++)
  {
	  printf("%d ",L.data[i]);
  }*/
	  return 0;
}
/*
typedef struct
{
	int *data;  //ָʾ��̬���������ָ��
	int MaxSize;//˳�����������
	int length;//˳���ĵ�ǰ����
}SeqList;

void InitList(SeqList &L)
{
	L.data=(int*)malloc(InitSize*sizeof(int));//��ʼ������malloc�����ַ
	L.length=0;
	L.MaxSize=InitSize;
}

void IncreaseSize(SeqList &L,int len)//���Ӷ�̬����ĳ���
{
	int *p=L.data;
	L.data=(int*)malloc((L.MaxSize+len)*sizeof(int));
	for(int i=0;i<L.length;i++)
		L.data[i]=p[i];  //�����ݸ��Ƶ�������
	L.MaxSize=L.MaxSize+len;
	free(p);  //�ͷ�ԭ���Ŀռ�
}
int main()
{
  SeqList L;
  InitList(L);
  IncreaseSize(L,5);
  return 0;
}
*/