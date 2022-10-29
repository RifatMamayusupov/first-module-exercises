#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main (){
    srand(time(NULL));
    while(1){
  int m,n,i,j;
      
      printf("M >>> ");
      scanf("%d",&m);

      printf("N >>> ");
      scanf("%d",&n);
      
      int matrix[m][n]; 
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            matrix[i][j]=rand()%10;
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
      }

      int mult[n];

      for(j=0; j<n; j++){
         mult[j]=matrix[0][0];
        for(i=0; i<m; i++){
           if(matrix[i][j]>mult[j]){
            mult[j]=matrix[i][j];
           }
        }
      }

      for(j=0; j<n; j++){
        printf("%d ustun eng kattasi: %d\n",j,mult[j]);
      }

    }
    return 0;
  }