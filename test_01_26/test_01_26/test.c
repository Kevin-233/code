#include <stdio.h>
#include <assert.h.>

char*my_strcat(char*dest,const char*src) //手动实现strcat函数
{
   char*ret=dest;
   assert(dest!=NULL);
   assert(src);
   while(*dest!='\0')
   {
      dest++;
   }
   while(*dest++=*src++)
   {
     ;
   }
   return ret;

}

int main()
{
  char arr1[30]="hello";
  char arr2[]="world";
  my_strcat(arr1,arr2);
  printf("%s\n",arr1);

  return 0;


}