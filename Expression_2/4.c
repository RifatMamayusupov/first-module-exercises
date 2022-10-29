#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// F=(sqrt((2+y)^2+sqrt(sin(y+5)^2/7)))/ln(x-1)-y^3;
int main () {
   while(1){
int y,x;
float F;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);

F=(sqrt(pow((2+y),2)+pow(sqrt(sin(y+5)),1/7)))/log(x+1)-pow(y,3);
printf("Natija: %f\n", F);

       }
return 0;
   }