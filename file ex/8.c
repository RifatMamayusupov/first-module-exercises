#include <stdio.h>
#include <string.h>
  int main (){
      FILE *filepointer, *filepointer2;
      char satr[100]="";

      filepointer=fopen("hello.text","r");
      filepointer2=fopen("hello2.text","a");

      while(fgets(satr, 100, filepointer)){
        fputs(satr,filepointer2);
      }
      
      return 0;
  }