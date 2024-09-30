#include <stdio.h>

int main()
{                       //do-while loop
    int n = 1, sum = 0;

    do
    {
        sum = sum + n * n;
        n++;
        printf("sum=%d ", sum);
        printf("n = %d \n", n);
    } while (n <= 10);

    printf("Sum of 10 numbers = %d \n", sum);
}