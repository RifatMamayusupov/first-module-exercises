#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main (){
    while(1){
int m, n, i, j;
   printf("M >>> ");
  scanf("%d",&m);

   printf("N >>> ");
  scanf("%d",&n);

  int matrix[m][n], satr[m];
  int musbat, manfiy;

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        matrix[i][j]=rand()%10-rand()%10;
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }


  for(j=n-1; j>=0; j--){
    
  }
    }
    return 0;
  }