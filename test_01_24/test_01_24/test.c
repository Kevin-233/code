//以下为4个嫌疑犯的供词：
//A说：不是我
//B说：是C
//C说：是D
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话
//根据已知信息找出凶手

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
//假设4人说的话全为真，则if判断语句中的和为4，现题目要求只有3个人说了真话，所以和为3即可