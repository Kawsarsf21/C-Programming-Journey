#include<stdio.h>
int main()
{
    int n,i=0,temp;
    scanf("%d",&n);
    for(i=1;i<=n;i++){scanf("%d",&temp);
    if(temp==0)printf("NULL\n");
    else if(temp<0)
    {if(temp%2==0)printf("EVEN NEGATIVE\n");
    else printf("ODD NEGATIVE\n");}
    else
    {
    if(temp%2==0)printf("EVEN POSITIVE\n");
    else printf("ODD POSITIVE\n");
    }
    }
     return 0;
}
