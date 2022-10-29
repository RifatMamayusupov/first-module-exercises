#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char satr[]="/Quadrat_c++/books/MY_book.exe";
    int slesh_index=-1, dot_index=-1;

    for(int i=0; i<strlen(satr); i++){
        if(satr[i]=='.'){
            dot_index=i;
        }
    }
    
   for(int j=dot_index+1; j<strlen(satr); j++){
        printf("%c",satr[j]);
   }
    return 0;
}