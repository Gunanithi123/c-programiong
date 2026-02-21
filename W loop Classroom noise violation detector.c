#include <stdio.h>

int main() {
    int N;
    int noise;
    int i=0;
    int violation=0;
    int maxStreak=0;
    int streak=0;
    
    scanf("%d",&N);
    while(i<N){
        scanf("%d",&noise);
        if(noise>70){
            violation++;
            streak++; 
              if(streak>maxStreak){
                  maxStreak=streak;
                 
            }  }
              else{
                  streak=0;
              }
              i++;
        }
        printf("Noise violation :%d\n",violation);
        printf("Longest Violation Streak:\n%d",maxStreak);
    }
    