
#include<stdio.h>
int fun(int n)
{
	if(n==1)
		return 1;
	else
		return fun(n-1)*n;//例如5的阶乘就等于(4的阶乘)*5,4的阶乘等于(3的阶乘)*3···
}
int main()
{
	int n;
	int i,sum=0;
	printf("请输入一个大于0的数字:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=fun(i);
	}
	printf("%d的阶乘和为:%d",n,sum);
	return 0;
}