#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   int  son, c, c1,almashuv;

   printf("Enter the two_room term: ");
   scanf("%d", &son);

   c=son/10%10;
   c1=son/1%10;
   printf("Onliklar_xonasi=%d  va  _birliklar_xonasi=%d\n", c, c1);
   almashuv=c;
   c=c1;
   c1=almashuv;
   printf("Xona_raqamlari almashdi: Onlik=%d va birlik=%d\n",c,c1);
    }
    return 0;
  }