#include <stdio.h>
#include <math.h>

//   G=e^2y+sin(f);
int main (){
while(1){
int y,f;
float G;
printf(" Enter the F term: ");
scanf("%d", &f);
printf(" Enter the Y term: ");
scanf("%d", &y);

G=exp(2*y)+sin(f);
printf("Natija: %f\n", G);
}
return 0;
}
