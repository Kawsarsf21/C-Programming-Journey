#include<stdio.h>
int main()
{
    float A,B,C;
    scanf("%f %f %f",&A,&B,&C);
    (A+B>C&&B+C>A&&C+A>B)?
    printf("Perimetro = %.1f\n",A+B+C):
    printf("Area = %.1f\n",0.5*(A+B)*C);
    return 0;

}
