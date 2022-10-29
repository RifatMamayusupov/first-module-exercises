#include <stdio.h>
#include <math.h>
  void RestPS (int x1, int y1, int x2, int y2){
        int S; int Pre;
        Pre=abs(x2-x1)+abs(y2-y1);
        S=abs(x2-x1)*abs(y2-y1);
        printf("Natija: %d\n",Pre);
        printf("Natija: %d\n",S);
     printf
        
  }
   int main (){

    while(1){
    int x1, x2, y1, y2;
      printf("Enter The X1 term:");
    scanf("%d",&x1);
      printf("Enter The X2 term:");
    scanf("%d",&x2);
      printf("Enter The Y1 term:");
    scanf("%d",&y1);
      printf("Enter The Y2 term:");
    scanf("%d",&y2);

         RestPS(x1,y1,x2,y2);
   }
   return 0;
         }