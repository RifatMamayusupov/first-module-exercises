#include <stdio.h>
#include <math.h>
void EKUB(int son1, int son2){
    int katta, kichik, qolgan;
    while(son1<=0 || son2<=0);
    if(son1>son2){
        katta=son1;
        kichik=son2;
    }else{
        katta=son2;
        kichik=son1;
    }
    qolgan=katta % kichik;
    while (qolgan !=0)
    {
     katta=kichik;
     kichik=qolgan;
     qolgan=katta % kichik;
    }
    printf("%d va %d  sonlarining EKUBi %d ga teng...\n", son1, son2, kichik);
}
int  main (){
    while(1){
    int A, B, C, D;
     printf("Enter the A term:");
    scanf("%d",&A);
     printf("Enter the B term:");
    scanf("%d",&B);
     printf("Enter the C term:");
    scanf("%d",&C);
     printf("Enter the D term:");
    scanf("%d",&D);

    EKUB(A,B);
    EKUB(A,C);
    EKUB(A,D);
   }
    return 0;
}