#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
  
  char satr[]="ABCD";
  int k;
  printf("K >>> ");
  scanf("%d",&k);

  for(int i=0; i<strlen(satr); i++){
    if( satr[i]>=97 && satr[i]<123){
          satr[i]+=k;
       }
    if(satr[i]>=65 && satr[i]<91){
         satr[i]+=k;
    }
        printf("%c",satr[i]);
    }
    
    return 0;
}