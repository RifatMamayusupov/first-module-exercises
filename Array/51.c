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
    

    int a[n], b[n];
    for(i=0; i<n; i++){
        a[i]=rand()%10;
        printf("%d\t", a[i]);  
    }
    printf("\n");

     for(i=0; i<n; i++){
        b[i]=rand()%10;
        printf("%d\t", b[i]);  
    }
    int alm;
   for(i=0; i<n+1; i++){
       alm=a[i];
       a[i]=b[i];
       b[i]=alm;
   }
   for(i=0; i<n; i++){
    printf("%d\n",a[i]);
   }
   printf("\n");
   for(i=0; i<n; i++){
    printf("%d\n",b[i]);
   }
    }
    return 0;
}
   