#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    while(1){
int son;
printf("Enter the Son term:");
scanf("%d",&son);
 if(son>0){
    son++;
    printf("_sonni new_ value:%d\n", son);
 } 
  if (son==0){
    son=10;
    printf("_Son o'zlashtirdi: %d\n", son);
 }
 if(son<0){
    son-=2;
    printf("_sonni new_ value:%d\n", son);
 } 
      }
    return 0;
}
