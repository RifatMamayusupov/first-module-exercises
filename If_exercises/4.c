#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    while(1){
int son, son2, son1,sum=0;
printf("Enter the Son term:");
scanf("%d",&son);
printf("Enter the Son1 term:");
scanf("%d",&son1);
printf("Enter the Son2 term:");
scanf("%d",&son2);

if(son>0) sum+=1;
if(son1>0) sum+=1;
if(son2>0) sum+=1;
printf("Musbat_son: %d\n",sum);
    }
    return 0;
}