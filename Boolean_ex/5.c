#include <stdio.h>
#include <stdbool.h>
int main (){
    while (1){
        int a,b; 
        printf("Enter the A term: ");
        scanf("%d", &a);
        printf("Enter the B term: ");
        scanf("%d", &b);
        bool value=(a>=0);
        bool value2=(b<-2);
        printf("%d\n", value);
        printf("%d\n", value2);
    }
    return 0;
}