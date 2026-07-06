#include<stdio.h>
int main()
{   //int M=1,N=1;
    int M,N;
    //while(M>0&&N>0)
    while(1){ scanf("%d %d",&M,&N);
        if(M<=0||N<=0) return 0;
        if(N<M){M=M+N;N=M-N;M=M-N;}

        int i,sum=0;
        for(i=M;i<=N;i++)
        {
            printf("%d ",i);
            sum+=i;
        }

        printf("Sum=%d\n",sum);

    }
    return 0;
}
