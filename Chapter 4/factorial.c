#include <stdio.h>

int main(){
    int n, f;

    printf("Enter an integer :- ");
    scanf("%d",&n);

    for(f=1; n<=f; ++f){
        f *= n;
        printf("%d ", f);
        printf("%d\n", n);
    }
    printf("%d\n", f);
}
