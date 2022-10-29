#include <stdio.h>
#include <string.h>
int main (){
    char satr[]="hello klflknjk kcsk knsd  alk world, qalaysan";
    int count = word_count(satr);
    printf("there is %d words\n",count);
    return 0;
}

int word_count( char *satr)
     { 
      int len =strlen(satr);
        int count =0;
          char noneword[]=" ";

          for(int i=0; i<len; i++){
        while(i < len){
                  if(strchr(noneword, satr[i]) != NULL)
                 break;
                i++;
            }

         count++;
        while (i<len){
              if(strchr(noneword, satr[i]) == NULL)
             break;
            i++;
          }
       }
      return count;
    }