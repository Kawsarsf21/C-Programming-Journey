#include<stdio.h>
int main()
{
    int N,X;
    scanf("%d",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%d",&X);
        int t=0;
        if(X==1){printf("%d nao eh primo\n",X);
        continue;}
        for(int j=2;j<X;j++)
        {
            if(X%j==0){t++;break;}
        }
        if(t>0)printf("%d nao eh primo\n",X);
        else printf("%d eh primo\n",X);
    }
    return 0;
}
