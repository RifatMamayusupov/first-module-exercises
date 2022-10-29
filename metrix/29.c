#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main (){
    while(1){
    srand(time(NULL));
    int m, n, i, j;
    printf("M >>> ");
    scanf("%d",&m);

    printf("N >>> ");
    scanf("%d",&n);

    int martex[m][n];
    int sum[m];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            martex[i][j]=rand()%10;
            printf("%d\t",martex[i][j]);
        }
        printf("\n");
    }

    printf("\n=============================\n\n");

   for(i=0; i<m; i++){
    sum[i]=0;
     for(j=0; j<n; j++){
       sum[i]+=martex[i][j];
        }
        printf("%d -satr sum: %d\n",i,sum[i]);
        printf("\n");
     }

       float ort;
    for(i=0; i<m; i++){
         ort=sum[i]/m;
         printf(" o'rt_arf: %f\n",ort);
    }
         printf("\n");
  
      for(i=0; i<m; i++){
        for(j=0; j<n; j++){
         if(martex[i][j]<ort){
            printf("satr element:  %d\n",i,martex[i][j]);
            }
          }
        }

          }
    return 0;
    }