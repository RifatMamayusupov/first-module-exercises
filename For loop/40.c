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

int i, j;
  for (i=A; i<=B; i++){

for (j=1; j<=i; j++)
     printf("%i",A+i-1);
     printf("\n");

  }
    }
    return 0;
   }