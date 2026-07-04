#include<stdio.h>
int main()
{
	float a,b,c,d,e,f;
	int T;
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	if(a<0)a=0;
	else a=1;
	if(b<0)b=0;
	else b=1;
	if(c<0)c=0;
	else c=1;
	if(d<0)d=0;
	else d=1;
	if(e<0)e=0;
	else e=1;
	if(f<0)f=0;
	else f=1;
	T=a+b+c+d+e+f;
	printf("%d valores positivos\n",T);
	return 0;
}
