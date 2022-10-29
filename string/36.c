#include <stdio.h>
#include <string.h>
#include <stdlib.h>

  int main(){

    char S1[]="kecha Salom dunyo bollari, nima gapla Salom" ;
    char S2[]="Salom", S3[]="Hayot";
    int tengmas=-1;

    for(int i=0; i<strlen(S1); i++){
        tengmas=0;
        if(S2[0]==S1[i]){
            for(int j=0; j<strlen(S2); j++){
                if(S1[i+j]=S3[j]){
                     tengmas=1;
                     S2[j]=S3[j];
                   // break;
                }
            }
            if(!tengmas){ 
                i=i+strlen(S2);
            }
        }
        printf("%c",S1[i]);
    }
    return 0;
  }