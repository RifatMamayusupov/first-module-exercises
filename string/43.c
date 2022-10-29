#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  int main (){
    char S1[]="SAlom hAmmAga qandasila, akolrir";
    int  index_counter=0; char yordam[100];
    int counter=0;
    // probelni sanash uchun kichik pro;
  for(int i=0; i<strlen(S1); i++){
    if(S1[i]==' '){
       yordam[index_counter++]=i;
    }
  }
  // 

  for(int i=0; i<index_counter; i++){
    if(i==0){
      for(int i=0; i<strlen(S1); i++){
        if(S1[i]=='A'){
            counter++;
        }
      }
       
    }
  }

  printf("Natija: %d\n",counter);

    return 0;
  }