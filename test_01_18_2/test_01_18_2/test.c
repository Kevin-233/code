#include <stdio.h>

//����ָ������
void menu()
{
  printf("*****************************\n");
  printf("**   1.Add      2.Sub      **\n");
  printf("**   3.Mul      4.Div      **\n");
  printf("**         0.exit          **\n");
  printf("*****************************\n");
}
int Add(int x,int y)
{
   return x+y;
}
int Sub(int x,int y)
{
   return x-y;
}
int Mul(int x,int y)
{
   return x*y;
}
int Div(int x,int y)
{
   return x/y;
}
int main()
{
	
	int input=0;
	int x=0;
	int y=0;
	
	int ret=0;
	int (*p[])(int ,int )={0,Add,Sub,Mul,Div};//���庯��ָ������
	do
	{
	  menu();
	  printf("��ѡ��>");
	  scanf("%d",&input);
	  if(input>=1&&input<=4)
	  {
	    printf("������������������>");
	    scanf("%d%d",&x,&y);
		ret=(*p[input])(x,y);//�˴����ɿ���дΪ p[input](x,y)����Ϊ�˴���*����ʵ�����壬һ��*����*����û�ж�һ��
		printf("%d\n",ret);
	  }
	  else if(input==0)
		  {
			  printf("�˳�\n");
          
	      }
	  else 
	  {
	    printf("�������,����������:\n");
		
	  }
	}while(input);
  return 0;
}