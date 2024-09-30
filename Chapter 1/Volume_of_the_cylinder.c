#include <stdio.h>

int main(){
    double r, h, V;

    printf("Radius: ");
    scanf("%lf", &r);

    printf("Height: ");
    scanf("%lf", &h);

    V = ((22.0/7.0)*(r*r))*h;

    printf("Volume of the cylinder = %.2lf\n", V);

    return 0;
}