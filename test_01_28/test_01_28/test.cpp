#include <stdio.h>
#define MaxSize 5
//��˳�����ɾ��������Сֵ��Ԫ�أ���������ֵ��ɾ����Ԫ�������һ��Ԫ�ش���

typedef struct
{
   int data[MaxSize];
   int length;

}SqList;

void InitList(SqList &L)//��ʼ��˳���
{
   for(int i=0;i<MaxSize;i++)
   {
	   L.data[i]=0;
	   L.length=0;
   }
}

bool Del_Min(SqList &L,int &e)//ɾ��Ԫ��
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
	printf("����Ϊ��");
	for(int i=0;i<MaxSize;i++)
	{
		scanf("%d",&L.data[i]);
		L.length++;
	}
	Del_Min(L,e);
	printf("���ĺ�ģ�");
	for(int i=0;i<MaxSize;i++)
	{
	  printf("%d ",L.data[i]);
	}
	printf("\n");
	printf("��ɾ����Ϊe=%d\n",e);
  return 0;
}