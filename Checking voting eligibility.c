#include <stdio.h>
int main(){
    int Age;
    scanf("%d",&Age);
    if(Age>=18)
    {
        printf("Eligible to vote");
    }
    else {
        printf("Not eligible for vote");
    }
    
    return 0;
    
}