#include <stdio.h>
#include <malloc.h>

typedef struct LinkNode
{
  int data;
  struct LinkNode *next;
}LinkNode;

typedef struct
{
  LinkNode *front,*rear;
}LinkQueue;

void InitQueue(LinkQueue &Q)
{
	Q.front=Q.rear =(LinkNode*)malloc(sizeof(LinkNode));
    Q.front->next=NULL;
}

bool IsEmpty(LinkQueue Q)
{
	if(Q.front==Q.rear)
		return true;
	else
		return false;
}

void EnQueue(LinkQueue &Q,int x)
{
  LinkNode *s=(LinkNode *)malloc(sizeof(LinkNode));
  s->data=x;
  s->next=NULL;
  Q.rear->next =s;  //新结点插入到rear之后
  Q.rear=s;         //修改表尾指针
}
int main()
{
	LinkQueue Q;
	InitQueue(Q);

  return 0;	 
}