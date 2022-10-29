#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    while(1){
        int n,i;
        printf("N >>>");
        scanf("%d",&n);
        int a[n];
        int b[n], c[n];
        for(i=0;i<n;i++){
            a[i]=rand()%100-rand()%100;
            printf("a[%d]=%d\n",i,a[i]);
        }
        printf("\n");
        int count=0, count1=0;
        for(i=0;i<n;i++){
            if(a[i]>0){
                b[++count]=a[i];
            }else{
                c[++count1]=a[i];
            }
        }
         printf("\n");
         printf("soni: %d\n",count);
         for(i=0; i<count; i++){
         printf("b[%d]=%d\n",i,b[i]);
        }

         printf("\n");
         printf("soni: %d\n",count1);
         for(i=0; i<count1; i++){
         printf("c[%d]=%d\n",i,c[i]);
        }
    }
    return 0;
}