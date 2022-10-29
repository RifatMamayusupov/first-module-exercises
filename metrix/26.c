#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  void min(int m, int mult[m]){
    int  j, min= mult[0];
      for(j=0; j<m; j++){
        if(mult[j]<min){
            min=mult[j];
            printf("string min: %d\n",min);     
             }
        }
  }

  int main (){
    while(1){
    srand(time(NULL));
    int m, n, i, j;
    printf("M >>> ");
    scanf("%d",&m);

    printf("N >>> ");
    scanf("%d",&n);

    int martex[m][n];
    int mult[m];

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            martex[i][j]=rand()%10;
            printf("%d\t",martex[i][j]);
        }
        printf("\n");
    }

    printf("\n=============================\n\n");

    for(i=0; i<m; i++){
        mult[i]=1;
        for(j=0; j<n; j++){
            mult[i]*=martex[i][j];
        }
    }

    for(i=0; i<m; i++){
        printf("%d - satrning mult: %d\n",i, mult[i]);
    }

    printf("\n=============================\n\n");

    min(m,mult);

     }
     return 0;
  }