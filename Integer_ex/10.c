#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   int  son, c, c1;

   printf("Enter the three_room term: ");
   scanf("%d", &son);
   c=son/10%10;
   c1=son/1%10;
   printf("%d_sonning Birliklar_xonasi=%d va onliklar_xonasi=%d\n",son,c1,c);
    }
    return 0;
  }
