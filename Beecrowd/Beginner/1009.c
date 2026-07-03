#include <stdio.h>

int main()
{
    char name[50];
    double fixed, parsent, FP, TOTAL;

    scanf("%s", name);
    scanf("%lf", &fixed);
    scanf("%lf", &parsent);

    FP = 0.15 * parsent;
    TOTAL = fixed + FP;

    printf("TOTAL = R$ %.2f\n", TOTAL);

    return 0;
}
