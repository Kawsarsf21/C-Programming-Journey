#include<stdio.h>
int main()
{
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X>Y){X=X+Y;Y=X-Y;X=X-Y;}
    for(int i=X+1;i<Y;i++){if(i%5==2||i%5==3) printf("%d\n",i);}
   return 0;
}
