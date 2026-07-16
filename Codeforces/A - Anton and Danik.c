#include<stdio.h>
int main()
{
	int n,A=0,D=0;
	scanf("%d",&n);
	char s1[n+1];
	scanf("%s",s1);
	for(int i=0;i<n;i++)
	{
		(s1[i]=='A')?A++:D++;
	}
	if(A>D)printf("Anton\n");
	else if(A==D)printf("Friendship\n");
	else printf("Danik\n");
	return 0;
}
