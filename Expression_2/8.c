#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// S=(4351*y^3+2*t*ln(t))/sqrt(cos(2*y)+4351);
int main () {
   while(1){
int y,t;
float S;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the T term: ");
scanf("%d", &t);

S=(4351*pow(y,3)+2*t*log(t))/sqrt(cos(2*y)+4351);
printf("Natija: %f\n",S);
   }
   return 0;
}