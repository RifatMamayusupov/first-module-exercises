#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){

        srand(time(NULL));
    int n, m, i, j, k;
    printf("M >>>");
    scanf("%d",&m);

    printf("N >>>");
    scanf("%d",&n);

    int a[m][n];
    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            a[i][j]=rand()%10;
             printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
         printf("\n");
         
         for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                if(j%2==0){
                    printf("%d\t",a[i][j]);
                }else{
                    printf("%d\t",a[m-i-1][j]);
                }
            }
                printf("\n");
        } 
       printf("\n");

       return 0;
 }