#include <stdio.h>
#include <math.h>
int main (){
    while(1){
        int son;
        printf("Enter the Son term:");
        scanf("%d", &son);
        if(son>0 && son%2!=0)printf("_Son:%d\n",son);
        if(son<0 && son%2==0)printf("_Son:%d\n",son);
        if(son==0)printf("_Son:%d\n",0);
    }
    return 0;
}
