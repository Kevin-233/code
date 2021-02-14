#include <stdio.h>
#include <stdlib.h>

//直接选择排序
//最终为升序序列
void SelectSort(int arr[],int size)
{
	int i,j,min,temp;
	for(i=0;i<size-1;i++)
	{	
		min=i;
		for(j=i+1;j<size;j++)
			if(arr[j]<arr[min])
				min=j;
		if(min!=i)
		{
			temp=arr[min];
             arr[min]=arr[i];
			 arr[i]=temp;
		}

	}

}

int main()
{
	int arr[]={3,1,5,3,4,2};
	int size=sizeof(arr)/sizeof(arr[0]);
	SelectSort(arr,size);
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);

	system("pause");

	return 0;
}