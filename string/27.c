
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 int main (){
    while(1){
  int n1, n2;
  printf("N1 va N2 >>> ");
  scanf("%d %d", &n1, &n2);

  char satr1[]="Uzbekistan", satr2[]="Turkiyko'chasi";
  char satr3[100];

    strncpy(satr3, satr1, n1);

    for(int i=strlen(satr2)-n2; i<strlen(satr2); i++){
        satr3[n1++] = satr2[i];
    }

    printf("Natija: %s\n", satr3);
    }
    return 0;
}