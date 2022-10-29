#include <stdio.h>
#include <math.h>
int main (){
    // V > U
    while(1){
        
int Q_tezlik,Do_tezlik, harakatlanish_V, Oqimga_Q;
int S;
printf("Enter the Qayiq-tezligini:");
scanf("%d", &Q_tezlik);
printf("Enter the Daryo-tezligini:");
scanf("%d", &Do_tezlik);
printf("Enter the harakatlanish_V:");
scanf("%d", &harakatlanish_V);
printf("Enter the Oqimga_Q");
scanf("%d", &Oqimga_Q);

S=(Q_tezlik*harakatlanish_V)-(Do_tezlik*Oqimga_Q);
printf("Qayiq_yurgan Yo'l =%d\n",S);
    }
    return 0;
}


