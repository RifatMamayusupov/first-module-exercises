#include <stdio.h>
#include <stdlib.h>
  int main (){
    char belgi;

    printf("Belgini kiriting:");
    scanf("%c",&belgi);

    int son=0;

    if(belgi>0){
        printf("%c va %c \n",belgi-1,belgi+1);
    }
    
   return 0;
  }