#include <stdio.h>
#include <math.h>
int main (){
    while(1){
  float konfet_narx;
  int n;
  printf("Enter the Konfet_Narx:");
  scanf("%f",&konfet_narx);
  printf("Enter the N term:");
  scanf("%d",&n);
  for(int i=1; i<=n;i++){
    printf("%d_kg konfet=%.2f\n",i,i*konfet_narx);
  }
    }
    return 0;
}