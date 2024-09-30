#include <stdio.h>

int main()
{
    int a, b, c, d;

    printf("Enter four numbers :- ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("%d is greater than %d %d %d \n", a, b, c, d);
            }
            else
            {
                printf("%d is greater than %d %d %d \n", c, a, b, d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("%d is greater than %d %d %d \n", b, a, c, d);
        }
        else
        {
            printf("%d is greater than %d %d %d \n", c, a, b, d);
        }
    }
    else if (c > d)
    {
        printf("%d is greater than %d %d %d \n", c, a, b, d);
    }
    else
    {
        printf("%d is greater than %d %d %d \n", d, a, b, c);
    }
}