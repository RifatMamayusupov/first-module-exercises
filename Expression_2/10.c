#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// U=(tg^3*y+sin^5x*sqrt(b-c))/sqrt(a-b+c);
int main () {
   while(1){
int y,x,b,a,c;
float U;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the B term: ");
scanf("%d", &b);
printf("Enter the A term: ");
scanf("%d", &a);
printf("Enter the C term: ");
scanf("%d", &c);

U=(pow(tan(y),3)+pow(sin(x),5)*sqrt(b-a))/sqrt(a-b+c);
printf("Natija: %f\n",U);
   }
   return 0;
}
