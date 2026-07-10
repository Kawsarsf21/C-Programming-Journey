#include<stdio.h>
int main()
{
int N;
scanf("%d",&N);
for(int i=1;i<=N;i++)
{
	int X=0,sum=0;
	scanf("%d",&X);
	for(int j=1;j<X;j++)
	{
		if(X%j==0)sum+=j;
	}
	if(sum==X)printf("%d eh perfeito\n",X);
  else printf("%d nao eh perfeito\n",X);
}
return 0;
}
