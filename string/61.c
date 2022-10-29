#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    char satr[]="/Quadrat_c++/books/MY_book.exe";
    int slesh_index=0, secon_slesh=-1;

    for(int i=1; i<strlen(satr); i++){
        if(satr[i]=='/'){
            slesh_index=i;
            break;
        }
    }

    for(int i=slesh_index+1; i<strlen(satr); i++){
        if(satr[i]=='/'){
            secon_slesh=i;
            break;
        }
    }
    
   for(int j=slesh_index+1; j<secon_slesh; j++){
        printf("%c",satr[j]);
   }
    return 0;
}