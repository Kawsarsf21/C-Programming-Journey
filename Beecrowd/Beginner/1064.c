#include<stdio.h>
int main()
{
    float a,b,c,d,e,f,ave;
    int pos;
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
    if(a>0)pos=1;
    else pos=0;
    if(b>0)pos=pos+1;
    else pos=pos+0;
    if(c>0)pos=pos+1;
    else pos=pos+0;
    if(d>0)pos=pos+1;
    else pos=pos+0;
    if(e>0)pos=pos+1;
    else pos=pos+0;
    if(f>0)pos=pos+1;
    else pos=pos+0;
    if(a>0)ave=a;
    else ave=0;
    if(b>0)ave=ave+b;
    else ave=ave+0;
    if(c>0)ave=ave+c;
    else ave=ave+0;
    if(d>0)ave=ave+d;
    else ave=ave+0;
    if(e>0)ave=ave+e;
    else ave=ave+0;
    if(f>0)ave=ave+f;
    else ave=ave+0;
    ave=ave/pos;
    printf("%d valores positivos\n%.1f\n",pos,ave);
    return 0;
}
