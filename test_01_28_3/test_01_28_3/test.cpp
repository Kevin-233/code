#include <stdio.h>
//�������е�Ԫ������pλ���������룺1 2 3 4 5������2λ�����3 4 5 1 2
//˼�룺�������Ϊ�������飬����������ֱ������ٽ�������������

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
	printf("����%dλ\n",p);
	LeftMove(arr,p,n);
	for(int i=0;i<n;i++)
	{
	   printf("%d ",arr[i]);
	}

  return 0;
}