#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    while(1){
        srand(time(NULL));
        int m,n;

        printf("m >> ");
        scanf("%d", &m);

        printf("n >> ");
        scanf("%d", &n);

        printf("\n------------------------\n\n");

        int a[m][n], sum[m];
        int i,j;

        for(i=0; i<m; i++){
            sum[i]=0;
            for(j=0; j<n; j++){
                a[i][j]=rand()%10;
                printf("%d\t", a[i][j]);
                sum[i]+=a[i][j];
            }
            printf("\n");
        }

        printf("\n------------------------\n\n");

        for(i=0; i<m; i++){
            printf("%d-satr elementlari yig`indisi >> %d\n", i, sum[i]);
        }

    }
    return 0;
}