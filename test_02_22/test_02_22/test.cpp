#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

/*
int my_strlen1(char* arr) //ʹ�õݹ�д��strlen������Ҳ����˵�ǲ�������ʱ����д����ͻȻ�亯��
{
	if(*arr=='\0')
		return 0;
	else
		return my_strlen1(++arr)+1;
}

int my_strlen2(const char* arr)//ʹ�ü�����дstrlen����
{
	
  int count=0;
  assert(arr!=NULL);
  while(*arr !='\0')
  {
     count++;
	 arr++;
  }
  return count;
}
int main()
{
	char arr[]={"abcedf"};
	int len1 =my_strlen1(arr);
	int len2 =my_strlen2(arr);
	printf("%d\n",len1);
	printf("%d\n",len2);
  return 0;
}
*/
void  my_strcpy(char*dest,const char*src) //strcpy�ַ�������������ʵ��
{
  assert(dest!=NULL);
  assert(src!=NULL);
  
  
  while(*dest++ = *src++)
  {
    ;
  }
  
}

int main()
{
	char arr1[]="abcedf";
	char arr2[]="hello";
	my_strcpy(arr1,arr2);
	printf("%s\n",arr1);

	system("pause");
   return 0;
}
