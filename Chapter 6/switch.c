#include <stdio.h>

int main(){
    int a,b;
    printf("Enter integer value:- ");
    scanf("%d %d", &a,&b);

    switch (a-b)
    {
        case 1: printf("Case 1 ");
        break;
        case 2: printf("Case 2 ");
        break;
        case 3: printf("Case 3 ");
        break;
        case 4: printf("Case 4 ");
        break;
        default: printf("Default ");
    }
    printf("Your control of program is here \n");
}