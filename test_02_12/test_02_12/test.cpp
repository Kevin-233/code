#include <stdio.h>

void display(int arr[],int size)
{
	for(int i=1;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

//不使用哨兵
//void InsertSort(int arr[],int size)
//{
//	int i,j,temp;
//	for(i=1;i<size;i++)
//	{
//		temp=arr[i];
//		for(j=i-1;j>=0 && arr[j]>temp;j--)
//			arr[j+1]=arr[j];
//		arr[j+1]=temp;
//	}
//}
//
////使用哨兵
//void SentrySort(int arr[],int size)
//{
//	int i,j;
//	for(i=2;i<size;i++)
//	{
//		arr[0]=arr[i];
//		for(j=i-1;arr[j]>arr[0];j--)
//			arr[j+1]=arr[j];
//		arr[j+1]=arr[0];
//	}
//}

//折半查找排序
void BInsertSort(int arr[],int size)
{
	int i,j,low,high,mid;
	for(i=2;i<size;i++)
	{
		low=1;
		high=i-1;
		arr[0]=arr[i];
		while(low<=high)
		{
			mid=(low+high)/2;
			if(arr[mid]>arr[0])
				high=mid-1;
			else
				low=mid+1;
		} //high+1就是插入位置
		for(j=i-1;j>=high+1;j--)
			arr[j+1]=arr[j];
    	arr[high+1]=arr[0];
	}
	
}

int main()
{
	int arr[]={0,5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	display(arr,size);
	//SentrySort(arr,size);
	//InsertSort(arr,size);
	BInsertSort(arr,size);
	display(arr,size);

	return 0;
}