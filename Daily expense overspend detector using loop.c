#include <stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
  int expense;
  int total=0;
  int overSpend=0;
  for(int i=0;i<N;i++){
      scanf("%d",&expense);
      total+=expense;
       
       if(expense>1000){
           overSpend++;
       }
  }
    printf("%d\n",total);
    
    printf("%d",overSpend);

    return 0;
}