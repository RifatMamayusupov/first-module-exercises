#include <stdio.h>
#include <math.h>
int main (){
    while(1){
int n; float a, son, b;
printf("Entr the N term:");
scanf("%d", &n);
printf("Entr the A term:");
scanf("%f", &a);
printf("Entr the B term:");
scanf("%f", &b);
for(int i=a; i<=b; i++){
    son=(b-a)/n;
    printf("%d_nuqta=%f\n",i,son);
}
    }
    return 0;
}