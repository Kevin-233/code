#include <stdio.h>
#include <math.h>
//���100-200֮�������

int Is_prime(int i)
{
	int n=0;
  for(n=2;n<sqrt(i);n++)   //һ�������Էֽ�Ϊ a=b*c����b��cȡ���ֵ�������b=c=����a
	 {
		 if(0==i%n)
		  return 0;
	     
    }
  return 1;
}
int main()
{
	int i=0;
	for(i=101;i<=200;i+=2)  //i���Դ�101��ʼ����������2����Ϊż��һ����������
	{
		
	  if(1==Is_prime(i))
		  printf("%d ",i);
	  
	
	}
	printf("\n");
  return 0;
}