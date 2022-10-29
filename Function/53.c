#include <stdio.h>
#include <math.h>
 void PrevDate(int Y){
    if(Y % 400==0 && Y % 4==0){
        int year, month, day;
        year= Y /366;
        month= (Y % 366)/30;
        day= (Y % 366) % 30;

        printf("%d.%d.%d and predate: %d.%d.%d\n",day,month,Y,day-1,month,Y);  
    }else{
        int year, month, day;
        year= Y /365;
        month= (Y % 365)/30;
        day= (Y % 365) % 30;
         printf("%d.%d.%d and predate: %d.%d.%d\n",day,month,Y,day-1,month,Y);  
    }
 }
  int main (){
    while(1){
    int Y;
    printf("Y >>> ");
    scanf("%d",&Y);

    PrevDate(Y);
   }
    return 0;
  }
