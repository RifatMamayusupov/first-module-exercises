#include <stdio.h>
#include <math.h>

int main(){
    while(1){
float Pi=3.14;
int r;
float L,S;
printf(" Enter  the R term: ");
scanf("%d", &r);

L=2*Pi*r;
printf("Uzunlik: %f\n",L);
S=Pi*pow(r,2);
printf("Yuzasi: %f\n",S);
    }
    return 0;
}


