#include <stdio.h>
#include <malloc.h>


typedef struct LNode
{
	int data;
    struct LNode *next;

}LNode,*LinkList;

//bool InitList(LinkList &L)  //����ͷ���
//{
//  L=NULL;
//  return true;
//}
//
////�п�
//int Empty(LinkList &L,int &e)
//{
//  if(L==NULL)
//	  return e=1;
//  else
//	  return e=-1;
//}

//��ͷ���
bool InitList(LinkList &L)
{
  L=(LNode*)malloc(sizeof(LNode));
  if(L==NULL)
	  return false;
  L->next=NULL;
   return true;
}

//��i��������Ԫ��e
bool ListInsert(LinkList &L,int i,int e)
{
	if(i<1)
		return false;
	LNode *p;
	int j=0;
	p=L;
	while(p!=NULL && j<i-1)
	{
		p=p->next;
		j++;
	}                        //�ҵ�i-1Ԫ��
	if(p==NULL)
		return false;
	LNode *s=(LNode *)malloc(sizeof(LNode));
	s->next=p->next;
	s->data=e;
	p->next=s;
	return true;
}

int main()
{
	int e=0;
	LinkList L;
	InitList(L);
	/*Empty(L,e);
	if(e==1)
		printf("��\n");
	else
		printf("�ǿ�\n");*/
	ListInsert(L,2,e);

  return 0;
}