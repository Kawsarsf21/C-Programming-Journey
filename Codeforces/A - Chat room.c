#include<stdio.h>
#include<string.h>
int main()
{
    char s[]="hello";
    char tar[101];
    scanf("%s",tar);
    int j=0,n=strlen(tar);
    for(int i=0;i<n;i++)
    {
       if(tar[i]==s[j])j++;
       if(j==5)break;
    }
    if(j==5)printf("YES\n");
    else printf("NO\n");
    return 0;

}
