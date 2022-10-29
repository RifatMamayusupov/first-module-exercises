#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// A=tg(x^4-6)-cos^3(z+xy)/cos^4*x^3*c^2;
int main () {
   while(1){
int x,z,y,c;
float A;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the Z term: ");
scanf("%d", &z);
printf("Enter the C term: ");
scanf("%d", &c);

A=(tan(pow(x,4)-6)-pow(cos(z+x*y),3))/pow(cos(pow(x,3)*pow(c,2)),4);
printf("Natija: %f\n",A);
   }
return 0;
   }