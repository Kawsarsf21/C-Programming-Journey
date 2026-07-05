#include<stdio.h>
int main()
{
    int I=1,J=60;
    printf("I=%d J=%d\n",I,J);
    for(int i=1;i<13;i++)
    {
        I=I+3;J=J-5;
        printf("I=%d J=%d\n",I,J);
    }
    return 0;
}
