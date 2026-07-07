#include<stdio.h>
int main()
{
	float sum=0;
	for(int i=1;i<=100;i++)
	{
	sum+=(float)1/i;		
	}
	printf("%.2f",sum);
	return 0;
}