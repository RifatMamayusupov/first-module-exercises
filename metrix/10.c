#include <stdio.h>
#include <stdlib.h>
 int main (){
    int n, m, i, j;
    printf("N >>> ");
    scanf("%d",&n);

    printf("M >>> ");
    scanf("%d",&m);

    int  a[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            a[i][j]=rand()%10;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(i=0; i<n; i++){
        for(j=1; j<m; j+=2){
            printf("%d\t",a[i][j]);
          } 
    printf("\n");
        }
        
   
        
    


   return 0;


 }