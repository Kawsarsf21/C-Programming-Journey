#include<stdio.h>
int main()
{
	int n,k=0;
	char X[5];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{

		scanf("%s",X);
		if(X[1]=='+')k++;
		else if(X[1]=='-')k--;
	}
	printf("%d\n",k);
	return 0;
}
