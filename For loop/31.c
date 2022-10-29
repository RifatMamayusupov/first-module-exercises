#include <stdio.h>
#include <math.h>
   int main (){
    while(1){
  int n;  float a=2;
  printf("Enter the N term:");
  scanf("%d",&n);
     for(int i=2; i<n; i++){
        a=2+ 1/a;
        printf("Natija: %f\n",a);
     }
         }
      return 0;
 } 