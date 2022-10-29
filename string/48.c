#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int main (){
    char S1[]="salom ham maga sa lom dostlaga";
    int counter=0, probel[100], index=0;

    for(int i=0; i<strlen(S1); i++){
        if(S1[i]==' '){
            probel[counter++]=i;
         }
      }

      for(int i=0; i<strlen(S1); i++){
        if(S1[i]=='s'){
          index++;
          S1[i]='.';
      
        }
      }
    printf("SONI: %d\n", index);
    printf("%s",S1);
  return 0;
 }