#include <stdio.h>

int main(){
    int maths, science, social_science, total;

    printf("Enter Maths marks : ");
    scanf("%d",&maths);

    printf("Enter Science marks : ");
    scanf("%d",&science);

    printf("Enter Social science marks : ");
    scanf("%d",&social_science);

    total = (maths + science + social_science)/3;

    if(total < 40 || maths < 33 || science < 33 || social_science < 33){
        printf("Your total percentage is %d and you are fail! \n",total);
    }
    else{
        printf("Your total percentage is %d and you are pass! \n",total);
    }
    return 0;    
}