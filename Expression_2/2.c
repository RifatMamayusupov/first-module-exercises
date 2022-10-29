#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//  L=ctg^2*c+(2*x^2+5)/sqrt(c+t);
int main () {
   while(1){
int x,c,t;
float L;
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the C term: ");
scanf("%d", &c);
printf("Enter the T term: ");
scanf("%d", &t);

L=pow(tanh(x),2)+(2*pow(x,2)+5)/sqrt(c+t);
printf("Natija: %f\n", L);
   
       }
return 0;
   }