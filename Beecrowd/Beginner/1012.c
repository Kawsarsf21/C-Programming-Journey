#include<stdio.h>
#define PI 3.14159
int main()
{
	double A,B,C,TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO;
	scanf("%lf",&A);
	scanf("%lf",&B);
	scanf("%lf",&C);
	TRIANGULO=0.5*A*C;
	CIRCULO=PI*C*C;
	TRAPEZIO=0.5*(A+B)*C;
	QUADRADO=B*B;
	RETANGULO=A*B;
	printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO,CIRCULO,TRAPEZIO,QUADRADO,RETANGULO);
	return 0;

}
