#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,Media,last,finals;
    scanf("%lf %lf %lf %lf",&N1,&N2,&N3,&N4);
    Media=(N1*2+N2*3+N3*4+N4*1)/10.0;
    printf("Media: %.1lf\n",Media);
    if(Media>=7){printf("Aluno aprovado.\n");}
    else if(Media<5){printf("Aluno reprovado.\n");}
    else{printf("Aluno em exame.\n");
    scanf("%lf",&last);
    printf("Nota do exame: %.1f\n",last);
    finals=(last+Media)/2;
    if(finals>=5.0){printf("Aluno aprovado.\n");}
    else {printf("Aluno reprovado.\n");}
     printf("Media final: %.1f\n", finals);}
    return 0;

}
