#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b<c){printf("%d %d %d",a,b,c);}
    else if(c<b<a){printf("%d %d %d",c,b,a);}
    else if(a<c<b){printf("%d %d %d",a,c,b);}
    else if(c<a<b){printf("%d %d %d",c,a,b);}
}
