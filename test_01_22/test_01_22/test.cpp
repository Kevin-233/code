#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//int main()
//{
//	int *p=(int*)malloc(10*sizeof(int));
//	if(p==NULL)
//		printf("%s\n",strerror(errno));
//	else
//	{
//	  int i=0;
//	  for(i=0;i<10;i++)
//	  {
//	    *(p+i)=i;
//		printf("%d ",*(p+i));
//	  }
//	}
//	free(p);//ֻ��malloc���ֶ�̬������ڴ����free
//	p=NULL;
//
//  return 0;
//}
int main()
{
	                  //������ڴ�Ϊ10*sizeof��int��
	int *p=(int*)calloc(10,sizeof(int)); //calloc������������Ŀռ���ֽڳ�ʼ��Ϊ0
	if(p==NULL)  //�����ַ��һ��Ҫ�ж�p�Ƿ�Ϊ��ָ��
		printf("%s\n",strerror(errno));
	else
	{
	  int i=0;
	  for(i=0;i<10;i++)
	  printf("%d ",*(p+i));
	}
	free(p);

  return 0;
}

//����realloc���������ڵ�����̬������ڴ�ռ�


