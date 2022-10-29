#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <time.h>

int main (){
    while(1){
srand(time(NULL));
    int n, i, count=0;
    printf("N >>> ");
    scanf("%d",&n);
    

    int a[n],b[n] ;
    for(i=0; i<n; i++){
        a[i]=rand()%100;
        printf("a[%d]=%d\n",i, a[i]);  
    }
    printf("\n");
    for(i=0; i<n; i++){
        if(a[i]%2==0){
            b[++count]=a[i];
        }
    }
    printf("soni:%d\n",count);
    for(i=0; i<count;i++){
      printf("b[%d]=%d\n",i,b[i]);
    }
    }
    return 0;
}