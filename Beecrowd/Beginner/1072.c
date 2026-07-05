#include<stdio.h>
int main()
{
    int n,temp,in=0,out=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&temp);
        if(temp>=10&&temp<=20)in++;
        else out++;
    }
    printf("%d in\n",in);
    printf("%d out\n",out);
    return 0;
}
