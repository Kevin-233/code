#include <iostream>
using namespace std;
#include <ctime>

int main()
{
	//������
	//srand((unsigned int)time(NULL));
	//int num=rand()%100+1;
	//int a=0;
	//while(1)
	//{
	//	cin>>a;
	//	if(a>num)
	//		cout<<"�²����"<<endl;
	//	else if(a<num)
	//		cout<<"�²��С"<<endl;
	//	else
	//	{
	//		cout<<"�¶���"<<endl;
	//		break;
	//	}
	//}

	//ˮ�ɻ���
	//int num=100;
	//do
	//{
	//	int a=num%10;
	//	int b=(num/10)%10;
	//	int c=(num/100);
	//	if(num==a*a*a+b*b*b+c*c*c)
	//	{
	//		cout<<num<<endl;
	//	}
	//	num++;
	//
	//}while(num<1000);

	for(int i=1;i<=9;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<"*"<<i<<"="<<i*j<<" ";
		}
		cout<<endl;
	
	}
	


	system("pause");
	return 0;
}