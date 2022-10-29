#include <stdio.h>
#include <math.h>
  int main (){
    while(1){
   float Bayt,Kilobayt;
   printf("Enter the Bayt : ");
   scanf("%f", &Bayt);

   Kilobayt=Bayt/1024;
   printf("Kb= %f\n", Kilobayt);
    }
    return 0;
  }