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

        printf("\n");

        int a[m][n], mult[m];
        int i,j;

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                a[i][j]=rand()%10;
                printf("%d\t", a[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        for(j=0; j<n; j++){
           mult[j]=0;
            for(i=0; i<m; i++){
                mult[j]+=a[i][j];
            }
        }
       float art;
        for(j=0; j<n; j++){
            printf("%d-ustun elementlari yig'indisi >> %d\n", j, mult[j]);
            printf("\n");
            art=mult[j]/n;
            printf("Natija: %f\n",art);
        }
           printf(" ");

    }
    return 0;
}