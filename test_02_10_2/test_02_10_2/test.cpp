#include <stdio.h>

//折半查找

int BinarySearch(int arr[],int size,int e)
{
	int left=0;
	int right=size-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(arr[mid]>e)
			right=mid-1;
		else if(arr[mid]<e)
			left=mid+1;
		else
			return mid;
		  
	}
	if(left>right)
	 return -1;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9};
    int e=8;                             //要查找的元素
	int size=sizeof(arr)/sizeof(arr[0]);
	int ret=BinarySearch(arr,size,e);
	if(ret!=-1)
		printf("找到了！\n");
	else
		printf("没找到！\n");

  return 0;
}