#include <stdio.h>

int main()
{
    int membership;
    float purchase, finalAmount;
    scanf("%d",&membership);
    scanf("%f",&purchase);
    if(membership==1){
         if(purchase>=100){
        finalAmount=purchase-(purchase*0.20);
        printf("Final amount %.2f", finalAmount);
    }
        else{
        finalAmount=purchase-(purchase*0.10);
        printf("Final amount %.2f", finalAmount);
    }
    }
    else if(membership==0){
        finalAmount=purchase;
        printf("Final amount %.2f", finalAmount);
    }
    else{
        printf("Invalid Member Details");
    }
    return 0;
}