#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		char str[100];
		int a;
		scanf("%s",str);
		a=strlen(str);
		if(a<=10)printf("%s\n",str);
		else printf("%c%d%c\n",str[0],a-2,str[a-1]);
	}
	return 0;
}

