#include <stdio.h>

typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild,*rchild;

}BiTNode,*BiTree;

//���������������������ͺ������
void PreOreder(BiTree T)
{
  if(T!=NULL)
  {
    visit(T);
	PreOrder(T->lchild);
	PreOrder(T->rchild);
  }
}

//��α���,�ö���ʵ��
void leverOrder(BiTree T)
{
  InitQueue(Q);
  BiTree p;
  EnQueue(Q,T);
  while(!isEmpty(Q))
  {
    DeQueue(Q,P);
	visit(P);
	if(p->lchild!=NULL)
		EnQueue(Q,p->lchild);
	if(p->rchild!=NULL)
		EnQueue(Q,p->rchild);
  }
}

int main()
{
   
	return 0;
}