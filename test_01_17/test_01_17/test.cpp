#include <stdio.h>

int main()
{
	int i=0;
	while(i<=10)
	{
	  i++;
	  if(i==5)
 	  continue;   //此处填写break、continue的结果会不一样。break是直接跳出整个循环，而continue只是结束本次循环continue后面的内容。
	  printf("%d ",i);
	  
	}

  return 0;
}

//若将第8行的i++放置到11行printf的下面，即在printf后执行则会出现死循环，因为continue是结束本次循环后面的内容，当i==5时会直接进入下一次循环，而下一次循环的i还是5，因此会陷入死循环。