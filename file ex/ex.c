#include <stdio.h>
#include <string.h>

// misol-12
int main () { 
    
    FILE *file;
    char S[100]="asadcsdfwadfs", hammasi[10000]="";
    int index=0, counter=0;


    file = fopen("hi.text", "r");
    while(fgets(S, 100, file)) {
        for(int i=0; i<strlen(S); i++){
            hammasi[index++] = S[i];
        }
    }
    fclose(file);


    file = fopen("hi.text", "w");
    for(int i=0; i<strlen(hammasi); i++){
        if(hammasi[i]==10){
             fputs("S", file);
        }
        fputc(hammasi[i], file);
    }
    fclose(file);


    return 0;
}