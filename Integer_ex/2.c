#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   float M, Tonna;
   printf("Enter the M lenght: ");
   scanf("%f", &M);
      Tonna= M/1000;
   printf("%.0f_kilogram= %.2f tonnaga_teng\n",M, Tonna);   
    }
    return 0;
  }