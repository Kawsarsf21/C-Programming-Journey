#include<stdio.h>
int main()
{
    float n,avg,c=0;
    float sum=0;
    while(1)
    {
        scanf("%f",&n);
        if(n>=0&&n<=10){sum+=n;c++;}
        else{printf("nota invalida\n");}
        if(c==2){break;}
    }
    avg=sum/2;
    printf("media = %.2f\n",avg);

    return 0;
}
