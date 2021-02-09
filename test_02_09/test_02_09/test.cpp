#include <stdio.h>

typedef struct BiTNode
{
	int data;
	struct BiTNode *lchild,*rchild;

}BiTNode,*BiTree;

//先序遍历，还有中序遍历和后序遍历
void PreOreder(BiTree T)
{
  if(T!=NULL)
  {
    visit(T);
	PreOrder(T->lchild);
	PreOrder(T->rchild);
  }
}

//层次遍历,用队列实现
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