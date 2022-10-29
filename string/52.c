#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// 52-misol, string
int main(){

    char satr1[]="salom hammaga ni dfsdjkf ma gap ishlar bo'lyaptimi alo";
    int probellar[100], yordamchi_indexlovchi=0;


    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' '){
            probellar[yordamchi_indexlovchi++] = i;
        }   
    }

    for(int i=0; i<yordamchi_indexlovchi-1; i++){
        if(i==0){
            for(int j=0; j<=probellar[i]-1; j++){
                if(satr1[j]==satr1[0]){
                    satr1[j] -= 32;
                }
            }
        }else {
            for(int j=probellar[i-1]+1; j<=probellar[i]-1; j++){
                if(satr1[j]==satr1[probellar[i-1]+1]){
                    satr1[j] -= 32;;
                }
            }
        }
        
        if(i==yordamchi_indexlovchi-3){
            for(int j=probellar[i+1]+1; j<=strlen(satr1)-1; j++){
                if(satr1[j]==satr1[probellar[i+1]+1]){
                    satr1[j] -= 32;
                }
            }
        }
        else if(i==yordamchi_indexlovchi-2){
            for(int j=probellar[i+1]+1; j<=strlen(satr1)-1; j++){
                if(satr1[j]==satr1[probellar[i+1]+1]){
                    satr1[j] -= 32;
                }
            }
        }
    }

    printf("Natija: %s", satr1);

    return 0;
}