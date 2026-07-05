#include<stdio.h>
int main()
{
    float J;
    for(float i=0;i<2.2;i+=0.2)
    {   int n=1;J=i;
        for(n;n<4;n++){J++;printf("I=%g J=%g\n",i,J);}

    }
    return 0;
}
