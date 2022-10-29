#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   int  son, c,c1,c2,teskari=0;
   printf("Enter the three_room term: ");
   scanf("%d", &son);
   c=son/100%10;
   c1=son/10%10;
   c2=son/1%10;
   teskari=((teskari*1+c)*10+c2)*10+c1;
   printf("%d_sonning O'nlik va BIrliklar Xonasini-raqamlar Joyi_almashdi: %d\n", son, teskari);
    }
    return 0;
  }