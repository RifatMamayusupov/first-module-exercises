#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){

        srand(time(NULL));
    int n, m, i, j, k;
    printf("M >>>");
    scanf("%d",&m);

    printf("N >>>");
    scanf("%d",&n);

    int a[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            a[i][j]=rand()%10;
             printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
         printf("\n");
         
         for(j=0; j<m; j++){
         for(i=0; i<n; i++){
         if(j%2==0){
             printf("%d\t",a[j][i]);
         }else {
            printf("%d\t",a[j][n-1-i]);
           }
              }
          printf("\n");
       }   
       printf("\n");

       return 0;
 }
    