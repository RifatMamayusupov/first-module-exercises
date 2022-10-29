#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


// 42-misol, string
int main(){

    char satr1[]="salom du nyo kadilak salom erak dsasd dunyo seni toga fdsfdsf sdfs ngmas bilding saloms";
    int probellar[100], yordamchi_indexlovchi=0;
    int counter=0, tengmas=-1;


    for(int i=0; i<strlen(satr1); i++){
        if(satr1[i]==' '){
            probellar[yordamchi_indexlovchi++] = i;// yordamchi index =nechtadir probelga
        }
    }

    for(int i=0; i<yordamchi_indexlovchi; i++){
        if(i==0){
            if(satr1[0]==satr1[i-1]){

                counter++;
            }
        } else {
            if(satr1[probellar[i]==satr1[probellar[i]-1]] ){
                counter++;
            }
        }
        
        if('A'==yordamchi_indexlovchi-2){
            if(satr1[probellar[i+1]+1]==satr1[strlen(satr1)-1]){
                counter++;
            }
        }
    }

    printf("Natija: %dta", counter);

    return 0;
}