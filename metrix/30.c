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

        for(j=0; j<n; j++){
         sum[j]=0;
         for(i=0; i<m; i++){
         sum[j]+=martex[i][j];
            }
          printf("%d -ustin sum: %d\n",j,sum[j]);
         printf("\n=============================\n\n");
        }

        float ort;
            for(j=0; j<m; j++){
            ort=sum[j]/m;
            printf(" o'rt_arf: %f\n",ort);
         }

        printf("\n=============================\n\n");

            for(i=0; i<m; i++){
            for(j=0; j<n; j++){
            if(martex[i][j]>ort){
           printf("satr element:  %d\n",martex[i][j]);
         }
        printf("\n..........................\n");
          }
        }
     }
        return 0;
        }