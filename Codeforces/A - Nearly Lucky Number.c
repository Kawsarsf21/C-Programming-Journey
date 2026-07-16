#include<stdio.h>
int main()
{
	long long n,count=0,x;
	scanf("%lld",&n);
	while(n>0)
	{
		x=n%10;
		if(x==4||x==7)count++;
		n/=10;
	}
	if(count==4||count==7)printf("YES\n");
	else printf("NO\n");
	return 0;
}
