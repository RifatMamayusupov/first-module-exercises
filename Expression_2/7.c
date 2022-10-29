#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// T=(sqrt(x+b-a)+ln(y))/arctg(b+a);
int main () {
   while(1){
int x,y,a,b;
float T;
printf("Enter the Y term: ");
scanf("%d", &y);
printf("Enter the X term: ");
scanf("%d", &x);
printf("Enter the A term: ");
scanf("%d", &a);
printf("Enter the B term: ");
scanf("%d", &b);

T=(sqrt(x+b-a)+log(y))/atan(b+a);
printf("Natija: %f\n",T);
   }
return 0;
}