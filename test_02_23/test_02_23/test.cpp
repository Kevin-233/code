#include <stdio.h>
#include <stdlib.h>
#define MaxSize 10

typedef struct
{
   int data[MaxSize];
   int top;               //Õ»¶¥Ö¸Õë

}SqStack;

void InitStack(SqStack &S)
{
  S.top=-1;
  
}

bool StackEmpty(SqStack S)  //ÅÐ¶ÏÕ»¿Õ
{
  if(S.top==-1)
	  return true;
  else
	  return false;
}

//½øÕ»
bool Push(SqStack &S,int x)
{
	if(S.top==MaxSize-1)
		return false;
	S.top =S.top+1;
	S.data[S.top]=x;
	return true;
}

//³öÕ»
bool Pop(SqStack &S,int &x)
{
	if(S.top==-1)  //Õ»¿Õ£¬±¨´í
		return false;
	x=S.data[S.top];
	S.top=S.top-1;
	return true;
}

int main()
{
	SqStack S;
	InitStack(S);

	system("pause");
  return 0;
}