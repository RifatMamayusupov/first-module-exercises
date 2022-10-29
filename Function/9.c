#include <stdio.h>
#include <math.h>
 void Addleftdigit(int *k, int *raqam){
    int son=10;
    while(*k>son) son*=10;
     *k+=*raqam*son;
     printf("Natija:%d\n",*k);
     printf("\n"); 
    
 }
 int main (){
    for (int i=1; i<10; i++){
        int k, raqam;
        printf("Enter The K term:");
        scanf("%d", &k);
        printf("Enter The raqam term:");
        scanf("%d", &raqam);
        Addleftdigit(&k, &raqam);
    
    }
    return 0;
 }