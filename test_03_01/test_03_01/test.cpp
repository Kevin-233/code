//#include <iostream>
//#include<algorithm>
//
//using namespace std;
//
//int arr[100];
//
//int main()
//{
//	int n;
//	while(scanf("%d",&n)!=EOF)
//	{
//		for(int i=0;i<n;i++)
//			scanf("%d",&arr[i]);
//		sort(arr,arr+n);
//		for(int i=0;i<n;i++)
//			printf("%d ",arr[i]);
//		printf("\n");
//	}
//
//	system("pause");
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//void bisort(int arr[],int size)
//{
//	int i,j;
//	for(i=1;i<size;i++)
//	{
//		int left=0;
//		int right=i-1;
//		int temp=arr[i];
//		while(left<=right)
//		{
//			int mid=(left+right)/2;
//			if(arr[mid]>temp)
//				right=mid-1;
//			else
//				left=mid+1;
//		}
//		for(j=i;j>left;j--)
//			arr[j]=arr[j-1];
//		arr[left]=temp;
//	}
//
//}
//
//int main()
//{
//	int arr[]={5,4,3,2,1};
//	int size=sizeof(arr)/sizeof(arr[0]);
//	bisort(arr,size);
//	for(int i=0;i<size;i++)
//		printf("%d ",arr[i]);
//	printf("\n");
//
//	system("pause");
//	return 0;
//}

//   #include <stdio.h>
//#include<stdlib.h>
//   
//   void bubblesort(int arr[],int size)
//   {
//     for(int i=0;i<size-1;i++)
//     {
//       bool flag=false;
//        for(int j=0;j<size-i-1;j++)
//           {
//            if(arr[j]>arr[j+1])
//            {
//              int temp=arr[j];
//              arr[j]=arr[j+1];
//              arr[j+1]=temp;
//              flag=true;
//            }
//          }
//      if(flag==false)
//          return ;
//  
//    }
//  
//  }
//  
//  int main()
//  {
//    int arr[]={5,4,3,2,1};
//    int size=sizeof(arr)/sizeof(arr[0]);
//    bubblesort(arr,size);
//    for(int i=0;i<size;i++)
//          printf("%d ",arr[i]);
//    printf("\n");
//  
//	system("pause");
//    return 0;
//  }

 #include<stdio.h>
#include <stdlib.h>
   int Partition(int arr[],int left,int right)
   {
     int pivot=arr[left];
     while(left<right)
    {
           while(left<right && arr[right]>=pivot)
            right--;
          arr[left]=arr[right];
          while(left<right && arr[left]<=pivot)
            left++;
          arr[right]=arr[left];
   }
     arr[left]=pivot;
     return left;
  }
  
  void Quicksort(int arr[],int left,int right)
  {
    if(left<right)
	{
	  int position=Partition(arr,left,right);
    Quicksort(arr,left,position-1);
    Quicksort(arr,position+1,right);
	}
  
  }
  
  int main()
  {
    int arr[]={5,7,5,8,6,9,1,4,3};
    int size=sizeof(arr)/sizeof(arr[0]);
    int left=0;
    int right=size-1;
    Quicksort(arr,left,right);
    for(int i=0;i<size;i++)
         printf("%d ",arr[i]);
    printf("\n");
  
	system("pause");
    return 0;
  }

       