#include<iostream>
using namespace std;

int *func()
{
	int *p=new int (10); //堆区开辟，指针在栈区 new返回的是指针
	return p;
}

void test1()
{
	int *p=func();
	cout<<*p<<endl;
	cout<<*p<<endl;
	delete p;
	cout<<*p<<endl;
}

void test2()
{
	int *arr=new int [10];
	for(int i=0;i<10;i++)
		arr[i]=i;
	for(int i=0;i<10;i++)
		cout<<arr[i]<<endl;
	delete [] arr;
}

void test3()
{
	int a=10;
	int &b=a;
	b=20;
	cout<<a<<endl;
}

void test4()
{
	int a=10;
	int &b=a; //引用必须初始化,且不能更改
	int c=20;
	b=c;
	cout<<a<<endl;
	cout<<b<<endl;
	cout<<c<<endl;
}

int& test5()
{
	int a=10;
	return a;
}

int& test6()
{
	static int a=10;
	return a;
}

int main()
{
	//test1();
	//test2();
	//test3();
	//test4();
	/*int &ref=test5();
	cout<<ref<<endl;
	cout<<ref<<endl;*/
	int &ref=test6();
	cout<<ref<<endl;
	cout<<ref<<endl;
	test6()=100;
	cout<<ref<<endl;

	system("pause");
	return 0;
}