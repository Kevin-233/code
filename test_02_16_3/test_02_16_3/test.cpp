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
		{"����",22,"��"},
		{"����",21,"��"},
		{"�ŷ�",20,"��"},
		{"����",19,"��"},
		{"����",18,"Ů"}
	};
	int size=sizeof(arr)/sizeof(arr[0]);
		BubbleSort(arr,size);
		for(int i=0;i<size;i++)
		{
			cout<<"������"<< arr[i].name<<"����"<<arr[i].age<<"�Ա�"<<arr[i].gender<<endl;
		
		}

	system("pause");
	return 0;
}