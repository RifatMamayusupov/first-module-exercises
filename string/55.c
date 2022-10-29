#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int main (){
  // chala

  char satr[]="Salom hammaga";
  char satr2[100]="";
  int probellar[10], firts_word=0, second_word=0, index=0;
  int max[10], min[10];
  
  for(int i=0; i<strlen(satr); i++){
    if(satr[i]==' '){
      probellar[index++]=i;
    }
  }

  for(int j=0; j<=index; j++){
    if(j==0){
      for(int i=0; i<probellar[j]; i++){
          satr[j]=satr[i];
         // printf("%c",satr[j]);
      }
    }else{
      for(int i=probellar[j-1]; i<strlen(satr)-1; i++){
            satr2[j]=satr[i];
            printf("%c",satr2[j]);
      }
    }
    // for(int j=0; j<strlen(satr); j++){
    // if(satr[j]>satr2[j]){
    //   printf("%c",satr[j]);
    // }else{
    //   printf("%c",satr2[j]);
    // }
    // }
  }
      
    return 0;
}