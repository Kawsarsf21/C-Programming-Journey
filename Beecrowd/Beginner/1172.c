#include<stdio.h>
int main()
{
int X[10],i=1,sum=0;
for(i=1;i<=10;i++){
	scanf("%d",&X[i]);if(X[i]==0||X[i]<0)X[i]=1;
	sum+=X[i];
	  
	      }	
	      printf("%d\n",sum);
	      return 0;
}