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

        int matrix[m][n];
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
            matrix[i][j]=rand()%10;
            printf("%d\t",matrix[i][j]);
            }
            printf("\n");
        }

        double ort;  int sum=0;
        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                sum+=matrix[i][j];
            }
        }
        printf("\n======================\n\n");

        printf("Sum: %d\n",sum);

        printf("\n======================\n\n");
        ort=(double)sum/(double)(m*n);
        printf("O'rta_arf: %lf\n",ort);

        printf("\n======================\n\n");

        int rezm=1, rezn=1;
        for(i=1; i<m; i++){
            for(j=1; j<n; j++){
                if(abs(ort-matrix[i][j])<abs(ort-matrix[rezm][rezn] || (i=1) && (j=1))){
                    rezm=i;
                    rezn=j;
                }
            }
        }

        printf("Satr: %d va Ustun: %d\n",rezm,rezn);

            }
            return 0;
        }