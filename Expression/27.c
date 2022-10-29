#include <stdio.h>
#include <math.h>

//  W=1.03v+e^2y+sin(f);

int main (){
while(1){
int v,y,f;
float W;
printf(" Enter the V term: ");
scanf("%d", &v);
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the F term: ");
scanf("%d", &f);

W=1.03*v+exp(2*y)+sin(f);
printf("Natija: %f\n", W);
}
  return 0;
}

