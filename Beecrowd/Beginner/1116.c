#include<stdio.h>
int main()
{
    int n,X,Y,i=1;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d %d",&X,&Y);
        if(Y==0)printf("divisao impossivel\n");
        else {float div=(float)X/Y;
        printf("%.1f\n",div);}
        i++;
    }
    return 0;
}
