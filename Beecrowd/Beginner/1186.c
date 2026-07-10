#include<stdio.h>
int main()
{   int count=0;
    double sum=0,M[12][12];
    char O;
    scanf("%c",&O);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
           if(i+j>11){sum+=M[i][j];count++;}
        }

    }
    if(O=='S')printf("%.1lf\n",sum);
    else printf("%.1lf\n",sum/count);
    return 0;
}




