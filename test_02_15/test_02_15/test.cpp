#include <iostream>
using namespace std;
#include <algorithm>

//int arr[100];

//struct Student
//{
//	int number;
//	int score;
//};
//
//Student arr1[100];
//
//bool Compare(Student x,Student  y)
//{
//	if(x.score==y.score)
//		return x.number<y.number;
//	else
//		return x.score<y.score;
//}

int arr[10];

bool Compare(int x,int y)
{
	if(x%2==1 && y%2==1)
		return y < x;
	else if(x%2==0 && y%2==0)
		return x<y;
	else if(x%2==1 && y%2==0)
		return true;
	else 
		return false;

}

int main()
{
	////C++中自带的排序函数，快速排序
	//内定义类型：如：4<5
	//int n;
	//while(scanf("%d",&n)!=EOF)
	//{
	//	for(int i=0;i<n;i++)
	//		scanf("%d",&arr[i]);
	//	sort(arr,arr+n);
	//	for(int i=0;i<n;i++)
	//		printf("%d ",arr[i]);
	//	printf("\n");
	//}

	//自定义类型：如：类比较，在分数相同的情况下学号小的在前面，若分数不同则按分数从小到大排序
	//int n;
	//scanf("%d",&n);
	//for(int i=0;i<n;i++)
	//{
	//	scanf("%d%d",&arr1[i].number,&arr1[i].score);
	//}
	//sort(arr1,arr1+n,Compare);  //自定义一个比较函数
	//for(int i=0;i<n;i++)
	//{
	//	printf("%d %d\n",arr1[i].number,arr1[i].score);
	//}

	//奇数排前面，偶数排后面，奇数递减排，偶数递增排
	while(scanf("%d",&arr[0])!=EOF)
	{
		for(int i=1;i<10;i++)
			scanf("%d",&arr[i]);
		sort(arr,arr+10,Compare);
	for(int i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	}

	system("pause");
	return 0;
}