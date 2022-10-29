#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// A=(tg(y^3-h^4)+h^2)/sin^3h+y;
int main () {
   while(1){
int y,h;
float A;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the H term: ");
scanf("%d", &h);

A=(tan(pow(y,3)-pow(h,4))+pow(h,2))/pow(sin(h),3)+y;
printf("Natija: %f\n", A);

   }
return 0;
}
