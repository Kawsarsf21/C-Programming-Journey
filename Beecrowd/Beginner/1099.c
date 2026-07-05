#include<stdio.h>
int main()
{
    int N,X,Y,t;
    scanf("%d",&N);
    for(int i=0;i<N;i++)
    { scanf("%d %d",&X,&Y);
      int sum=0;

    if(X>Y)
    {t=X;X=Y;Y=t;
    for(int I=X+1;I<Y;I++)
    {
    if(I%2!=0){sum+=I;}
    }
    printf("%d\n",sum);
    }
    else
    {
      for(int I=X+1;I<Y;I++)
    {
    if(I%2!=0){sum+=I;}
    }
    printf("%d\n",sum);

    }

}
return 0;
}
