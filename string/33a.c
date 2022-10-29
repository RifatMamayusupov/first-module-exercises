#include <stdio.h>
#include <string.h>
#include <stdlib.h>
  int main (){

    char S1[]=" gfxgfg  Salom dunyo , salom vatan qandaysan salom";
    char S2[]="Salom", S3[]="Hayot";

    int tengmas=-1;

    for(int i=0; i<strlen(S1); i++){
        tengmas=0;
        if(S2[0]==S1[i]){
            for(int j=0; j<strlen(S2); j++){
                if(S1[i+j]!=S2[j]){
                 tengmas=1;
                break;
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