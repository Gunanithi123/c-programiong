#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int remainder=n%10;
    int quotient=n/10;
    printf("quotient is:%d\n", quotient);
    printf("remainder is:%d", remainder);
    return 0;
}