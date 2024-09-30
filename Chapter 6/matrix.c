#include <stdio.h>

void AB();
void BA();
void menu();

int a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
int A, B, C, D, E, F, G, H, I, J, K, L, M, N, O, P, Q, R;
int opt;

int main()
{ //Multiplication of matrix
    printf("\n\nEnter the elements of first matrix:-\n");
    printf("1st row :- ");
    scanf("%d %d %d", &a, &b, &c);
    printf("2nd row :- ");
    scanf("%d %d %d", &d, &e, &f);
    printf("3rd row :- ");
    scanf("%d %d %d", &g, &h, &i);

    printf("Enter the elements of Second matrix:-\n");
    printf("1st row :- ");
    scanf("%d %d %d", &j, &k, &l);
    printf("2nd row :- ");
    scanf("%d %d %d", &m, &n, &o);
    printf("3rd row :- ");
    scanf("%d %d %d", &p, &q, &r);

    menu();
}

void menu()
{
    printf("1) AxB \n");
    printf("2) BxA \n");
    printf("3) Enter again \n");
    printf("4) Exit \n ");
    printf("Enter your option :- ");
    scanf("%d", &opt);

    switch (opt)
    {
    case 1: AB();
        break;
    case 2: BA();
        break;
    case 3: main();
        break;
    case 4: return 0;
        break;
    default: menu();
    }
}

void AB()
{
    A = (a * j) + (b * m) + (c * p);
    B = (a * k) + (b * n) + (c * q);
    C = (a * l) + (b * o) + (c * r);

    D = (d * j) + (e * m) + (f * p);
    E = (d * k) + (e * n) + (f * q);
    F = (d * l) + (e * o) + (f * r);

    G = (g * j) + (h * m) + (i * p);
    H = (g * k) + (h * n) + (i * q);
    I = (g * l) + (h * o) + (i * r);

    printf("      %d %d %d \n", A, B, C);
    printf("AxB = %d %d %d \n", D, E, F);
    printf("      %d %d %d \n", G, H, I);

    menu();
}

void BA()
{
    J = (j * a) + (k * d) + (l * g);
    K = (j * b) + (k * e) + (l * h);
    L = (j * c) + (k * f) + (l * i);

    M = (m * a) + (n * d) + (o * g);
    N = (m * b) + (n * e) + (o * h);
    O = (m * c) + (n * f) + (o * i);

    P = (p * a) + (q * d) + (r * g);
    Q = (p * b) + (q * e) + (r * h);
    R = (p * c) + (q * f) + (r * i);

    printf("      %d %d %d \n", J, K, L);
    printf("BxA = %d %d %d \n", M, N, O);
    printf("      %d %d %d \n", P, Q, R);

    menu();
}