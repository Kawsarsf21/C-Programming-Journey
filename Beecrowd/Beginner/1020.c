#include<stdio.h>
int main()
{
  int y,m,d,temp;
  scanf("%d",&d);
  y=d/365;
  temp=d%365;
  m=temp/30;
  d=temp%30;
  printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,d);
  return 0;
}
