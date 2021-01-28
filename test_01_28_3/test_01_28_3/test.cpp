#include <stdio.h>
//将数组中的元素左移p位，例如输入：1 2 3 4 5，左移2位输出：3 4 5 1 2
//思想：将数组分为两个数组，将两个数组分别逆序，再将整个数组逆序

void Reverse(int arr[],int left,int right)
{
	int temp=0;
	while(left<right)
	{
	   temp=arr[left];
	   arr[left]=arr[right];
	   arr[right]=temp;
	   left++;
	   right--;
	}

}

void LeftMove(int arr[],int p,int n)
{
   if(p>n)
	   return ;
   Reverse(arr,0,p-1);
   Reverse(arr,p,n-1);
   Reverse(arr,0,n-1);

}
int main()
{
	int p=0;
	int arr[5]={1,2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	scanf("%d",&p);
	printf("左移%d位\n",p);
	LeftMove(arr,p,n);
	for(int i=0;i<n;i++)
	{
	   printf("%d ",arr[i]);
	}

  return 0;
}