#include <stdio.h>

int main()
{
int salary; 
  int AbsentDays; 
  int finalSalary;
      scanf("%d",&salary);
      scanf("%d",&AbsentDays);
     finalSalary=salary-(AbsentDays*100);
     printf("finalSalary :%d",finalSalary);
    return 0;
}