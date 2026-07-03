#include<stdio.h>
int main()
{
  int a,b,c,d,temp;
  scanf("%d",&temp);
  a=temp/3600;
  b=temp%3600;
  c=b/60;
  d=b%60;
  printf("%d:%d:%d\n",a,c,d);
  return 0;

}
