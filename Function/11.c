# include <stdio.h>

void Minmax(int *x, int *y){
    if(*x>*y){
        int son=*x;
        *x=*y;
        *y=son;
    }
}
int main (){
    while(1){
    int a, b, c, d;
     printf("Enter the A term:");
    scanf("%d",&a);
     printf("Enter the B term:");
    scanf("%d",&b);
     printf("Enter the C term:");
    scanf("%d",&c);
     printf("Enter the D term:");
    scanf("%d",&d);

      Minmax(&a,&b);
      Minmax(&c,&d);
      Minmax(&a,&c);
      Minmax(&b,&d);

      printf("Maximum=%d amd Minimum=%d\n",d,a);
           }

      return 0;
}