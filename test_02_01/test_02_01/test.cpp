void Del_X_1(LinkList &L,int x)
{
  LNode *p=L->next,*pre=L,*q;
  while(p!=NULL)
  {
    if(p->data=x)
	{
	  q=p;
	  p=p->next;
	  pre->next=p;
	  free(p);
	}
	else
	{
	  pre=p;
	  p=p->next;
	}
  
  }
  
}