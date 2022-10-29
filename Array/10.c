#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main (){
    while(1){
        int n, i;
        printf("N >>>");
        scanf("%d",&n);

        int son[n];
        for(i=0; i<n; i++){
            printf("son[%d]=",i);
            scanf("%d",&son[i]);
        }

        for(i=1; i<n; i++){
            if(son[i]%2==0){
                printf("%d\n",son[i]);
            }
        }
           
          for(n=n-1;n>=0;n--){
            if(son[n]%2!=0){
                printf("%d\t",son[n]);
            }
        }   
       
    }
    return 0;
}