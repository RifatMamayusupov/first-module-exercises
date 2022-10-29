#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int year,kun;
        printf("Enter the Year:");
        scanf("%d",&year);
        if(year%400==0 && year%4==0)printf("_Kun:%d\n", year*366);
        else printf("_Kun:%d\n",year*365);
    }
    return 0;
}