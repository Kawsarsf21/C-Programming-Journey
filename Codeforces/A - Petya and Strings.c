#include<stdio.h>
#include<string.h>
#include<ctype.h>
void to_upper(char up[])
{
    int i=0;
    while(up[i]!='\0'){
    up[i]=toupper(up[i]);
    i++;
    }
}
int main()
{
    char str1[100],str2[100];
    int cou=0;
    scanf("%s",str1);
    scanf("%s",str2);
    to_upper(str1);
    to_upper(str2);
    cou=strcmp(str1,str2);
    if(cou==0)printf("0\n");
    else if(cou<0)printf("-1\n");
    else printf("1\n");
    return 0;
}
