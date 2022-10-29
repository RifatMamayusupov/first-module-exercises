#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 32-misol, string
int main(){

    char satr1[]=" dunyos salom, dunyo seni togangmas, bilding salom", satr2[]="salom";
    int counter=0, tengmas=-1;

    for(int i=0; i<strlen(satr1); i++){

        if(satr2[0]==satr1[i]){
            tengmas = 0;
            for(int j=0; j<strlen(satr2); j++){
                if(satr1[i+j]!=satr2[j]){
                    tengmas = 1;
                    break;
                }
            }
            if(!tengmas){
                counter++;
            }
        }
    }

    printf("Natija: %dta\n", counter);

    return 0;
}

// Note: agar satr2 dagi sozdan tashqari satr birdagi sozlarni sanash uchun 
// satr[i+j]=satr2[j], then tengmas =1, and temnas o'zi bo'ladi,

// agar satr2 dagi so'z satr1da necha marta qatnashganligini bilish uchun 
// satr[i+j]!=satr[i], then tengmas 1, then !tengmas . bo'ladi