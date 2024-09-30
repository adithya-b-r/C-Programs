#include <stdio.h>

void display();     //Funtion prototype

int main(){
    int a;
    printf("Initializing display funtion \n \n");
    display();      //Funtion call
    printf("Display funtion finished its work \n");
    return 0;
}

void display(){     //Funtion definition
    printf("Hi I am display!\n \n");
}