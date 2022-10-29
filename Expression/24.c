#include <stdio.h>
#include <math.h>

//   F=2sin(0.214y^5+1);
int main (){
while(1){
int y;
float P;
printf(" Enter the Y term: ");
scanf("%d", &y);

P=2*sin(0.214*pow(y,5)+1);
printf("Natija: %f\n",P);
   }
return 0;
}
