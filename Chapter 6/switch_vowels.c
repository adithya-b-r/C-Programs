#include <stdio.h>

int main(){
    char ch;

    printf("Enter character value:- ");
    scanf("%c",&ch);

    switch (ch)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': printf("Entered character is vowel! \n");
            break;
        default: printf("default \n");
    }
    return 0;
}