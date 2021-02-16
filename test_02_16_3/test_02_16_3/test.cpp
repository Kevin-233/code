#include <iostream>
using namespace std;
#include <string>

struct Hero
{
	string name;
	int age;
	string gender;
};

void BubbleSort(struct Hero arr[],int size)
{
	for(int i=0;i<size-1;i++)
	{
		for(int j=0;j<size-i-1;j++)
		{
			if(arr[j].age>arr[j+1].age)
			{
			struct Hero temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}
}

int main()
{
	struct Hero arr[5]=
	{
		{"刘备",22,"男"},
		{"关羽",21,"男"},
		{"张飞",20,"男"},
		{"赵云",19,"男"},
		{"貂蝉",18,"女"}
	};
	int size=sizeof(arr)/sizeof(arr[0]);
		BubbleSort(arr,size);
		for(int i=0;i<size;i++)
		{
			cout<<"姓名："<< arr[i].name<<"年龄"<<arr[i].age<<"性别"<<arr[i].gender<<endl;
		
		}

	system("pause");
	return 0;
}