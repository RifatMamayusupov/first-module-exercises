#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
    while(1){
    int i,t;
    int a[5], b[5], c[10];
    for(i=0; i<5; i++){
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\n");
    for(i=0; i<5; i++){
        printf("b[%d]=",i);
        scanf("%d",&b[i]);
    }
    for(int j=1; j<5; j++){
        for(i=1; i<5; i++){
     if(a[i]<a[i-1]){
         t=a[i];
         a[i]=a[i-1];
         a[i-1]=t;
     }
     if(b[i]<b[i-1]){
        t=b[i];
        b[i]=b[i-1];
        b[i-1]=t;
     }
        }
    }
        
        int counta=0, countb=0;
        for(i=0; i<10; i++){
            if(a[counta]>b[countb]){
                c[i]=b[countb];
                countb++;
            }else{
                c[i]=a[counta];
                counta++;
            }
            printf("c[%d]=%d\n",i,c[i]);
        }
        printf("\n");
    }

    return 0;
}