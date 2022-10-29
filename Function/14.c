 #include <stdio.h>
  void Shiftright(int *a, int *b, int *c){
    int son=*a;
        *a=*b;
        *b=*c;
        *c=son;
        printf("A=%d, B=%d, C=%d\n",*a,*b,*c);
  }
  int main (){
    while(1){
    int A, B, C;
    printf("Enter the A term:");
    scanf("%d",&A);
    printf("Enter the B term:");
    scanf("%d",&B);
    printf("Enter the C term:");
    scanf("%d",&C);

    Shiftright(&A,&B,&C);
    
            }
 return 0;
  }