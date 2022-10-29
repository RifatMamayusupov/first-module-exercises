#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
    while(1){
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);
    

    int son[n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }  int n, i;
    printf("N >>> ");
    scanf("%d",&n);
    

    int son[n];
    for(i=0; i<n; i++){
        printf("son[%d]=",i);
        scanf("%d",&son[i]);
    }
  int nechta=0, index=0;
    for(int i=0; i<n; i++){
        nechta = 0;
        for(int j=0; j<n; j++){
            if(son[i]==son[j]){
                nechta++;
            }
        }
        if(nechta==0){
            son[index] =son[i];
            printf("%d ", son[index]);
            index++;
        }
    }
    printf("\n");

    }
    return 0;
}