#include<stdio.h>
int main()
{
    int NUMBER,WPN;
    float rph,SALARY;
    scanf("%d",&NUMBER);
    scanf("%d",&WPN);
    scanf("%f",&rph);
    printf("NUMBER = %d\n",NUMBER);
    SALARY=WPN*rph;
    printf("SALARY = U$ %.2f\n",SALARY);
    return 0;
}
