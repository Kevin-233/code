#include <stdio.h>
#define MaxSize 5



typedef struct
{
	int data[MaxSize];
	int length;

}SqList;

void InitList(SqList &L)
{
  for(int i=0;i<MaxSize;i++)
  {
	  L.data[i]=0;
	  L.length=0;
  }
}

//void Reverse(SqList &L)//����˳���
//{
//   int temp=0;
//   int left=0;
//   int right=L.length-1;
//   while(left<right)
//   {
//	   temp=L.data[left];
//	   L.data[left]=L.data[right];
//	   L.data[right]=temp;
//	   left++;
//	   right--;
//   }   
//}

void Del_X(SqList &L,int x) //ȥ�����б���ֵΪx��Ԫ��
{
   int k=0;           //��¼ֵΪx��Ԫ�صĸ���
   for(int i=0;i<L.length;i++)
   {
	   if(L.data[i]!=x)
	   {
		   L.data[k]=L.data[i];
		   k++;
	   }
   }
   L.length=k;
}

int main()
{
	int x=1;
	SqList L;
	InitList(L);
	for(int i=0;i<MaxSize;i++)
	{
		scanf("%d",&L.data[i]);
		L.length++;
	}
   /*  printf("�û�ǰ��");
	for(int i=0;i<MaxSize;i++)
	{
	 printf("%d ",L.data[i]);
	}
	 printf("\n");
	 Reverse(L);
	 printf("�û���");
	 for(int i=0;i<MaxSize;i++)
	 {
		 printf("%d ",L.data[i]);
	 }
	 */
	 Del_X(L,x);
	 printf("ɾ����");
	 for(int i=0;i<L.length ;i++)
	 {
		 printf("%d ",L.data[i]);
	 }

  return 0;
}