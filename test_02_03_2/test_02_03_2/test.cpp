#include <stdio.h>
#include <malloc.h>


typedef struct LNode
{
	int data;
    struct LNode *next;

}LNode,*LinkList;

//bool InitList(LinkList &L)  //不带头结点
//{
//  L=NULL;
//  return true;
//}
//
////判空
//int Empty(LinkList &L,int &e)
//{
//  if(L==NULL)
//	  return e=1;
//  else
//	  return e=-1;
//}

//带头结点
bool InitList(LinkList &L)
{
  L=(LNode*)malloc(sizeof(LNode));
  if(L==NULL)
	  return false;
  L->next=NULL;
   return true;
}

//第i个结点插入元素e
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
	}                        //找到i-1元素
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
		printf("空\n");
	else
		printf("非空\n");*/
	ListInsert(L,2,e);

  return 0;
}