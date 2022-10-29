#include <stdio.h>
#include <math.h>
int main (){
    while (1)
    {int A, B, C;
    printf("Enter the A term:");
    scanf("%d",&A);
    printf("Enter the B term:");
    scanf("%d",&B);
    printf("Enter the C term:");
    scanf("%d",&C);
    if(abs(A-B)<abs(A-C))printf("_Masofa:%d va _yaqin nuqta: B\n",abs(A-B));
    else printf("_Masofa:%d va _yaqin NUqta: C \n", abs(A-C));
    }
    return 0;
}