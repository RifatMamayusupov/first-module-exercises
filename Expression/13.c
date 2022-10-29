#include <stdio.h>
#include <math.h>

//   E=sqrt(fabs(3y^2+0.5y+4));
int main (){
while(1){
int y;
float E;
printf(" Enter the Y term: ");
scanf("%d", & y);

E=sqrt(fabs(3*pow(y,2)+0.5*y+4));
printf("Natija: %f\n", E);
}
return 0;
}
