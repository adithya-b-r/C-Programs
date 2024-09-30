#include <stdio.h>

void goodMorning();
void goodAfternoon();
void goodEvening();
void goodNight();

int main(){
    goodMorning();
    return 0;
}

void goodMorning(){
    printf("Good morning Adithya \n");
    goodAfternoon();
}

void goodAfternoon(){
    printf("Good Afternoon Adithya \n");
    goodEvening();
}

void goodEvening(){
    printf("Good evening Adithya \n");
    goodNight();
}

void goodNight(){
    printf("Good night Adithya \n");
}