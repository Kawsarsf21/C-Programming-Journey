#include<stdio.h>
int main()
{
    int N,a=0,b=1,sum,i;
    in:scanf("%d",&N);
    if(N>46)goto in;
    for(i=1;i<=N;i++)
    {
       printf("%d",a);
       sum=a+b;
       a=b;
       b=sum;
       if(i<N)printf(" ");
       else printf("\n");
    }
    return 0;
}
