#include<stdio.h>
int main()
{
    int a,b,n=0,i=0,sum;
    scanf("%d %d",&a,&b);
    sum=b-a;
    for(i=(sum/sum);i<=sum;i+=2){n++;}
    printf("%d\n",n);

    /*if(a%2==0&&b%2==0)
    {
        for(i=++a;i<b;i+=2){n++;}
        printf("%d",n);
    }
    else if(a%2!=0&&b%2==0)
    {
        for(i=a+2;i<b;i+=2){n++;}
        printf("%d",n);
    }
    else if(a%2==0&&b%2!=0)
    {
        for(i=++a;i<b;i+=2){n++;}
        printf("%d",n);
    }
    else if(a%2!=0&&b%2!=0)
    {
        for(i=a+2;i<b;i+=2){n++;}
        printf("%d",n);
    }*/

    return 0;
}
