#include <stdio.h>
#include <math.h>
int main (){
    int  h, X; 
    int a[h][X], b[h][X], c[h][X], i, j;
   printf("H >>>");
   scanf("%d",&h);
   printf("X >>>");
   scanf("%d",&X);

    printf("Enter the firts matrix:\n");
    for(i=0; i<h; i++){
      for(j=0; j<X; j++){
        scanf("%d",&a[i][j]);
      }
   }

   printf("Enter the second matrix:\n");
    for(i=0; i<h; i++){
      for(j=0; j<X; j++){
        scanf("%d",&b[i][j]);
      }
   }
 
  printf(" the firts matrix:\n");
    for(i=0; i<h; i++){
      for(j=0; j<X; j++){
        printf("%d\t",a[i][j]);
      }
      printf("\n");
   }

   printf(" the second matrix:\n");
    for(i=0; i<h; i++){
      for(j=0; j<X; j++){
        printf("%d\t",b[i][j]);
      }
      printf("\n");
   }

    
      printf("\n");
       printf("The third matrix:\n");

        for(i=0; i<h; i++){
          for(j=0; j<X; j++){
             c[i][j]=a[i][j]+b[i][j];
            printf("%d\t", c[i][j]);
          }
          printf("\n");
       }


    return 0;
}