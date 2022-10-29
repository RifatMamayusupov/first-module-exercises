#include <stdio.h>
#include <math.h>
int main (){
    while(1){
  float konfet_narx;
  printf("Enter the Konfet_Narx:");
  scanf("%f",&konfet_narx);
  for(float i=1.2; i<2.1;i+=0.1){
  printf("%.1f_kg konfet=%.2f\n",i,i*konfet_narx);
  }
    }
    return 0;
}