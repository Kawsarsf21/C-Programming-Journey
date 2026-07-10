#include<stdio.h>
int main()
{
	int N[20],Y=0,t=0;
	for(int i=0;i<20;i++)
	{
	scanf("%d",&N[i]);}
	for(t=19;t>=0;t--){

	printf("N[%d] = %d\n",Y,N[t]);
    Y++;
    }
    return 0;
}
