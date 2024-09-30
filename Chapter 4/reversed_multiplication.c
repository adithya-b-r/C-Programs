#include <stdio.h>

int main(){
    int n=10, t;

    printf("Enter the number:- ");
    scanf("%d",&t);

    while(n>=1){
        printf("%d x %d = %d\n", t, n, t*n);
        n--; //n-=1
    }
}