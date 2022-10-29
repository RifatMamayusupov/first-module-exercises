#include <stdio.h>
int main (){
    while (1){
        int A,B;
        printf("Enter the A term:");
        scanf("%d",&A);
        printf("Enter the B term:");
        scanf("%d",&B);
       for(int i=B; i>A;--i){
        printf("%d\t",i);
       }
    }
    return 0;
}