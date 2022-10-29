#include <stdio.h>
#include <stdbool.h>
int main (){
    while (1){
        int a,b; 
        printf("Enter the A term: ");
        scanf("%d", &a);
        printf("Enter the B term: ");
        scanf("%d", &b);
        bool value =(a%2!=0 && b%2==0);
        printf("%d\n", value);
    }
    return 0;
}