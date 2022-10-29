#include <stdio.h>
#include <math.h>

//  T=sin(2u)ln(2y^2+sqrt(x));
int main (){
while(1){
int u,y,x;
float T;
printf(" Enter the U term: ");
scanf("%d", &u);
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

T=sin(2*u)*log(2*pow(y,2)+sqrt(x));
printf("Natija: %f\n", T);

}
   return 0;
}