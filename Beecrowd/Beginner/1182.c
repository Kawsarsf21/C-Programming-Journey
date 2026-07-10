#include<stdio.h>
int main()
{
    int C;
    double sum=0,M[12][12];
    char T;
    scanf("%d %c",&C,&T);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
           if(j==C)sum+=M[i][j];
        }

    }
    if(T=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/12);
    return 0;
}

