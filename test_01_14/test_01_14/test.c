#include <stdio.h>
#include <math.h>
//输出100-200之间的素数

int Is_prime(int i)
{
	int n=0;
  for(n=2;n<sqrt(i);n++)   //一个数可以分解为 a=b*c，而b、c取最大值的情况是b=c=根号a
	 {
		 if(0==i%n)
		  return 0;
	     
    }
  return 1;
}
int main()
{
	int i=0;
	for(i=101;i<=200;i+=2)  //i可以从101开始，并且自增2，因为偶数一定不是素数
	{
		
	  if(1==Is_prime(i))
		  printf("%d ",i);
	  
	
	}
	printf("\n");
  return 0;
}