//#include <stdio.h>
//
//void display(int arr[],int size)
//{
//	for(int i=1;i<size;i++)
//		printf("%d ",arr[i]);
//	printf("\n");
//}
//
////希尔排序
//void ShellSort(int arr[],int size)
//{
//	int i,j,dk;
//	for(int dk=size/2;dk>=1;dk=dk/2)
//	{
//		for(int i=dk+1;i<=size;i++)
//		{
//			if(arr[i]<arr[i-dk])
//			{
//				arr[0]=arr[i];
//				for(int j=i-dk;j>0 && arr[0]<arr[i];j-=dk)
//					arr[j+dk]=arr[j];
//				arr[j+dk]=arr[0];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[]={0,5,4,3,2,1};
//	int size=sizeof(arr)/sizeof(arr[0]);
//	display(arr,size);
//	ShellSort(arr,size);
//	display(arr,size);
//	
//	
//
//	return 0;
//}
//插入排序————希尔排序（不稳定，空间复杂度为O(1)，最坏时间复杂度为O(n^2)）
#include <stdio.h>
#include <stdlib.h>

//希尔排序算法
void ShellSort(int arr[], int len) {
    int d, i, j;
    //arr[0]只是暂存单元，不是哨兵，当j<=0时，表示到达插入位置
    for (d = len / 2; d >= 1; d /= 2) {         //步长变化，每次取一半
        for (i = d + 1; i <= len; ++i) {        //从每个子表的第二个元素开始进行直接插入排序
            if (arr[i] < arr[i - d]) {          //将arr[i]插入有序增量表
                arr[0] = arr[i];                //将arr[i]暂存在arr[0]中
                for (j = i - d; j > 0 && arr[0] < arr[j]; j -= d)
                    arr[j + d] = arr[j];        //记录后移，查找插入位置
                arr[j + d] = arr[0];            //插入
            }
        }
    }
}

int main() {
    //数组中第0号位置的值不是有效值！
    int arr[] = {0, 49, 38, 65, 97, 76, 13, 27, 49};
    int len = sizeof(arr) / sizeof(int);
    //希尔排序
    ShellSort(arr, len);
    //将已排序的结果逐个输出
    printf("希尔排序结果为：");
    for (int i = 1; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
