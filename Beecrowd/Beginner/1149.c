#include<stdio.h>
int main()
{
	int A,N,sum=0;
	scanf("%d",&A);
	in:scanf("%d",&N);
	if(N<=0){goto in;}
	for(int i=0;i<N;i++)
	{
		sum+=A+i;
	}
		printf("%d",sum);
		return 0;
}