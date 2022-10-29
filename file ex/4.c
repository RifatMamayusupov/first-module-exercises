#include <stdio.h>
#include <string.h>

int main(){
    FILE *filepointer;

    char satr[100];

    filepointer =fopen("hello.text", "r");

    int file_satr_count=0, character_count=0;

    while(fgets(satr, 100, filepointer)){
        file_satr_count++;
        character_count+=strlen(satr);
    }

    printf("Natija: %d va %d ", file_satr_count,character_count);
    return 0;
}