#include <stdio.h>

int main(){
    char ch=getchar();
    while(ch!='Y'){
        ch=getchar();
    }
    printf("Out of the loop \n");
    return 0;
}