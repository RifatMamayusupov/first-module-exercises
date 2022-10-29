#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int i,j,minnum=0;
int min(int a,int b);


int main(){
    while(1){
        srand(time(NULL));
        int m,n;

        printf("m >> ");
        scanf("%d", &m);

        printf("n >> ");
        scanf("%d", &n);

        printf("\n-----------------\n\n");

        int matrix[m][n],mul[n];

        for(i=0; i<m; i++){
            for(j=0; j<n; j++){
                matrix[i][j]=rand()%10;
                printf("%d\t", matrix[i][j]);
            }
            printf("\n");
        }

        printf("\n-----------------\n\n");

        for(j=0; j<n; j++){
            mul[j]=1;
            for(i=0; i<m; i++){
                mul[j]*=matrix[i][j];
            }
            printf("\n");
            printf("%d-ustun mult: %d\n",j,mul[j]);
            printf("\n");
            if(j==1){
                minnum=min(mul[0],mul[1]);
            }
            if(j>1){
                minnum=min(mul[minnum],mul[j]);
            }
        }

        printf("ustun elementlari ko`paytmasi >> %d\n", mul[minnum]);

        printf("\n===========================\n\n");
    }
    return 0;
}

int min(int a,int b){
    if(a<b) return minnum;
    if(a>b) return j;
}