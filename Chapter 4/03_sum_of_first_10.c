#include <stdio.h>

int main()
{                   //for loop
    int sum = 0, n;

    for (n = 1; n <= 10; n++)
    {
        sum = sum + n * n;
        printf("sum = %d ", sum);
        printf("n = %d\n", n);
    }

    printf("Sum of 10 numbers = %d \n", sum);
}