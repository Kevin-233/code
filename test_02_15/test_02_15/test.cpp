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
	////C++���Դ�������������������
	//�ڶ������ͣ��磺4<5
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

	//�Զ������ͣ��磺��Ƚϣ��ڷ�����ͬ�������ѧ��С����ǰ�棬��������ͬ�򰴷�����С��������
	//int n;
	//scanf("%d",&n);
	//for(int i=0;i<n;i++)
	//{
	//	scanf("%d%d",&arr1[i].number,&arr1[i].score);
	//}
	//sort(arr1,arr1+n,Compare);  //�Զ���һ���ȽϺ���
	//for(int i=0;i<n;i++)
	//{
	//	printf("%d %d\n",arr1[i].number,arr1[i].score);
	//}

	//������ǰ�棬ż���ź��棬�����ݼ��ţ�ż��������
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