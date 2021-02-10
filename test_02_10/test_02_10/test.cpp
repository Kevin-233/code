#include <stdio.h>

//直接插入排序
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void InsertSort(int arr[],int size)
{
	int i,j;
  for(i=1;i<size;i++)
  {
	if(arr[i-1]>arr[i])
	{
		int temp=arr[i];
		for(j=i-1;j>=0 && arr[j]>temp;j--)
			arr[j+1]=arr[j];
		arr[j+1]=temp;
	}

  }
}

int main()
{
	int arr[]={9,18,27,6,25,44,3,12,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	printf("数组大小为：%d\n",size);
	display(arr,size);         //排序前
	InsertSort(arr,size);
	display(arr,size);         //排序后  

  return 0;
}