#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
 
   int  son, c, c1;
   printf("Enter the two_room term: ");
   scanf("%d", &son);
   c=son/10%10;
   c1=son/1%10;
   printf("Onliklar_xonasi=%d  va  _birliklar_xonasi=%d\n", c, c1);
    }
    return 0;
  }
