#include <stdio.h>
#include <math.h>

int main(){
    while(1){
int x1,x2;
float Masofa;
printf(" Enter  the X1 term: ");
scanf("%d", &x1);
printf(" Enter  the X2 term: ");
scanf("%d", &x2);

Masofa=fabs(x1-x2);
printf("Sonlar oqida %d dan %d gacha bo'lgan masofa:%.2f\n", x1, x2, Masofa);
    }
    return 0;
}