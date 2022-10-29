#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main (){
    while(1){
  int m, n, i, j;
   printf("M >>> ");
  scanf("%d",&m);

   printf("N >>> ");
  scanf("%d",&n);

  int matrix[m][n], satr[m];
  int musbat, manfiy;

  for(i=0; i<m; i++){
    for(j=0; j<n; j++){
        matrix[i][j]=rand()%10-rand()%10;
        printf("%d\t",matrix[i][j]);
    }
    printf("\n");
  }
  for(i=0; i<m; i++){
    musbat=0;
    manfiy=0;
    for(j=0; j<n; j++){
        if(matrix[i][j]>0) musbat++;
        if(matrix[i][j]<0) manfiy ++;
    }
    if(musbat==manfiy){
        printf("%d-ustun\n", i);
        break;
    }
    if(i==n-1 && musbat!=manfiy){
        printf("Bunday satr yo`q\n");
        break;
    }
  }

    printf("\n");
  }


    return 0;
  }