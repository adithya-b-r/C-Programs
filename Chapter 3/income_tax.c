#include <stdio.h>

int main()
{
    double income, tax;

    printf("Enter your income:- ");
    scanf("%lf", &income);

    if (income >= 250000 && income <= 500000)
    {
        tax = tax + (income - 250000.00) * 0.05;
        printf("Your net income tax = %.2lf \n", tax);
        printf("Remaining amount = %.2lf \n", income - tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = tax + (income - 250000.00) * 0.20;
        printf("Your net income tax = %.2lf \n", tax);
        printf("Remaining amount = %.2lf \n", income - tax);
    }
    else if (income >= 1000000)
    {
        tax = tax + (income - 250000.00) * 0.30;
        printf("Your net income tax = %.2lf \n", tax);
        printf("Remaining amount = %.2lf \n", income - tax);
    }
    else
    {
        printf("Your income is below 250000 and your not applicable to pay the tax! \n");
    }

    return 0;
}