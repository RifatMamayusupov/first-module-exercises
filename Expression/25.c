#include <stdio.h>
#include <math.h>

//   G=e^2y+sin(f^2);

int main (){
while(1){
int y,f;
float G;
printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the F term: ");
scanf("%d", &f);

G=exp(2*y)+sin(pow(f,2));
printf("Natija: %f\n", G);

}
return 0;
}