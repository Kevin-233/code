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
	int size;     //ͨѶ¼����Ա����
};

void menu()
{
	cout<<"*************************"<<endl;
	cout<<"***** 1�������ϵ�� *****"<<endl;
	cout<<"***** 2����ʾ��ϵ�� *****"<<endl;
	cout<<"***** 3��ɾ����ϵ�� *****"<<endl;
	cout<<"***** 4��������ϵ�� *****"<<endl;
	cout<<"***** 5���޸���ϵ�� *****"<<endl;
	cout<<"***** 6�������ϵ�� *****"<<endl;
	cout<<"***** 0���˳�ͨѶ¼ *****"<<endl;
	cout<<"*************************"<<endl;
}

void addPerson(Addressbooks *abs)
{
	if(abs->size>=MAX)
	{
		cout<<"ͨѶ¼�������޷����"<<endl;
		return ;
	}
	else
	{
		string name;
		cout<<"������������"<<endl;
		cin>>name;
		abs->Parr[abs->size].name=name;

		cout<<"�������Ա�"<<endl;
		cout<<"1--��"<<endl;
		cout<<"2--Ů"<<endl;
		int gender=0;
		while(1)
		{
			cin>>gender;
			if(gender==1||gender==2)
			{
				abs->Parr[abs->size].gender=gender;
				break;
			}
			cout<<"������������������";
		}

		cout<<"���������䣺"<<endl;
		int age=0;
		cin>>age;
		abs->Parr[abs->size].age=age;

		cout<<"��������ϵ�绰��"<<endl;
		string phone="";
		cin>>phone;
		abs->Parr[abs->size].phone=phone;

		cout<<"�������ͥסַ��"<<endl;
		string address;
		cin>>address;
		abs->Parr[abs->size].addr=address;

		abs->size++;
		cout<<"��ӳɹ�"<<endl;
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
		cout<<"��ǰ��¼Ϊ��"<<endl;
	else
	{
		for(int i=0;i<abs->size;i++)
		{
			cout<<"������"<<abs->Parr[i].name<<"\t";
			cout<<"�Ա�"<<(abs->Parr[i].gender==1?"��":"Ů")<<"\t";
			cout<<"���䣺"<<abs->Parr[i].age<<"\t";
			cout<<"�绰��"<<abs->Parr[i].phone<<"\t";
			cout<<"סַ��"<<abs->Parr[i].addr<<endl;;
		}
	}
	system("pause");
	system("cls");
}



void deletePerson(Addressbooks*abs)
{
	cout<<"������Ҫɾ������ϵ��"<<endl;
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
		cout<<"ɾ���ɹ�"<<endl;
	}
	else
		cout<<"���޴���"<<endl;
	system("pause");
	system("cls");
}

void findPerson(Addressbooks*abs)
{
	cout<<"������Ҫ���ҵ���ϵ��"<<endl;
	string name;
	cin>>name;
	int ret=isExist(abs,name);
	if(ret!=-1)
	{
		cout<<"������"<<abs->Parr[ret].name<<"\t";
			cout<<"�Ա�"<<(abs->Parr[ret].gender==1?"��":"Ů")<<"\t";
			cout<<"���䣺"<<abs->Parr[ret].age<<"\t";
			cout<<"�绰��"<<abs->Parr[ret].phone<<"\t";
			cout<<"סַ��"<<abs->Parr[ret].addr<<endl;
	}
	else
		cout<<"���޴���"<<endl;
	system("pause");
	system("cls");
}

void modifyPerson(Addressbooks*abs)
{
	cout<<"������Ҫ�޸ĵ���ϵ��"<<endl;
	string name;
	cin>>name;
	int ret=isExist(abs,name);
	if(ret!=-1)
	{
		string name;
		cout<<"������������"<<endl;
		cin>>name;
		abs->Parr[ret].name=name;

		cout<<"�������Ա�"<<endl;
		cout<<"1--��"<<endl;
		cout<<"2--Ů"<<endl;
		int gender=0;
		while(1)
		{
			cin>>gender;
			if(gender==1||gender==2)
			{
				abs->Parr[ret].gender=gender;
				break;
			}
			cout<<"������������������";
		}

		cout<<"���������䣺"<<endl;
		int age=0;
		cin>>age;
		abs->Parr[ret].age=age;

		cout<<"��������ϵ�绰"<<endl;
		string phone="";
		cin>>phone;
		abs->Parr[ret].phone=phone;

		cout<<"�������ͥסַ��"<<endl;
		string address;
		cin>>address;
		abs->Parr[ret].addr=address;

		cout<<"�޸ĳ�"<<endl;
	}
	else
	{
		cout<<"���޴���"<<endl;
	}
	system("pause");
	system("cls");
}

void cleanPerson(Addressbooks *abs)
{
	abs->size=0;
	cout<<"ͨѶ¼�����"<<endl;
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
		cout<<"��ӭ�´�ʹ��"<<endl;
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