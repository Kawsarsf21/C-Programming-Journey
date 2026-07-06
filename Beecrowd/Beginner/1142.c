#include<stdio.h>
int main()
{
    int N,temp;
    scanf("%d",&N);
    for(int i=1;i<N+1;i++)
        {
        for(int I=1;I<5;I++)
        {temp++;
        if(temp%4==0)printf("PUM\n");
        else printf("%d ",temp);
        }
        }
        return 0;
}
