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
	s1.name="张三";
	s1.age=18;
	s1.score=80;
	cout<<"张三"<<s1.name<<s1.age <<s1.score<<endl;

	struct Student *p=&s1;
	cout<<"姓名"<<p->name<<"年龄"<<p->age<<"分数"<<p->score<<endl;

	struct Student s2={"李四",19,90};
	cout<<"李四"<<s2.name<<s2.age<<s2.score<<endl;

	s3.name="王五";
	s3.age=20;
	s3.score=100;

	cout<<"王五"<<s3.name<<s3.age<<s3.score<<endl;
*/
/*
	struct teacher t;
	t.age=50;
	t.id=1000;
	t.name="老王";
	t.s1.age=18;
	t.s1.name="小王";
	cout<<"老师的姓名"<<t.name<<"老师的id"<<t.id<<"老师的年龄"<<t.age<<"老师学生的姓名"<<t.s1.name<<"老师学生的年龄"<<t.s1.age<<endl;*/

	struct Student stu={"张三",18,100};
	print(&stu);

	system("pause");
	return 0;
}
