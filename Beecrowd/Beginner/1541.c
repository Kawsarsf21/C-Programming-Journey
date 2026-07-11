#include<stdio.h>
#include<math.h>
int main()
{
    int A,B,C;
     while(scanf("%d %d %d",&A,&B,&C)&&A!=0)
     {
        double total=0,side=0;
        total=(A*B*100.0)/C;
        side=sqrt(total);
        printf("%d\n",(int)side);
     }
     return 0;
}
