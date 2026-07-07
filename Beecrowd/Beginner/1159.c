#include<stdio.h>
int main()
{
	int X,i=0,j=0;
	while(1)
	{
	scanf("%d",&X);
	int i=0,sum=0;
	if(X==0)break;
	if(X%2!=0)X=X+1;
	while(i<5)
	{
		sum+=X;
		X+=2;
		i++;
	}
	printf("%d\n",sum);
	}
	return 0;
	}
