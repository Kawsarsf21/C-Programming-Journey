#include<stdio.h>
int main()
{
    char col[5],day[7];
    long long dd,hh,mm,ss,dd1,hh1,mm1,ss1,it,ft,diff,temp;
    scanf("%s %lld",day,&dd);
    scanf("%lld%s%lld%s%lld",&hh,col,&mm,col,&ss);
    scanf("%s %lld",day,&dd1);
    scanf("%lld%s%lld%s%lld",&hh1,col,&mm1,col,&ss1);
    it=(dd*86400+hh*3600+mm*60+ss);
    ft=(dd1*86400+hh1*3600+mm1*60+ss1);
    diff=(ft-it);
    printf("%lld dia(s)\n",diff/86400);
    temp=diff%86400;
    printf("%lld hora(s)\n",temp/3600);
    temp=temp%3600;
    printf("%lld minuto(s)\n",temp/60);
    temp=temp%60;
    printf("%lld segundo(s)\n",temp);
    return 0;

}
