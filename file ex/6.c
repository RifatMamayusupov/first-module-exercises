#include <stdio.h>
#include <string.h>

int main (){

    FILE *filepointer, *filepointer2;

    char satr[100]="";

    filepointer= fopen("hello.text","a");
    filepointer2=fopen("hello2.text","r");

    while(fgets(satr,100,filepointer2)){
        fputs(satr,filepointer);
    }
  return 0;
}