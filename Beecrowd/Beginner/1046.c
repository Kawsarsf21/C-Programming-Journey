#include<stdio.h>
int main()
{
    int a,b,X;
    scanf("%d %d",&a,&b);
    if(a<b){
    X=b-a;
    printf("O JOGO DUROU %d HORA(S)\n",X);}
    else {X=(24-a)+b;
    printf("O JOGO DUROU %d HORA(S)\n",X);
    }
    return 0;
}
