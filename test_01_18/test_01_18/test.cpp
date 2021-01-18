#include <stdio.h>

//参数是数组的形式
void print1(int arr[3][5],int x,int y)
{
  int i=0;
  for(i=0;i<x;i++)
  {
     int j=0;
	 for(j=0;j<y;j++)
	 {
	    printf("%d ",arr[i][j]);
	 }
    printf("\n");
  }

}
//参数是指针的形式
void print2(int (*p)[5],int x,int y)//数组指针，传参传的是数组的首元素地址，对于二维数组来说想要知道首元素地址就要先把二维数组变成一维数组，即第一行的元素是二维数组的首元素。
{
	int i=0;
  for(i=0;i<x;i++)
  {
     int j=0;
	 for(j=0;j<y;j++)
	 {
	    printf("%d ",*(*(p+i)+j));
      //printf("%d ",p[i][j]);
	  //printf("%d ",*(p[i]+j));
	  //printf("%d ",(*(p+i)[j])); 这四种写法都是等价的
	 }
    printf("\n");
  }

}

int main()
{
	int arr[3][5]={{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
	print1(arr,3,5);
	print2(arr,3,5);
  return 0;
}

//int arr[5]; arr是一个5个元素的整形数组
//int *parr1[10]; parr1是一个数组，数组有10个元素，每个元素的类型是int*，parr1是指针数组
//int (*parr2)[10]; parr2是一个指针，该指针指向一个数组，数组有10个元素，每个元素的类型是int，parr2是数组指针；
//int (*parr3[10])[5];parr3是一个数组，该数组有10个元素，每个元素是一个数组指针，该数组指针指向的数组有5个元素，每个元素是int
