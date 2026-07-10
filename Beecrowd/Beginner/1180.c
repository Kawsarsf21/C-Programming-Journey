#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    int X[N],low,count=0;
    scanf("%d",&X[0]);
    low=X[0];
    for(int i=1;i<N;i++)
    {
        scanf("%d",&X[i]);
        if(X[i]<low){low=X[i];count=i;}
    }
    /*while(1)
    {
     if(low==X[count])break;
    count++;}*/
    printf("Menor valor: %d\nPosicao: %d\n",low,count);
    return 0;
}
