#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// P=sin^3x+ln(2y+3x)/t^3+sqrt(x);
int main () {
   while(1){
int x,y,t;
float P;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the T term: ");
scanf("%d", &t);

P=(pow(sin(x),3)+log(2*y+3*x))/pow(t,3)+sqrt(x);
printf("Natija: %f\n", P);
   }
   return 0;
}