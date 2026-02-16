#include <stdio.h>
int main(){
    int n,rev;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
       rev=n-i;
    
        printf("%d\n", rev);
    }
        return 0;
    
}