#include <stdio.h>
#include <stdlib.h>
#include <string.h>
  int main (){
    char satr[]="chjdcbUZXDутуч";

int count =0;
    for(int i=0; i<strlen(satr); i++){
        for(int j=97; j<=122; j++){
            if(satr[i]==j){
                count++;
            }
        }
    }
int count1=0;
      for(int i=0; i<strlen(satr); i++){
        for(int j=208; j<=239; j++){
            if(satr[i]==j){
                count1++;
            }
        }
    }

    printf("Sum: %d\n",count+count1);
    
    return 0;

  }