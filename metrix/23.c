#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  int main (){
  srand(time(NULL));

    while(1){
   int m, n, k, i, j;
   printf("M >>> ");
   scanf("%d",&m);

    printf("N >>> ");
   scanf("%d",&n);



  int matrix[m][n];  int sum[m];
  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        matrix[i][j]=rand()%10;
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }

    for(i=0; i<m; i++){
        sum[i]=matrix[0][0];
        for(j=0; j<n; j++){
            if(matrix[i][j]<sum[i]){
               sum[i]=matrix[i][j];
            }
        }
      }

      for(i=0; i<m; i++){
        printf("%d satir eng kichigi: %d\n",i, sum[i]);
      }
    }
    return 0;
  }