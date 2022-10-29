#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){

    char S1[]="Hello";
    char S2[]="yguHello world";
    int tengmas=0;

    for(int i=0; i<=strlen(S1); i++){
        for(int j=0; j<=strlen(S2); j++){
            if(S1[i]==S2[j]){
                for(int k=0; k<strlen(S1); k++){
                    if(S1[i+k]!=S2[k]){
                        tengmas = 1;
                        break;
                    }
                }
                if(tengmas){
                    printf("It is true...");
                    return 0;
                }
            }
        }
    }

    printf("It is false...");

    return 0;
 }