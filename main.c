#include <stdio.h>
#include <stdlib.h>

double legendre(int n, double x)
{
    if(n == 0)
    {
        return 1;
    }
    else if(n == 1)
    {
        return x;
    }
    else
    {
        return ((2 * n) * x * legendre(n - 1, x) - (n - 1) * legendre(n-2, x)) / n;
    }
}

int main()
{
    int n, i;
    double x, p;
    FILE *fp = fopen("result.txt", "w+");
    printf("Please enter n: ");
    scanf("%d", &n);
    printf("Please enter x: ");
    scanf("%lf", &x);
    //computes the p through recursively
    //p = legendre(n, x);
    //printf("The result of P%d(%lf) = %lf\n", n, x, p);
    for (i = 0; i <= n; i++)
    {
        p = legendre(i, x);
        fprintf(fp, "%d\t%lf\n", i, p);
    }
    fclose(fp);
    return 0;
}
