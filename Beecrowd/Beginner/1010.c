#include<stdio.h>
int main()
{
	int pc1,pc2,pq1,pq2;
	float pp1,pp2,total;
    scanf("%d %d %f",&pc1,&pq1,&pp1);
    scanf("%d %d %f",&pc2,&pq2,&pp2);
    total=(pq1*pp1)+(pq2*pp2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
    return 0;
}
