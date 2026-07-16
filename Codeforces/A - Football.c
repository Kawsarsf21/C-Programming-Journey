
#include<stdio.h>
#include<string.h>
int main()
{
	int a,count=1,dan=0;
	char s[101];
	scanf("%s",s);
	a=strlen(s);
	for(int i=0;i<a;i++)
	{
	if(s[i]==s[i-1]){count++;}
	else count=1;
	if(count>=7){dan=1;break;}

	}
	(dan==1)?printf("YES\n"):printf("NO\n");
	return 0;
}
