#include <stdio.h>
#include <stdlib.h>

  int main (){
    while(1){
     int n;
        printf("Enter the N: ");
        scanf("%d",&n);

          char satr[n];
        scanf("%s",satr);
          int length=sizeof(satr)/sizeof(satr[0]);

          printf("bosh: %c va oxiri: %c\n",satr[0],satr[length-1]);
            }
        return 0;
        }  