#include <stdio.h>
#include <math.h>

//   R=fabs(sqrt(sin^2y+6.835+e^x));
int main (){
while(1){
int y,x;
float R;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

R=fabs(sqrt(pow(sin(y),2))+6.835+exp(x));
printf("Natija: %f\n",R);

}
 return 0;
}