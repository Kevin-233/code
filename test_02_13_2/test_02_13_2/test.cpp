#include <stdio.h>

//р╩лкеепР
int Partition(int arr[],int low,int high)
{
	int pivot=arr[low];
	while(low<high)
	{
		while(low<high && arr[high]>=pivot)
			high--;
		arr[low]=arr[high];
		while(low<high && arr[low]<=pivot)
			low++;
		arr[high]=arr[low];
	}
	arr[low]=pivot;
	return low;
}

void QuickSort(int arr[],int low,int high)
{
	if(low<high)
	{
		int pivotpos=Partition(arr,low,high);
		QuickSort(arr,low,pivotpos-1);
		QuickSort(arr,pivotpos+1,high);
	}

}

int main()
{
	int arr[]={5,7,5,8,6,9,1,4,3};
	int size=sizeof(arr)/sizeof(arr[0]);
	QuickSort(arr,0,size-1);
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);

	return 0;
}