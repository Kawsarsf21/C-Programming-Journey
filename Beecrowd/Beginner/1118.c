#include<stdio.h>
int main()
{
    double n,sum=0,avg,c=0;
    while(1)
    {   j:
        start:
        i:
        scanf("%lf",&n);
        if(n<0||n>10){printf("nota invalida\n");goto i;}
        else {
            sum+=n;c++;
        }
        int a;
        if(c==2){avg=sum/2;printf("media = %.2lf\nnovo calculo (1-sim 2-nao)\n",avg);
        in:scanf("%d",&a);
        if(a==1){avg=0;sum=0;c=0;goto start;}
        else if(a<1||a>2){printf("novo calculo (1-sim 2-nao)\n");goto in;}
        else if (a==2) return 0;

        }

        else goto j;
    }
    return 0;
}
