#include <stdio.h>
int main (){
    while (1){
        int K,n;
        printf("Enter the K term:");
        scanf("%d",&K);
         printf("Enter the N term:");
        scanf("%d",&n);
        for(int i=1; i<=n;i++){
            printf("K\t",i);
        }
    }
    return 0;
}