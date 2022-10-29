#include <stdio.h>
#include <math.h>

//   W=e^y+r +7.2sinr;

int main (){
while(1){
int y,r;
float W;

printf(" Enter the Y term: ");
scanf("%d", &y);
printf(" Enter the R term: ");
scanf("%d", &r);

W=exp(y+r)+7.2*sin(r);
printf("Natija: %f\n", W);
}
return 0;
}