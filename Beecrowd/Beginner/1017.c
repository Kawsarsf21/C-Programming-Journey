#include<stdio.h>
int main()
{
    int dis,time,speed;
    double fuel;
    scanf("%d %d",&time,&speed);
    dis=time*speed;
    fuel=dis/12.0;
    printf("%.3lf\n",fuel);
    return 0;
}
