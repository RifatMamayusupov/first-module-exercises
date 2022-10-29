 #include <stdio.h>
 #include <math.h>
   int main (){
    while(1){
        //(A<B)
int A, B;
printf("Enter the A term:");
scanf("%d",&A);
printf("Enter the B term:");
scanf("%d",&B);
for(int i=A; i<=B;++i){
    printf("%d_sonining o'zini qiymat=%d\n",i,i);
}
       }
    return 0;
   }