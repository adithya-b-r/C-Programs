#include <stdio.h>

/*sum is a function which takes a and b as input
  and returns an integer as an output*/

int sum(int a, int b);  //funtion prototype declaration

int main(){
    int c;      //2 and 5 are arguements & a and b are parameters
    c = sum(2, 5);  //funtion call (Here c is eq to function sum)
    printf("The value of c is %d \n", c);
}

int sum(int a, int b){ 
    int result;
    result = a + b;
    return result;  //can also use a+b, a*b, a-b, a/b; in place of result.
}