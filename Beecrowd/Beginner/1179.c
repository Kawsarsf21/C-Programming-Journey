#include <stdio.h>

int main() {
    int n[15],j=0,k=0;
    int par[5],impar[5];
    for(int i=0;i<15;i++)
    {
        scanf("%d",&n[i]);
        if(n[i]%2==0){par[j]=n[i];j++;if(j==5){for(int x=0;x<5;x++){printf("par[%d] = %d\n",x,par[x]);}j=0;}}
        else {impar[k]=n[i];k++;if(k==5){for(int x=0;x<5;x++){printf("impar[%d] = %d\n",x,impar[x]);}k=0;}}
    }
    for(int i=0;i<k;i++)
    {
     printf("impar[%d] = %d\n",i,impar[i]);
    }

    for(int i=0;i<j;i++)
    {
        printf("par[%d] = %d\n",i,par[i]);
    }


    return 0;
}
