#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   int  son, c,c1,c2,c3;
   printf("Enter the three_room term: ");
   scanf("%d", &son);
   c=son/1000%10;
   c1=son/100%10;
   c2=son/10%10;
   c3=son/1%10;
   printf("%d_sonining Yuzliklar xonasi_raqami:%d\n",son,c1);
    }
    return 0;
  }
