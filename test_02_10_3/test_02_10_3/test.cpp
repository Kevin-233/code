#include <stdio.h>

//’€∞Î≤È’“≈≈–Ú
void display(int arr[],int size)
{
	for(int i=0;i<size;i++)
		printf("%d ",arr[i]);
	printf("\n");
}

void BiSearchSort(int arr[],int size)
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
	  for(j=i;j>left;j--)
		  arr[j]=arr[j-1];
	  arr[left]=temp;
	}
	  

}

int main()
{
	int arr[]={5,4,3,2,1};
	int size=sizeof(arr)/sizeof(arr[0]);
	display(arr,size);
	BiSearchSort(arr,size);
	display(arr,size);

  return 0;
}

