#include<stdio.h>
int main()
{
	int N,X,Y;
	scanf("%d",&N);
	for(int i=1;i<=N;i++)
	{
		scanf("%d %d",&X,&Y);
		int j=0,sum=0;
	if(X%2==0){
		X=X+1;
		while(j<Y){sum+=X;X+=2;j++;}
		}
	else if(X%2!=0){
	while(j<Y){
sum+=X;
X+=2;j++;}
		}
	printf("%d\n",sum);

}
