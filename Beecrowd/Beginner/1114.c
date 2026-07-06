#include<stdio.h>
int main()
{
    int p;
    while(1)
    {scanf("%d",&p);
     if(p==2002){printf("Acesso Permitido\n");return 0;}
     else printf("Senha Invalida\n");
    }
    return 0;
}
int p;
while(scanf("%d", &p) && p != 2002) {
    printf("Senha Invalida\n");
}
printf("Acesso Permitido\n");
