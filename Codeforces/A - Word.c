#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char su[27],sl[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	for(int k=0;k<26;k++){su[k]=toupper(sl[k]);}
	char s[101];
	scanf("%s",s);
	int i=0,j=0,cl=0,cu=0,n;
	n=strlen(s);
	for(i=0;i<n;i++)
{
	for(j=0;j<26;j++)
	{

		if(s[i]==sl[j])cl++;
		if(s[i]==su[j])cu++;
	}
}
if(cl<cu){int k;for(k=0;k<n;k++){s[k]=toupper(s[k]);printf("%c",s[k]);}}
else if(cl>=cu){int m;for( m=0;m<n;m++){s[m]=tolower(s[m]);printf("%c",s[m]);}}
printf("\n");
return 0;
}
