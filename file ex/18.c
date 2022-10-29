#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    FILE *filepointer;

    filepointer=fopen("18ex.txt", "a+");
    char satr[]="Salom dunyo qandaysan nimaga uyga kelding";
    int K;

    printf("Enter the K soni: ");
    scanf("%d",&K);

    for(int  i=K; i<strlen(satr); i++){
        fputc(satr[i],filepointer);
    } 
    fputs("\n",filepointer);
    fclose(filepointer);

    return 0;
}