#include<stdio.h>
int main()
{
    int T;
    scanf("%d",&T);
    int N[1000],count=0;
    for(int i=0;i<1000;i++)
    {
        N[i]=count;
        //N[i]=i%T;
        printf("N[%d] = %d\n",i,N[i]);
        count++;
        if(count==T)count=0;
    }
    return 0;
}
