//����Ϊ4�����ɷ��Ĺ��ʣ�
//A˵��������
//B˵����C
//C˵����D
//D˵��C�ں�˵
//��֪3����˵���滰��1����˵���Ǽٻ�
//������֪��Ϣ�ҳ�����

#include <stdio.h>

int main()
{
	int killer=0;
	for(killer='a';killer<='d';killer++)
	{
	   if((killer!='a')+(killer=='c')+(killer=='d')+(killer!='d')==3)
	   {
	     printf("killer=%c\n",killer);
	   }
	}

  return 0;
}
//����4��˵�Ļ�ȫΪ�棬��if�ж�����еĺ�Ϊ4������ĿҪ��ֻ��3����˵���滰�����Ժ�Ϊ3����