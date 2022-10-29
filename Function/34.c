#include <stdio.h>
#include <math.h>
void Fact(int n){
    int i, multiple=1;
    for(i=1; i<n+1; i++){
        multiple*=i;
    }
    printf("%d!_ning qiymati: %d\n",n,multiple);
    }
    int main (){
    while (1)
    {
    int A, B, C;
     printf("A >>> ");
    scanf("%d",&A);
     printf("B >>> ");
    scanf("%d",&B);
     printf("C >>> ");
    scanf("%d",&C);

    Fact(A);
    Fact(B);
    Fact(C);
    }
    return 0;

}