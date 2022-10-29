#include <stdio.h>
#include <stdlib.h>
  int main (){
    while(1){
  int n, i;
  printf("Enter the N:");
  scanf("%d",&n);

  for(i=122; i>=122-n+1; i--){
    printf("%c \n",i);
  }
      }
    return 0;
  }