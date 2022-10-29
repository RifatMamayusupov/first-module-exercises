#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){

    int son1=4, son2=5, son3=12, son4=8;

  char op;
  printf("Enter the Op(+,-)");
  scanf("%c",&op);

  switch (op)
  {
  case '+':
     son1+=son2+son3+son4;
     printf("Yig'indi: %d\n",son1);
    break;
   case '-':
     son1-=son2-son3-son4;
     printf("Ayrirma: %d\n",son1);
      
  
  default:
        printf("Sorry.....");
    break;
  }

    return 0;

  }