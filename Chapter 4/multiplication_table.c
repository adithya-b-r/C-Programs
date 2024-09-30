#include <stdio.h>

int main(){
    int t, n=1;

    printf("Enter the number:- ");
    scanf("%d",&t);

    while(n<=10){
        printf("%d x %d = %d\n", t, n, t*n);
        n++; //n+=1
    }
}