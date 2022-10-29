#include <stdio.h>
#include <math.h>

//   N=3y^2+sqrt(fabs(y+1));

int main (){
while(1){
int y;
float N;
printf(" Enter the Y term: ");
scanf("%d", &y);

N=3*pow(y,2)+sqrt(fabs(y+1));
printf("Natija: %f\n", N);
}
return 0;
}
