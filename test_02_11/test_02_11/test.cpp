#include <stdio.h>

void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

//二分查找
//int BinarySearch(int arr[],int size,int k)
//{
//	int left,right,mid,;
//		left=0;
//		right=size-1;
//	 while(left<=right)
//	{
//		mid=(left+right)/2;
//		if(arr[mid]>k)
//			right=mid-1;
//		else if(arr[mid]<k)
//			left=mid+1;
//		else
//			return mid;
//	}
//	 return -1;
//}

//直接插入排序
//void InsertSort(int arr[],int size)
//{
//	int i,j,temp;
//	for(i=1;i<size;i++)
//	{
//		temp=arr[i];
//		for(j=i-1;arr[j]>temp && j>=0;j--)
//			arr[j+1]=arr[j];
//		arr[j+1]=temp;
//	}
//}

//折半查找排序
void BSearchSort(int arr[],int size)
{
	int i,j,temp,left,right,mid;
	for(i=1;i<size;i++)
 {
	 left=0;
	 right=i-1;
	 temp=arr[i];
	while(left<=right)
	{
		mid=(left+right)/2;
		if(arr[mid]>temp)
			right=mid-1;
		else
			left=mid+1;
	}
	for(j=i;j>left ;j--)
		arr[j]=arr[j-1];
	arr[left]=temp;

 }
}

int main()
{
	//int arr[]={1,2,3,4,5};
	//int k=2;
	//int size=sizeof(arr)/sizeof(arr[0]);
	
	//int ret=BinarySearch(arr,size,k);
	//printf("%d ",ret);
	//if(ret!=-1)
	//	printf("找到了！");
	//if(ret==-1)
	//	printf("没找到！");
	int arr[]={5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	display(arr,size);
	//InsertSort(arr,size);
	BSearchSort(arr,size);
	display(arr,size);

  return 0;
}