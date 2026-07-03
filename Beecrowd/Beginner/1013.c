#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,s,MaiorAB,maiorfinal;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&s);
    MaiorAB=0.5*(a+b+abs(a-b));
    maiorfinal=0.5*(MaiorAB+s+abs(MaiorAB-s));
    printf("%d eh o maior\n",maiorfinal);
    return 0;

}
