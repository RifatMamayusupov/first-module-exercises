#include <stdio.h>
#include <math.h>
 void Addrightdigit(int *k, int *raqam){
    int son;
     son=*k*10+*raqam;
     printf("Natija:%d\n",son);
     printf("\n");
 }
 int main (){
    for (int i=1; i<10; i++){
        int k, raqam;
        printf("Enter The K term:");
        scanf("%d", &k);
        printf("Enter The raqam term:");
        scanf("%d", &raqam);
        Addrightdigit(&k, &raqam);
    
    }
    return 0;
 }