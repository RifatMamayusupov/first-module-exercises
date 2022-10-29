#include <stdio.h>
#include <stdbool.h>

int main (){
    while(1){
int A, B, C;
printf("Enter  the  A term:");
scanf("%d", &A);
printf("Enter  the  B term:");
scanf("%d", &B);
printf("Enter  the  C term:");
scanf("%d", &C);
bool value =(A>0 && B>0 && C>0);
printf("%d\n", value);

    }
    return 0;
}