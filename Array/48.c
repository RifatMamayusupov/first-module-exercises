#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (){
    while(1){
srand(time(NULL));
    int n, i;
    printf("N >>> ");
    scanf("%d",&n);
    

    int son[n];
    for(i=0; i<n; i++){
        son[i]=rand()%10;
        printf("%d\t", son[i]);  
    }

    int j;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            if(son[i]==son[j]){
                printf("%d\n",son[i]);
            }
        }
     }
    }
    return 0;
}