#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
    while(1){
int son, son2, son1,sum=0,sum1=0;
printf("Enter the Son term:");
scanf("%d",&son);
printf("Enter the Son1 term:");
scanf("%d",&son1);
printf("Enter the Son2 term:");
scanf("%d",&son2);
if(son>0) sum+=1;
else sum1+=1;
if(son1>0) sum+=1;
else sum1+=1;
if(son2>0) sum+=1;
else sum1+=1;
printf("Musbat_sonlar: %d va Manfiy_ sonlar: %d\n",sum, sum1);
    }
    return 0;
}
