#include <stdio.h>
#include <math.h>

//   Z=sin(p^2+0.4)^3;

int main (){
while(1){
int p;
float Z;
printf(" Enter the P term: ");
scanf("%d", &p);

Z= sin(pow(p*p+0.4,3));

printf("Natija: %f\n",Z);
}
  return 0;
}
