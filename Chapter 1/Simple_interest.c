#include <stdio.h>

int main(){
    int P, T, R, SI;

    printf("Principal : ");
    scanf("%d", &P);

    printf("Rate of interest : ");
    scanf("%d", &R);

    printf("Time period : ");
    scanf("%d", &T);

    SI = P*R*T;

    printf("S.I = %d \n", SI);

    return 0;
}