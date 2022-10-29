#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// 35-misol, string
int main(){
    
    char satr1[]="salom dunyo salom, dunyo seni togangmas, bilding salom", satr2[]="salom", Satr3[]="hellogona";
    int  tengmas=-1;


    for(int i=0; i<strlen(satr1); i++){
         tengmas = 0;
        if(satr2[0]==satr1[i]){
            
            for(int j=0; j<strlen(satr2); j++){
                if(satr1[i+j]!=satr2[j]){
                    tengmas = 1;
                    break;
                }
            }
            if(!tengmas){
               i =i+ strlen(satr2);
            }
        }
        
        printf("%c", satr1[i]);

    }


    return 0;
}