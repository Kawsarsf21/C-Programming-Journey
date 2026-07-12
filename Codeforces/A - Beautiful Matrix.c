#include<stdio.h>
#include<stdlib.h>
int main()
{
    int mat[5][5],i=0,j=0,c,r,ans;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1){c=j;r=i;}
        }
    }
    ans=abs(c+1-3)+abs(r+1-3);
    printf("%d\n",ans);
    return 0;
}
