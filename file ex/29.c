#include <stdio.h>
#include <string.h>

int main(){
    FILE *file;
    char satr[10000]="", satr2[10000]="";
    
    file=fopen("text29.txt","r");
    int maxindex, maxnum;
    int index=0, count=0;
    int bajar=1;
    int i;
    while(fgets(satr,10000,file)){
        for(i=0; i<strlen(satr); i++){
        satr2[index++]=satr[i];
        if(satr2[i]!=' ' && satr2[i]!='\n'){
            count++;
        }

        if(satr2[i]==' ' && satr2[i]=='\n' && bajar==1){
        maxindex=i-count;
        maxnum=count;
        count=0;   
        bajar=0;
        }

        if(bajar==0 && maxnum<count && satr2[i]==' ' && satr2[i]=='\n'){
            maxnum=count;
            maxindex=i-count;
            count=0;
            }
        }    
    }

    fclose(file);
    for(i=maxindex; i<maxindex+maxnum-1; i++){
        printf("%c", satr2[i]);
    }
    return 0;

}