#include<stdio.h>
int main()
{
    int I=1;
    while(I<10)
        { int J=8;
            for(int i=1;i<4;i++)
                {   J--;
                    printf("I=%d J=%d\n",I,J);
            }
            I+=2;

        }
}
