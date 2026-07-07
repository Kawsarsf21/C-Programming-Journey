#include<stdio.h>
int main()
{
	int X,Y,k,temp=0;
	scanf("%d %d",&X,&Y);
	for(int i=1;i<=Y;i++)
	
	{

		if(i%X!=0)printf("%d ",i);
		if(i%X==0){printf("%d\n",i);}
	
		
	}
	return 0;
}