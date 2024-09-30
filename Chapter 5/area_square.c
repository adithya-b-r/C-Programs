#include <stdio.h>
#include <math.h>

int main(){
    int side;
    printf("\nEnter the value of side :- ");
    scanf("%d", &side);

    printf("The value of area is %.2lf \n", pow(side,2));

    return 0;
}