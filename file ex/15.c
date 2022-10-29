#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *filepointer;

    filepointer=fopen("hello.text", "r");
    int index=0, counter=1;

    char satr[1000]="", hammasi[10000]="";
    char k[20]="";
    printf("Enter the name. ");
    scanf("%s",k);

    while(fgets(satr, 1000, filepointer)){
        for(int i=0; i<strlen(satr); i++){
            if(satr[i]==10){
            counter++;
          }
         
        if(counter!=k){
            hammasi[index++]=satr[i];
           }
         }
    }
    fclose(filepointer);

    filepointer=fopen("hello.text", "w");
    fputs(hammasi,filepointer);
    fclose(filepointer);

    return 0;
}