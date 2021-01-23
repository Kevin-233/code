#include <stdio.h>
#include <string.h>

int main()
{
	char*p="abcdef";
	printf("%d\n",strlen(p));  //6，对于字符串的结束标志是\0
	printf("%d\n",strlen(p+1));//5，从字符串的第二个元素开始
	//printf("%d\n",strlen(*p));  //*p对p进行解引用，得到的是字符a，err
	//printf("%d\n",strlen(p[0]));//同上
	printf("%d\n",strlen(&p)); //随机值
	printf("%d\n",strlen(&p+1)); //随机值
	printf("%d\n",strlen(&p[0]+1)); //5

	printf("%d\n",sizeof(p)); //4/8  计算指针变量的大小
	printf("%d\n",sizeof(p+1));//4/8  p+1得到的是字符b的地址
	printf("%d\n",sizeof(*p)); //1   *p得到的是字符串的第一个字符a
	printf("%d\n",sizeof(p[0]));//1  a元素
	printf("%d\n",sizeof(&p));  //4/8  地址
	printf("%d\n",sizeof(&p+1));//4/8  地址
	printf("%d\n",sizeof(&p[0]+1));//4/8  地址



  return 0;
}