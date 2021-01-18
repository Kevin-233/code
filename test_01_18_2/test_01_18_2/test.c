#include <stdio.h>

//函数指针数组
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
	int (*p[])(int ,int )={0,Add,Sub,Mul,Div};//定义函数指针数组
	do
	{
	  menu();
	  printf("请选择：>");
	  scanf("%d",&input);
	  if(input>=1&&input<=4)
	  {
	    printf("请输入两个操作数：>");
	    scanf("%d%d",&x,&y);
		ret=(*p[input])(x,y);//此处还可可以写为 p[input](x,y)，因为此处的*并无实际意义，一个*两个*或者没有都一样
		printf("%d\n",ret);
	  }
	  else if(input==0)
		  {
			  printf("退出\n");
          
	      }
	  else 
	  {
	    printf("输入错误,请重新输入:\n");
		
	  }
	}while(input);
  return 0;
}