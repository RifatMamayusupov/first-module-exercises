#include <stdio.h>
#include <math.h>

//   H=siny^2-2.8y+sqrt(fabs(y));
int main (){
while(1){
int y;
float H;
printf(" Enter the Y term: ");
scanf("%d", &y);

H=sin(pow(y,2))-2.8*y+sqrt(fabs(y));
printf("Natija: %f\n",H);
}
return 0;
}