
#include<stdio.h>
int fun(int n)
{
	if(n==1)
		return 1;
	else
		return fun(n-1)*n;//����5�Ľ׳˾͵���(4�Ľ׳�)*5,4�Ľ׳˵���(3�Ľ׳�)*3������
}
int main()
{
	int n;
	int i,sum=0;
	printf("������һ������0������:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=fun(i);
	}
	printf("%d�Ľ׳˺�Ϊ:%d",n,sum);
	return 0;
}