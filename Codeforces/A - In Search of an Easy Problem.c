#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1){printf("HARD\n");return 0;}
    }
    printf("EASY\n");
    return 0;
}
