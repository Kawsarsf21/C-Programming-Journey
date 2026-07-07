#include<stdio.h>
int main()
{
	int N;
	in:scanf("%d",&N);
		for(int i=1;i<=N;i++)
		{
			if(i%N!=0)printf("%d ",i);
			if(i%N==0)printf("%d\n",i);
			
			}
		if(N==0)return 0;
		else goto in;
}