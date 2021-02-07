#include <stdio.h>
#include <string.h>
#define MAXLEN 255

typedef struct
{
  char ch[MAXLEN];
  int length;
}SString;

//求子串，用Sub返回串S的第pos个字符起长度为len的子串
bool SubString(SString &Sub,SString S,int pos,int len)
{
	if(pos+len-1>S.length)
		return false;
	for(int i=pos;i<pos+len;i++)
		Sub.ch[i-pos+1]=S.ch[i];
	Sub.length=len;
	return true;
}

//比较，若S>T，则返回值>0;若S=T,则返回值=0；若S<T,则返回值<0
int StrCompare(SString S,SString T)
{
	for(int i=1;i<=S.length && i<=T.length;i++)
	{
		if(S.ch[i]!=T.ch[i])
			return S.ch[i]-T.ch[i];
	}
	return S.length-T.length;
}

//定位，若主串S中存在与串T值相同的子串，则返回它在主串中第一次出现的位置，否则返回0
int Index(SString S,SString T)
{
   int i=1,n=strlen(S),m=strlen(T);
   SString sub;
   while(i<=n-m+1)
   {
     SubString(sub,S,i,m);
	 if(StrCompare(sub,T)!=0)
		 ++i;
	 else
		 return i;
   }
   return 0;
}

//朴素模式匹配算法
int Index(SString S,SString T)
{
   int k=1;
   int i=k;
   while(i<=S.length && j<=T.length)
   {
     if(S.ch[i]==T.ch[j])
	 {
	    ++i;
		++j;
	 }
	 else
	 {
	   k++;
	   i=k;
	   j=1;
	 }
   }
   if(j>T.length)
	   return k;
   else
	   return 0;
}

int main()
{

  return 0;
}