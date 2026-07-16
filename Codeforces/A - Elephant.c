#include<stdio.h>
int main()
{
    int x,count=0,temp=0;
    scanf("%d",&x);
     count=x/5;
     if(x%5!=0)count++;
    printf("%d\n",count);
    return 0;
}
