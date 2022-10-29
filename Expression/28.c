#include <stdio.h>
#include <math.h>

//   T=e^y+h+sqrt(fabs(6.4y));

int main (){
while(1){
int y, h;
float T;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the H term: ");
scanf("%d", &h);

T=exp(y+h)+sqrt(fabs(6.4*y));
printf("Natija: %f\n");
}
   return 0;
}