#include <stdio.h>

int main()
{
	//一维数组 
	int a[] = {1,2,3,4}; 
	printf("%d\n",sizeof(a));  //16，表示整个a数组所占内存的字节数
	printf("%d\n",sizeof(a+0)); //4，除了备注2中的两种情况，其他情况出现的数组名均表示数组首元素的地址，a+0表示数组首元素的地址，只要是地址在32位系统中就是4个字节
	printf("%d\n",sizeof(*a)); //4，a表示首元素地址，解引用后*a=1，1为整形，占4个字节
	printf("%d\n",sizeof(a+1)); //4，表示数组中第二个元素的地址，只要是地址就是4或8个字节
	printf("%d\n",sizeof(a[1])); //4，表示数组中的第二个元素所占内存的大小，整形为4个字节
	printf("%d\n",sizeof(&a));//4，为备注2中的特殊例子，&a表示整个数组的地址，只要是地址就是4或8个字节
	printf("%d\n",sizeof(*&a));//16，对整个数组进行解引用，得到1，2，3，4，四个整形数字，所占内存大小为16个字节
	printf("%d\n",sizeof(&a+1)); //4，+优先级更高，先进行加法运算，首元素地址加1即为第二个元素的地址
	printf("%d\n",sizeof(&a[0]));//4，取数组首元素的地址
	printf("%d\n",sizeof(&a[0]+1));//4，取数组第二个元素的地址
 
	return 0;
}

//备注：
//1：sizeof用来返回一个对象或者类型所占内存的字节数
//2：数组名，有两种例外。1.sizeof（数组名）和2.&数组名这两种情况是表示整个数组，即sizeof（数组名）表示整个数组所占内存的字节数，&数组名表示该数组的整个地址