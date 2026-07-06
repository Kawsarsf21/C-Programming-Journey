#include<stdio.h>
int main()
{
    int n,a,b,inter=0,gre=0,gol=0,dro=0;
    while(1)
    {
        f:scanf("%d %d",&a,&b);gol+=1;
        if(a>b){inter+=1;}
        else if(a<b){gre+=1;}
        else dro+=1;
        printf("Novo grenal (1-sim 2-nao)\n");
        in:scanf("%d",&n);if(n<1||n>3) goto in;
        if(n==1){goto f;}
        else if(n==2)
        {  printf("%d grenais\n",gol);
           printf("Inter:%d\n",inter);
           printf("Gremio:%d\n",gre);
           printf("Empates:%d\n",dro);
            if(inter>gre)printf("Inter venceu mais\n");
            else if(inter<gre) printf("Gremio venceu mais\n");
            else printf("Não houve vencedor\n");return 0;}
    } return 0;
}
