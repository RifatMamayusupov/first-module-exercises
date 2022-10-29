#include <stdio.h>
#include <stdlib.h>
 int main (){
    while(1){
   int n, i, j;
    printf("N >>> ");
    scanf("%d",&n);

    for(i=n; i>=1; i--){
      for(j=1; j<2*n-1; j++){
       if(j>=n-(i-1) && j<=n+(i-1)){
         printf("%d");
        }else{
          printf(" ");
        }
         }
        printf("\n");
     }
}
    return 0; 
 }