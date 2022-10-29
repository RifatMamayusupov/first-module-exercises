#include <stdio.h>
#include <math.h>

//   S=sqrt(cos4y^2+7.151);
int main (){
while(1){
int y;
float S;
printf(" Enter the Y term: ");
scanf("%d", &y);

S=sqrt(cos(4*pow(y,2))+7.151);
printf("Natija: %f\n", S);

}
   return 0;
}