#include <stdio.h>

int main(){
    double C, F;

    printf("Celcius : ");
    scanf("%lf", &C);

    F = (C*(9.0/5.0))+32;

    printf("Farenheit = %.2lfF\n",F);

    return 0;
}