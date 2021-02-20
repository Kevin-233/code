#include <iostream>
using namespace std;
#include <string>
#define MAX 1000

struct Person
{
	string name;
	int gender;
	int age;
	string phone;
	string addr;
};

struct Addressbooks
{
	struct Person Parr[MAX];
	int size;     //通讯录中人员个数
};

void menu()
{
	cout<<"*************************"<<endl;
	cout<<"***** 1、添加联系人 *****"<<endl;
	cout<<"***** 2、显示联系人 *****"<<endl;
	cout<<"***** 3、删除联系人 *****"<<endl;
	cout<<"***** 4、查找联系人 *****"<<endl;
	cout<<"***** 5、修改联系人 *****"<<endl;
	cout<<"***** 6、清空联系人 *****"<<endl;
	cout<<"***** 0、退出通讯录 *****"<<endl;
	cout<<"*************************"<<endl;
}

void addPerson(Addressbooks *abs)
{
	if(abs->size>=MAX)
	{
		cout<<"通讯录已满，无法添加"<<endl;
		return ;
	}
	else
	{
		string name;
		cout<<"请输入姓名："<<endl;
		cin>>name;
		abs->Parr[abs->size].name=name;

		cout<<"请输入性别："<<endl;
		cout<<"1--男"<<endl;
		cout<<"2--女"<<endl;
		int gender=0;
		while(1)
		{
			cin>>gender;
			if(gender==1||gender==2)
			{
				abs->Parr[abs->size].gender=gender;
				break;
			}
			cout<<"输入有误，请重新输入";
		}

		cout<<"请输入年龄："<<endl;
		int age=0;
		cin>>age;
		abs->Parr[abs->size].age=age;

		cout<<"请输入联系电话："<<endl;
		string phone="";
		cin>>phone;
		abs->Parr[abs->size].phone=phone;

		cout<<"请输入家庭住址："<<endl;
		string address;
		cin>>address;
		abs->Parr[abs->size].addr=address;

		abs->size++;
		cout<<"添加成功"<<endl;
		system("pause");
		system("cls");
	}
}

int isExist(Addressbooks *abs,string name)
{
	for(int i=0;i<abs->size;i++)
	{
		if(abs->Parr[i].name==name)
			return i;
	}
	return -1;
}

void showPerson(Addressbooks*abs)
{
	if(abs->size==0)
		cout<<"当前记录为空"<<endl;
	else
	{
		for(int i=0;i<abs->size;i++)
		{
			cout<<"姓名："<<abs->Parr[i].name<<"\t";
			cout<<"性别："<<(abs->Parr[i].gender==1?"男":"女")<<"\t";
			cout<<"年龄："<<abs->Parr[i].age<<"\t";
			cout<<"电话："<<abs->Parr[i].phone<<"\t";
			cout<<"住址："<<abs->Parr[i].addr<<endl;;
		}
	}
	system("pause");
	system("cls");
}



void deletePerson(Addressbooks*abs)
{
	cout<<"请输入要删除的联系人"<<endl;
	string name;
	cin>>name;
	int ret=isExist(abs,name);
	if(ret!=-1)
	{
		for(int i=ret;i<abs->size;i++)
		{
			abs->Parr[i]=abs->Parr[i+1];
			abs->size--;
		}
		cout<<"删除成功"<<endl;
	}
	else
		cout<<"查无此人"<<endl;
	system("pause");
	system("cls");
}

void findPerson(Addressbooks*abs)
{
	cout<<"请输入要查找的联系人"<<endl;
	string name;
	cin>>name;
	int ret=isExist(abs,name);
	if(ret!=-1)
	{
		cout<<"姓名："<<abs->Parr[ret].name<<"\t";
			cout<<"性别："<<(abs->Parr[ret].gender==1?"男":"女")<<"\t";
			cout<<"年龄："<<abs->Parr[ret].age<<"\t";
			cout<<"电话："<<abs->Parr[ret].phone<<"\t";
			cout<<"住址："<<abs->Parr[ret].addr<<endl;
	}
	else
		cout<<"查无此人"<<endl;
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks*abs)
{
	cout<<"请输入要修改的联系人"<<endl;
	string name;
	cin>>name;
	int ret=isExist(abs,name);
	if(ret!=-1)
	{
		string name;
		cout<<"请输入姓名："<<endl;
		cin>>name;
		abs->Parr[ret].name=name;

		cout<<"请输入性别："<<endl;
		cout<<"1--男"<<endl;
		cout<<"2--女"<<endl;
		int gender=0;
		while(1)
		{
			cin>>gender;
			if(gender==1||gender==2)
			{
				abs->Parr[ret].gender=gender;
				break;
			}
			cout<<"输入有误，请重新输入";
		}

		cout<<"请输入年龄："<<endl;
		int age=0;
		cin>>age;
		abs->Parr[ret].age=age;

		cout<<"请输入联系电话"<<endl;
		string phone="";
		cin>>phone;
		abs->Parr[ret].phone=phone;

		cout<<"请输入家庭住址："<<endl;
		string address;
		cin>>address;
		abs->Parr[ret].addr=address;

		cout<<"修改成"<<endl;
	}
	else
	{
		cout<<"查无此人"<<endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks *abs)
{
	abs->size=0;
	cout<<"通讯录已清空"<<endl;
	system("pause");
	system("cls");
}

int main()
{
	setlocale(LC_ALL,"");

	Addressbooks abs;
	abs.size=0;
	int select=0;
	while(1)
	{
	menu();
	cin>>select;
	switch(select)
	{
	case 1:
		addPerson(&abs);
		break;
	case 2:
		showPerson(&abs);
		break;
	case 3:
		deletePerson(&abs);
		break;
	case 4:
		findPerson(&abs);
		break;
	case 5:
		modifyPerson(&abs);
		break;
	case 6:
		cleanPerson(&abs);
		break;
	case 0:
		cout<<"欢迎下次使用"<<endl;
		system("pause");
		return 0;
		break;
	default:
		break;
	}
	}

	system("pause");
	return 0;
}