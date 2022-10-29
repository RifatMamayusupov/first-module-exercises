#include <stdio.h>
#include <math.h>

//   S=9.756y^7+2tgx;
int main (){
while(1){
int y,x;
float S;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the X term: ");
scanf("%d", &x);

S=9.756*pow(y,7)+2*tan(x);
printf("Natija: %f\n", S);

}
  return 0;
}