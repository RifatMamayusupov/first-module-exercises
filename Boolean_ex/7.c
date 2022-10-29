#include <stdio.h>
#include <stdbool.h>
int main (){
    while (1){
        int a,b,c; 
        printf("Enter the A term: ");
        scanf("%d", &a);
        printf("Enter the B term: ");
        scanf("%d", &b);
        printf("Enter the C term: ");
        scanf("%d", &c);
        bool value=(a>b && b<c);
        printf("%d\n", value);
    }
    return 0;
}