#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){

// 14- uyga;
    srand(time(NULL));
    int  n, i, j;
   

    printf("N >>> ");
    scanf("%d",&n);

    int a[n][n];

    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            a[i][j]=rand()%10;
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }

     for(i=0; i<n; i++){
            for(i=0; i<n-j; i++){
                printf("%d ", a[i][j]);
            }
            for(j=i+1; j<n; j++){
                printf("%d ", a[j][n-i-1]);
            }
        }

  return 0;
 }
 
