#include <stdio.h>

//���ú�����ӡ��1000��2000��֮�������

int leap_year(int n)
{	
	if((n%4==0&&n%100!=0)||n%400==0) 
		return 1;
	else 
		return 0;
}
	int main()
{
	int i=0;
	for(i=1000;i<=2000;i++)
	{
	   if(1==leap_year(i))
		   printf("%d ",i);
	}

  return 0;
}