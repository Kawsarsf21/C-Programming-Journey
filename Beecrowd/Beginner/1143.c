#include<stdio.h>
int main()
{
    int N,temp=1,a,b,c;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
    printf("%d %d %d\n",temp,temp*temp,temp*temp*temp);
    temp++;
    }
    return 0;
}
