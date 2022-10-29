#include <stdio.h>
#include <math.h>

//   P=e^y+5.5+9.1*h^3;
int main (){
while(1){
int y, h;
float P;
printf(" Enter the H term: ");
scanf("%d", &h);
printf(" Enter the Y term: ");
scanf("%d", &y);

P=exp(y+5.5)+9.1*pow(h,3);
printf("Natija: %f\n",P);

}
   return 0;
}
