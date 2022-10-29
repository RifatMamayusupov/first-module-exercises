#include <stdio.h>
#include <math.h>

//   G=n(y+3.5)+sqrt(y);
int main (){
while(1){
int n,y;
float G;
printf(" Enter the n term: ");
scanf("%d", &n);
printf(" Enter the Y term: ");
scanf("%d", &y);
G=n*(y+3.5)+sqrt(y);
printf("Natija: %f\n", G);

}
    return 0;
}
