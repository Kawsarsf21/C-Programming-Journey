#include<stdio.h>
int main()
{
    int a=1,N,temp=0,i;
    scanf("%d",&N);
    i=N;
    if(N==0||N==1)printf("1\n");
    else{
    while(1)
    {
        temp=(N-a);
        i*=temp;
        if(N-a!=1)a++;
        if(N-a==1){printf("%d\n",i);return 0;}
    }
    }
  return 0;
}
