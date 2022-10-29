#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
 
   int  son, c, c1, sum;
   printf("Enter the two_room term: ");
   scanf("%d", &son);
   c=son/10%10;
   c1=son/1%10;
   sum=c+c1;
   printf("Raqamlar_soni yig'indisi=%d\n", sum);
    }
    return 0;
  }