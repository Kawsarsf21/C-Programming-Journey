#include<stdio.h>
int main()
{
    int x,z,sum=0,i,t=0;
    scanf("%d",&x);
    i=x;
    in:scanf("%d",&z);
    if(z<=x)goto in;
    while(1)
     {
        t++;
        sum=sum+i;
        i=i+1;

        if(sum>z){printf("%d\n",t);return 0;}
    }

}
