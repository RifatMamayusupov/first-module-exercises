#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 int main (){

    int n, count=1, i, j ;
    printf("N >>>");
    scanf("%d",&n);

     int a[n][n];
   
  
     for(i=0; i<n; i++){

         for(j=i; j<n-i; j++)
         a[i][j]=count++;

         for(j=i+1; j<=n-i-1; j++)
          a[j][n-i-1]=count++;

          for(j=n-i-2; j>=i; j--)
          a[n-i-1][j]=count++;

          for(j=n-2-i; j>i;j--)
          a[j][i]=count++;
     }
   
        for(i=0; i<n; i++){
            for(j=0; j>n; j++){
                if(a[i][j]<10){
                    printf("%d ",a[i][j]);
                }else{
                    printf("%d ",a[i][j]);
                }
            }
            printf("\n");
        }
               
     return 0;
 }





