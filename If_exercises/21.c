#include <stdio.h>
#include <math.h>
int main (){
    while (1)
    {int A,O=0,X,Y;
    printf("Enter the A term:");
    scanf("%d",&A);
     printf("Enter the X term:");
    scanf("%d",&X);
     printf("Enter the Y term:");
    scanf("%d",&Y);
    if(A==O)printf("_nuqta Boshida:%d\n",0);
    if(X-O>A)printf("A_nuqta (O:X) o'qida yotadi: %d\n",1);
    if(Y-O>A)printf("_A nuqta (O:Y) oqida yotadi: %d\n",2);
    if(X-O<A || Y-O<A)printf("_A nuqta tegishli emas:%d\n",3);
    }
    return 0;
}