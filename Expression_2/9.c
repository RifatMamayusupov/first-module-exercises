#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// D=(K^-arx -a*sqrt(6)-cos(3ab))/sin^2(a*arcsinx+ln*y);
int main () {
   while(1){
int k,a,r,x,b,y;
float  D;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the K term: ");
scanf("%d", &k);
printf("Enter the A term: ");
scanf("%d", &a);
printf("Enter the R term: ");
scanf("%d", &r);
printf("Enter the B term: ");
scanf("%d", &b);

D=(pow(k,-a*r*x)-a*sqrt(6)-cos(3*a*b))/pow(sin(a*asin(x)+log(y)),2);
printf("Natija: %f\n",D);
   }
   return 0;
}
