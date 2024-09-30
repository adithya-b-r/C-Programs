#include <stdio.h>

int main()
{
    int l, w;

    printf("Length : ");
    scanf("%d", &l);

    printf("Width : ");
    scanf("%d", &w);

    printf("\nArea = length x width \n");
    printf("Area =  %d  x %d \n", l, w);
    printf("Area =     %d \n \n", l * w);

    return 0;
}