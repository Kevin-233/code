#include <iostream>
using namespace std;
#include <string>

struct Student
{
	string name;
	int age;
	int score;
}s3;

struct teacher
{
	int id;
	int age;
	string name;
	struct Student s1;
};

void print(struct Student *p)
{
	p->age=100;
	cout<<p->age<<endl;
}

int main()
{
	/*struct Student s1;
	s1.name="����";
	s1.age=18;
	s1.score=80;
	cout<<"����"<<s1.name<<s1.age <<s1.score<<endl;

	struct Student *p=&s1;
	cout<<"����"<<p->name<<"����"<<p->age<<"����"<<p->score<<endl;

	struct Student s2={"����",19,90};
	cout<<"����"<<s2.name<<s2.age<<s2.score<<endl;

	s3.name="����";
	s3.age=20;
	s3.score=100;

	cout<<"����"<<s3.name<<s3.age<<s3.score<<endl;
*/
/*
	struct teacher t;
	t.age=50;
	t.id=1000;
	t.name="����";
	t.s1.age=18;
	t.s1.name="С��";
	cout<<"��ʦ������"<<t.name<<"��ʦ��id"<<t.id<<"��ʦ������"<<t.age<<"��ʦѧ��������"<<t.s1.name<<"��ʦѧ��������"<<t.s1.age<<endl;*/

	struct Student stu={"����",18,100};
	print(&stu);

	system("pause");
	return 0;
}
