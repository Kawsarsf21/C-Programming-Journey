#include<stdio.h>
int main()
{
    int a,b,c,d,XXX,YYY;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if(a<c&&b<d)
    {XXX=c-a;YYY=d-b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",XXX,YYY);}
    else if(a<c&&b>d){XXX=c-a-1;YYY=(60+d)-b;(YYY<60)?
    printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",YYY):
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",XXX,YYY);}
    else{
    if(d-b==0){XXX=(24-a)+c;YYY=d-b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",XXX,YYY);}
    else{ XXX=(24-a)+c-1;YYY=(60+d)-b;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",XXX,YYY);}
    }
    return 0;
}
