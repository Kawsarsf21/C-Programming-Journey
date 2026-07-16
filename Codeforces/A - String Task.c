#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char s[101];
	scanf("%s",s);
	int n=strlen(s);
	for(int i=0;i<n;i++)
	{
		s[i]=tolower(s[i]);
	    if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'||s[i]=='y')continue;
	    else printf(".%c",s[i]);
	    }
	    printf("\n");
	    return 0;
}
