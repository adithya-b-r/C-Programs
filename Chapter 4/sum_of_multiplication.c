#include <stdio.h>

int main()
{
    int t, n = 1, sum = 0;

    printf("Enter the number:- ");
    scanf("%d", &t);

    while (n <= 10)
    {
        sum = sum + t * n;
        printf("%d x %d = %d\n", t, n, t * n);
        n++; //n+=1
    }
    printf("\nsum = %d \n", sum);
}