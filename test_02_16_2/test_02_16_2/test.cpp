#include <iostream>
using namespace std;
#include <string>
#include <ctime>

//������ʦ��ÿ����ʦ��5��ѧ������ӡѧ���������ͷ���
struct Student
{
	string name;
	int score;
};

struct Teacher
{
	string tname;
	struct Student sArray[5];
};

void allocateSpace(struct Teacher tArray[],int len)
{
	char nameSeed[]="ABCDE";
	//string nameSeed="ABCDE";
	for(int i=0;i<len;i++)
	{
		tArray[i].tname="Teacher_";
		tArray[i].tname+=nameSeed[i];
		for(int j=0;j<5;j++)
		{
			tArray[i].sArray[j].name="Student_";
			tArray[i].sArray[j].name+=nameSeed[j];

			int random=rand()%61+40;    //40`100
			tArray[i].sArray[j].score=random;
		}
	}
}

void print(struct Teacher tArray[],int len)
{
	for(int i=0;i<len;i++)
	{
		cout<<"��ʦ������"<<tArray[i].tname<<endl;
		for(int j=0;j<5;j++)
		{
			cout<<"\tѧ��������"<<tArray[i].sArray[j].name<<" ���Է�����"<<tArray[i].sArray[j].score<<endl;
		}
	}

}

int main()
{
	
	srand((unsigned int )time(NULL));

	struct Teacher tArray[3];
	int len=sizeof(tArray)/sizeof(tArray[0]);
	allocateSpace(tArray,len);
	print(tArray,len);

	system("pause");
	return 0;
}