
//�ݹ�ʵ���ڵ�������ɾ��ֵΪx�Ľ��

void Del_X_3(LinkList & L,int x)
{
	LNode *p;
	if(L==NULL)
		return ;
	if(L->data==x)
	{
	  p=L;
	  L=L->next;
	  free(p);
	  Del_X_3(L,x);
	}
	else 
		Del_X_3(L->next,x);

}

int main()
{

  return 0;
}