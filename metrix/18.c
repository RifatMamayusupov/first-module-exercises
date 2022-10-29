#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){
    while(1){
        srand(time(NULL));
    int n, m, i, j, k;
    int sum=0, mult=1;
    printf("N >>>");
    scanf("%d",&n);

    printf("M >>>");
    scanf("%d",&m);

   
   int a[n][m];
    for(i=0; i<n; i++){
        for(j=0; j<m; j++){
            a[i][j]=rand()%10;
             printf("%d\t",a[i][j]);
        }
         printf("\n");
    }
    printf("K >>>");
    scanf("%d",&k);
    
    for(i=0; i<n; i++){
    printf("%d\n",a[i][k]);
    sum+=a[i][k];
    mult*=a[i][k];
  }
     printf("\n");
     printf("SUM: %d\n",sum);
     printf("Mult: %d\n",mult);
     printf("\n");

    }
    return 0;
 }