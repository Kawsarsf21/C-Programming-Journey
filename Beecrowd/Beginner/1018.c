#include<stdio.h>
int main()
{
    int amount,temp;
    if(scanf("%d",&amount)!=1)
    return 0;
    printf("%d\n",amount);
    temp=amount;
    printf("%d nota(s) de R$ 100,00\n",temp/100);
    temp%=100;
    printf("%d nota(s) de R$ 50,00\n",temp/50);
    temp%=50;
    printf("%d nota(s) de R$ 20,00\n",temp/20);
    temp%=20;
    printf("%d nota(s) de R$ 10,00\n",temp/10);
    temp%=10;
    printf("%d nota(s) de R$ 5,00\n",temp/5);
    temp%=5;
    printf("%d nota(s) de R$ 2,00\n",temp/2);
    temp%=2;
    printf("%d nota(s) de R$ 1,00\n",temp/1);
    return 0;

}
