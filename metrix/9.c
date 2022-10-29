#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){
    while(1){
        srand(time(NULL));
    int n, m, i, j, k;
    printf("N >>>");
    scanf("%d",&n);

    printf("M >>>");
    scanf("%d",&m);

   
    int a[m][n];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            a[i][j]=rand()%10;
             printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
 printf("\n");

    for(i=0; i<n; i++)
      {for(j=0; j<m; j+=2){
       printf("%d\t",a[i][j]);
      }
       printf("\n");
    }
   

    }
    return 0;
 }