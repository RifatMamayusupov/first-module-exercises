#include <stdio.h>
#include <math.h>

//   Z=3y^2+sqrt(y^3+1);
int main (){
while(1){
int y;
float Z;
printf(" Enter the Y term: ");
scanf("%d", &y);

Z=3*pow(y,2)+sqrt(pow(y,3)+1);
printf("Natija: %f\n", Z);
}
     return 0;
}
