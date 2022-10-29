#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//  L=(sqrt(e^x-cos^4(x^2a^5))+arctg^4(a-x^5))/esqrt(fabs(a+xc^4));
int main () {
   while(1){
int x,a,c;
float L;
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the A term: ");
scanf("%d", &a);
printf("Enter the C term: ");
scanf("%d", &c);


L=(sqrt(exp(x)-pow(cos(pow(x,2)*pow(a,5)),4))+pow(atan(a-pow(x,5)),4))/exp(sqrt(fabs(a+x*pow(c,4))));
printf("Natija: %f\n", L);

   }
return 0;
}