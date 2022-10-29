#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int i,j, max=0;
int maxvalue( int a, int b);

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
      sum[i]=0;
        for(j=0; j<n; j++){
          sum[i]+=matrix[i][j];
        }
      }

     int max=sum[0];
       for(i=0; i<m; i++){
        printf("%d satir yig'indisi: %d\n",i, sum[i]);
       }

       printf("\n==========================\n");
     
      for(i=0; i<m; i++){
        if(sum[i]>max){
          max=sum[i];
             printf("satr max: %d\n",max);
              break;
          }
       }     
     }
    return 0;
  }