#include <stdio.h>
#include <string.h>
  int main (){
  
   char s1[]="hello", s2[]="hellosdcdhcvdvhello";

   int value =strncmp(s1,s2);
for(int i=0; i<strlen(s1); i++){
   for(int j=0; j<strlen(s2); j++){
   if(value == 0){
    printf("Salom");
    break;
   }else{
    printf("Good bye");
    break;
      }
   }
}
    return 0;
  }