#include <stdio.h>
#include <stdlib.h>
#include <time.h>
    int main (){
        srand(time(NULL));
        while(1){
        int m, n, i, j;
        printf("M >>> ");
        scanf("%d",&m);

        printf("N >>> ");
        scanf("%d",&n);

        int matrix[m][n]; int satr[m];
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
            matrix[i][j]=rand()%10-rand()%10;
            printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }
printf("\n===================\n\n");

        for(i=0; i<m; i++){
            satr[i]=0;
             for(j=0; j<n; j++){
                satr[i]=matrix[i][j];
                if(satr[i]==satr[i-1]){
                    printf("%d\t\n",satr[i]);
                }
            }
          }
        }
        return 0;
    }
