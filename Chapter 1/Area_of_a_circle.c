#include <stdio.h>

int main()
{
    double r, A;

    printf("Radius : ");
    scanf("%lf", &r);

    A = (22.0/7.0)*(r*r);

    printf("Area of a circle = %.2lf \n", A);

    return 0;
}