#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int p;
    double sum = 0;

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &p);
        sum += p;
    }

    printf("%.12f\n", sum / n);

    return 0;
}

