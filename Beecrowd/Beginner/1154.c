#include<stdio.h>
int main()
{
    int a=0,N=0,i=0;
    float avg;
    for(;;)
    {
        scanf("%d",&N);
        if(N>0){i++;a+=N;}
        if(N<0)
        {
        avg=(float)a/i;
        printf("%.2f\n",avg);
        return 0;
        }

    }

    return 0;
}
