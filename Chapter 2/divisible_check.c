#include <stdio.h>

int main(){
    int num;

    printf("Enter the number : ");
    scanf("%d",&num);

    if(num%97 == 0){
        printf("97 is divisble by %d \n", num);
    }
    else{
        printf("97 is not divisible by %d \n", num);
    }
    return 0;
}