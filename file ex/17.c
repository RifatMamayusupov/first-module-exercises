#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *file1, *file2;
    char yordamchi_satr[100]="", text1[]="Salom hammaga qanday", text2[]="Nega kelmading fudbollga";
    

    file1 = fopen("text1.txt", "a+");
    strcat(text1,yordamchi_satr);
    strcat(text2,yordamchi_satr);

    int birinchisi=1, index1=0, index2=0;
  

    for(int i=0; i<=(strlen(text1)+strlen(text2)); i++){
        if(birinchisi){
            fputc(text1[index1++], file1);
            if(text1[index1-1]==10) birinchisi=0;
            if(index1-1==strlen(text1)-1){
                fputs("\n", file1);
                birinchisi=0;
            }
            
        } else {
            if(index2-1==strlen(text2)-1){
                break;
            }
            fputc(text2[index2++], file1);
            if(text2[index2-1]==10) birinchisi=1;
        }
    }
      fclose(file1);

    return 0;
}