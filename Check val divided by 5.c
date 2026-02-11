#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    if(num%5==0){
        printf("Divided by 5");
    }
    else{
        printf("Not divided by 5");
    }
    return 0;
    
}