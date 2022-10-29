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
    int a=1, count=0;
    for(i=0; i<n; i++){
        if(son[i]>son[i+1]){
           a=i;
           count++;
        }
    }
    printf("\n");
    printf("EX:%d\n  nechta:%d\n",son[a], count);
    }
    return 0;
}