#include <stdio.h>

int main()
{                       //while loop
    int n = 1, sum = 0;

    while (n <= 10)
    {
        sum = sum + n * n;
        n++;
        printf("sum=%d ", sum);
        printf("n = %d \n", n);
    }
    printf("Sum of 10 numbers = %d \n", sum);
}