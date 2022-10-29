    #include <stdio.h>
    #include <stdlib.h>

        int main (){
        
        char belgi;

        printf("Enter the belgi: ");
        scanf("%c",&belgi);

        int belgicha=belgi;
    
         if(48<=belgicha && belgicha<=57){
           printf("digit\n");
         }else
         if(65<=belgi && belgi>=90  || belgi>=97 && belgi<=122){
        printf("lotin\n");
        }else{
         printf("%d\n",0);
          }

        return 0;
        }