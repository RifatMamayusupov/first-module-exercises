#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    while(1){
int son;
printf("Enter the Son term:");
scanf("%d",&son);
   if(son>0) {
   son++;
   printf("_Sonni _new value: %d\n",son);
   }else{
    son-=2;
    printf("_Sonnu _new value:%d\n",son);
   }
      }
    return 0;
}
