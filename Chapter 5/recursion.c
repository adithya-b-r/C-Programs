#include <stdio.h>

int factorial(int x); //function prototype

int main(){
    int a = 5; //function call
    printf("The value of factorial %d is %d\n", a, factorial(a));
    return 0;
}

int factorial(int x){
    printf("Calling factorial(%d) \n", x);
    if (x==0 || x==1){
    return 1;
    }
    else{
    return x*factorial(x-1);
    }
}