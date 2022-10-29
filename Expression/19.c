#include <stdio.h>
#include <math.h>

//   P= n(sqrt(y^3+1.09g);)

int main (){
while(1){
int g,y,n;
float P;
printf(" Enter the G term: ");
scanf("%d", &g);
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the N term: ");
scanf("%d", &n);

P=n*sqrt(pow(y,3)+1.09*g);
printf("Natija: %f", P);
}
  return  0;
}