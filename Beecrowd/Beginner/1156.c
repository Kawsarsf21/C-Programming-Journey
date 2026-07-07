#include<stdio.h>
int main()
{
	float sum=0,n=0,j=1;
	for(int i=1;i<=20;i++)
	{ 
	sum+=(float)(2*n+1)/j;
	j=j*2;n++;		
	}
	printf("%.2f\n",sum);
	return 0;
}