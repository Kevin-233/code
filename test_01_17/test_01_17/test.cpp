#include <stdio.h>

int main()
{
	int i=0;
	while(i<=10)
	{
	  i++;
	  if(i==5)
 	  continue;   //�˴���дbreak��continue�Ľ���᲻һ����break��ֱ����������ѭ������continueֻ�ǽ�������ѭ��continue��������ݡ�
	  printf("%d ",i);
	  
	}

  return 0;
}

//������8�е�i++���õ�11��printf�����棬����printf��ִ����������ѭ������Ϊcontinue�ǽ�������ѭ����������ݣ���i==5ʱ��ֱ�ӽ�����һ��ѭ��������һ��ѭ����i����5����˻�������ѭ����