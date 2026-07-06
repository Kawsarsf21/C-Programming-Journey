#include<stdio.h>
int main()
{
    int n,a=0,b=0,c=0;
    while(1)
    {
        in:scanf("%d",&n);
        if(n>4||n<1)goto in;
        if(n==1)a+=1;
        else if(n==2)b+=1;
        else if(n==3)c+=1;
        else if(n==4)
            {
            printf("MUITO OBRIGADO\n");
            printf("Alcool:%d\nGasolina:%d\nDiesel:%d\n",a,b,c);
            return 0;
            }
    }
}
