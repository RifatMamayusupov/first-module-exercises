#include <stdio.h>
#include <math.h>
void Swap(int *son, int *son1){
    int term;
    term=*son;
    *son=*son1;
    *son1=term;

}
int main (){
    while(1){
  int A, B, C, D;
   printf("Entr the A term:");
  scanf("%d",&A);
   printf("Entr the B term:");
  scanf("%d",&B);
   printf("Entr the C term:");
  scanf("%d",&C);
   printf("Entr the D term:");
  scanf("%d",&D);

   Swap(&A,&B);
   Swap(&C,&D);
    printf("A=%d va B=%d\n or C=%d va D=%d\n",A,B,C,D);
        }
  return 0;
}