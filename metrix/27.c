#include <stdio.h>
#include <stdlib.h>
#include <time.h>
  int main (){
    srand(time(NULL));
    while(1){
     int m, n, i, j, min;
     printf("M >>> ");
     scanf("%d",&m);

     printf("N >>> ");
     scanf("%d",&n);

     int matrix[m][n];
     int sum[m];

//  m vs n matrix chiqarish;
     for(i=0; i<m; i++){
        for(j=0; j<n; j++){
           matrix[i][j]=rand()%10;
           printf("%d\t",matrix[i][j]);
          }
        printf("\n\n");
      }

// satrlar yig'indisi;
     for(i=0; i<m; i++){
        sum[i]=0;
        for(j=0; j<n; j++){
            sum[i]+=matrix[i][j];
        }
     }
    
     printf("\n===================\n\n");
     
          
     for(i=0; i<m; i++){
        printf("%d-satrning sum: %d\n\n",i,sum[i]);
     }
// satrlar yig'indisidan min topish;   

    min=sum[0];
     for(i=0; i<m; i++){
        if(sum[i]<min){
            min=sum[i];
             printf("%d - eng min: %d\n",i,min);
             break;
        }
     }
     printf("\n===================\n\n");

       
      
    }
    return 0;
  }