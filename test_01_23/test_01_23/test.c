#include <stdio.h>
#include <string.h>

int main()
{
	char*p="abcdef";
	printf("%d\n",strlen(p));  //6�������ַ����Ľ�����־��\0
	printf("%d\n",strlen(p+1));//5�����ַ����ĵڶ���Ԫ�ؿ�ʼ
	//printf("%d\n",strlen(*p));  //*p��p���н����ã��õ������ַ�a��err
	//printf("%d\n",strlen(p[0]));//ͬ��
	printf("%d\n",strlen(&p)); //���ֵ
	printf("%d\n",strlen(&p+1)); //���ֵ
	printf("%d\n",strlen(&p[0]+1)); //5

	printf("%d\n",sizeof(p)); //4/8  ����ָ������Ĵ�С
	printf("%d\n",sizeof(p+1));//4/8  p+1�õ������ַ�b�ĵ�ַ
	printf("%d\n",sizeof(*p)); //1   *p�õ������ַ����ĵ�һ���ַ�a
	printf("%d\n",sizeof(p[0]));//1  aԪ��
	printf("%d\n",sizeof(&p));  //4/8  ��ַ
	printf("%d\n",sizeof(&p+1));//4/8  ��ַ
	printf("%d\n",sizeof(&p[0]+1));//4/8  ��ַ



  return 0;
}