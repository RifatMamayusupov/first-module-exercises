#include <stdio.h>
#include <string.h>

int main (){

    FILE *filepointer;
    char satr[100]="hbdshdbdss dhcdshc jsxbwhwejh";
   

    filepointer= fopen("hello.text", "a");
    fputs(satr,filepointer);

    return 0;
}
