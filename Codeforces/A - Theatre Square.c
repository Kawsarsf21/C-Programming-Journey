#include<stdio.h>
int main()
{
    long long n,m,a,i=0,j=0;
    scanf("%lld %lld %lld",&n,&m,&a);
    i=(n+a-1)/a;
    j=(m+a-1)/a;
    printf("%lld\n",i*j);
    return 0;
}
