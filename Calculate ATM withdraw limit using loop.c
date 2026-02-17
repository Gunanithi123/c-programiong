#include <stdio.h>

int main()
{
 
    int N;
    scanf("%d",& N);
  int toatalAmountWithdraw;
  int total=0;
  
  for(int i=0;i<N;i++){
      scanf("%d",& toatalAmountWithdraw);
     total+= toatalAmountWithdraw;
  }
       if(toatalAmountWithdraw<10000){
           printf("Approved");
       }
       else{
           printf("Limit exceed");
       }
  
    
    return 0;
}