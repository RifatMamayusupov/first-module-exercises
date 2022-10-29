#include <stdio.h>
#include <math.h>
 void InvertDigit(int *son){
    int teskari=*son;
         *son=0;
    while(teskari !=0){
        *son=*son*10+(teskari%10);
        teskari/=10;
       
    }
     printf("\n");
 }
 int main (){
    int i;
    for (i=1; i<10; i++){
        int a, b, c;
        printf("Enter the A term:");
        scanf("%d", &a);
        printf("Enter the B term:");
        scanf("%d", &b);
        printf("Enter the C term:");
        scanf("%d", &c);
         InvertDigit(&a);
         InvertDigit(&b);
         InvertDigit(&c);
        printf("Natija:%d\n",a);
        printf("Natija:%d\n",b);
        printf("Natija:%d\n",c);
    }
    return 0;
 }
 
