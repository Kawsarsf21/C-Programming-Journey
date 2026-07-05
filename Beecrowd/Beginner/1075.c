#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;10000>=i;i++)
    {
        if(i%n==2)printf("%d\n",i);
    }
    return 0;
}
