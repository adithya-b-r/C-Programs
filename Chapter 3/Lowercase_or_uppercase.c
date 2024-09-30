#include <stdio.h>

int main(){
    char alphabet;

    printf("Enter the character :- ");
    scanf("%c",&alphabet);

    if(alphabet >= 65 && alphabet <= 90){
        printf("Entered character is uppercase \n");
    }
    else if(alphabet >=97 && alphabet <= 122){
        printf("Entered character is lowercase \n");
    }
    else{
        printf("Entered character is neither uppercase nor lowercase \n");
    }
    return 0;
}

//ASCII