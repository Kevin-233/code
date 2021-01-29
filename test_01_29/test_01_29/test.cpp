#include <stdio.h>
#include <stdlib.h>
void InsertNextNode();

typedef struct LNode
{
   int data;
   struct LNode *next;
}LNode,*LinkList;

//bool InitList(LinkList &L)   //不带头结点
//{
//  L=NULL;
//  return true;
//}
//
//bool Empty(LinkList L)  //判断单链表是否为空
//{
//  if(L==NULL)
//	  return (L==NULL);
//
//}

bool InitList(LinkList &L)
{
  L=(LNode *)malloc(sizeof(LNode));
  if(L==NULL)  //内存不足则会分配失败
	  return false;
  L->next=NULL;
  return true;
}

bool Empty(LinkList L)
{
	if(L->next==NULL)
		return (L->next==NULL);

}


//在第i个位置插入元素e（带头结点）
bool ListInsert(LinkList &L,int i,int e)
{
	if(i<1)
		return false;
	LNode *p; //p指向当前扫面到的结点
	int j=0;  //p指向的是第几个结点
	p=L;      //L指向头结点，第0个结点（不存数据）
	while(p!=NULL && j<i-1)//找到第i-1个结点
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

//在p结点之后插入元素e
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

//前插操作：在p结点之前插入元素e   还是后插，但交换结点的值即可
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

//删除位序为i的结点
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
   }                                //找到i-1结点
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

//删除指定结点p     如果p是最后一个结点会出bug
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

//按位查找，返回第i个元素
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

//按值查找
LNode * LocateElem(LinkList L,int e)
{
   LNode *p=L->next ;
   while(p !=NULL && p->data !=e)
	   p=p->next;
   return p;
}

//求表长
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
	LinkList L;//声明一个指向单链表的指针
	InitList(L);

  return 0;
}