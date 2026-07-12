#include<stdio.h>
int main()
{
    int n=0,k=0;
    scanf("%d %d",&n,&k);
    int a[n],co=0;
    for(int i=0;i<n;i++)
    {
     scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++)
    {
     if(a[k-1]<=a[i]&&a[i]>0)co++;
    }
    printf("%d\n",co);
    return 0;
}
