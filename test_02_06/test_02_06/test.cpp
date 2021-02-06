#include <stdio.h>
#include <string.h>
#define MAXLEN 255

typedef struct
{
  char ch[MAXLEN];
  int length;
}SString;

//���Ӵ�����Sub���ش�S�ĵ�pos���ַ��𳤶�Ϊlen���Ӵ�
bool SubString(SString &Sub,SString S,int pos,int len)
{
	if(pos+len-1>S.length)
		return false;
	for(int i=pos;i<pos+len;i++)
		Sub.ch[i-pos+1]=S.ch[i];
	Sub.length=len;
	return true;
}

//�Ƚϣ���S>T���򷵻�ֵ>0;��S=T,�򷵻�ֵ=0����S<T,�򷵻�ֵ<0
int StrCompare(SString S,SString T)
{
	for(int i=1;i<=S.length && i<=T.length;i++)
	{
		if(S.ch[i]!=T.ch[i])
			return S.ch[i]-T.ch[i];
	}
	return S.length-T.length;
}

//��λ��������S�д����봮Tֵ��ͬ���Ӵ����򷵻����������е�һ�γ��ֵ�λ�ã����򷵻�0
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

int main()
{

  return 0;
}