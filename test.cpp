#include <stdio.h>
#include <stdlib.h>


int fac(int i) //µ›πÈ«Ûn£°
{
	if(i==1)
		return 1;
	else 
		return fac(i-1)*i;
	
}

int main()
{
	int i=0;
	scanf("%d",&i);
	int sum=0;
	int n=0;
	for(n=1;n<=i;n++)
	{
	sum=sum+fac(n);
	}
	printf("%d\n",sum);

  return 0;
}

