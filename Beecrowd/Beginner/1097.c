#include<stdio.h>
int main()
{
    int n,i=1,I=1;
    while(i<6)
    { int J=I+7;
        for(n=1;n<4;n++)
        {
          printf("I=%d J=%d\n",I,J-=1);
        }

        I+=2;
        i++;
    }
    return 0;

}
