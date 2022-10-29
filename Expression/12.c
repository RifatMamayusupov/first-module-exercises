#include <stdio.h>
#include <math.h>

//   K=7t^2+3sinx^3+9.2;

int main (){
while(1){
int t,x;
float K;
printf(" Enter the T term: ");
scanf("%d", &t);
printf(" Enter the X term: ");
scanf("%d", &x);

K=7*pow(t,2)+3*sin(pow(x,3))+9.2;
printf("Natija: %f", K);

}
return 0;
}