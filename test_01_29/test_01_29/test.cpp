#include <stdio.h>
#include <stdlib.h>
void InsertNextNode();

typedef struct LNode
{
   int data;
   struct LNode *next;
}LNode,*LinkList;

//bool InitList(LinkList &L)   //����ͷ���
//{
//  L=NULL;
//  return true;
//}
//
//bool Empty(LinkList L)  //�жϵ������Ƿ�Ϊ��
//{
//  if(L==NULL)
//	  return (L==NULL);
//
//}

bool InitList(LinkList &L)
{
  L=(LNode *)malloc(sizeof(LNode));
  if(L==NULL)  //�ڴ治��������ʧ��
	  return false;
  L->next=NULL;
  return true;
}

bool Empty(LinkList L)
{
	if(L->next==NULL)
		return (L->next==NULL);

}


//�ڵ�i��λ�ò���Ԫ��e����ͷ��㣩
bool ListInsert(LinkList &L,int i,int e)
{
	if(i<1)
		return false;
	LNode *p; //pָ��ǰɨ�浽�Ľ��
	int j=0;  //pָ����ǵڼ������
	p=L;      //Lָ��ͷ��㣬��0����㣨�������ݣ�
	while(p!=NULL && j<i-1)//�ҵ���i-1�����
	{
		p=p->next;
		j++;
	}
	/*if(p==NULL)
		return false;
	LNode *s=(LNode*)malloc(sizeof(LNode));
	s->data=e;
	s->next=p->next;
	p->next=s;
	return true;*/
	return InsertNextNode(p,e);
}

//��p���֮�����Ԫ��e
bool InsertNextNode(LNode *p,int e)
{
   if(p==NULL)
	   return false;
   LNode *s=(LNode *)malloc(sizeof(LNode));
	   if(s==NULL)
		   return false;
	   s->data=e;
	   s->next=p->next;
	   p->next=s;
	   return true;
}

//ǰ���������p���֮ǰ����Ԫ��e   ���Ǻ�壬����������ֵ����
bool InsertPriorNode(LNode *p,int e)
{
  if(p==NULL)
	  return false;
  LNode *s=(LNode *)malloc(sizeof(LNode));
	  if(s==NULL)
		  return false;
	  s->data=p->data;
	  p->data=e;
	  s->next=p->next;
	  p->next=s;
	  return true;
}

//ɾ��λ��Ϊi�Ľ��
bool ListDelete(LinkList &L,int i,int &e)
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
   }                                //�ҵ�i-1���
   if(p==NULL)
	   return false;
   if(p->next==NULL)
	   return false;
   LNode *q=p->next;
   e=q->data;
   p->next=q->next;
   free(q);
   return true;
}

//ɾ��ָ�����p     ���p�����һ�������bug
bool DeleteNode(LNode *p)
{
   if(p==NULL)
	   return false;
   LNode *q=p->next;
   p->data=p->next->data;
   p->next=q->next;
   free(q);
   return true;
}

//��λ���ң����ص�i��Ԫ��
LNode *GetElem(LinkList L,int i)
{
  if(i<0)
	  return NULL;
  LNode *p;
  int j=0;
  p=L;
  while(p!=NULL && j<i)
  {
	  p=p->next;
	  j++;
  }
  return p;
}

//��ֵ����
LNode * LocateElem(LinkList L,int e)
{
   LNode *p=L->next ;
   while(p !=NULL && p->data !=e)
	   p=p->next;
   return p;
}

//���
int Length(LinkList L)
{
  int len=0;
  LNode *p=L;
  while(p->next !=NULL)
  {
	  p=p->next;
      len++;
  }
  return len;
}
int main()
{
	LinkList L;//����һ��ָ�������ָ��
	InitList(L);

  return 0;
}