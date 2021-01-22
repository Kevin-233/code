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
//	free(p);//只有malloc这种动态申请的内存才用free
//	p=NULL;
//
//  return 0;
//}
int main()
{
	                  //申请的内存为10*sizeof（int）
	int *p=(int*)calloc(10,sizeof(int)); //calloc是用来将申请的空间的字节初始化为0
	if(p==NULL)  //申请地址后一定要判断p是否为空指针
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

//还有realloc函数，用于调整动态申请的内存空间


