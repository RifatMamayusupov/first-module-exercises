#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  int main (){
    char S1[]="hellolola";
    int i, j, k;
    for(i=0; i<strlen(S1); i++){
        for(j=i+1; j<strlen(S1); j++){
            if(S1[i]==S1[j]){
                for(k=j; k<strlen(S1);k++){
                    S1[k]=S1[k+1];
                }
            }
        }
    }
    printf("%s",S1);
    return 0;
  }

  //  agarda satrda elementlar duplicate bo'lsa  unudan bitadan element qoldirish
  