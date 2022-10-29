#include <stdio.h>
#include <math.h>
#include <stdlib.h>
  int main (){
    int beck=1;
    while(beck!=0){
   char operator;     
   double num1, num2;
   printf("Enter the Operator[+,-,*,/]\n");
   scanf("%s",&operator);

   printf("Enter the Num1:");
   scanf("%lf",&num1);
   printf("Enter the Num2:");
   scanf("%lf",&num2);
   
   switch (operator)
   {
   case '+' :
       printf("====================\n");
       num1+=num2;
       printf("natija: %lf\n",num1);
       printf("====================\n");
    break;
    case '-' :
       printf("====================\n");
       num1-=num2;
       printf("natija: %lf\n",num1);
       printf("====================\n");
    break;
    case '*' :
       printf("====================\n");
       num1*=num2;
       printf("natija: %lf\n",num1);
       printf("====================\n");
    break;
    case '/':
       printf("====================\n");
       num1/=num2;
       printf("natija: %lf\n",num1);
       printf("====================\n");
    break;
   
   default:
        printf("There is no this %c operator...\n", operator);
    break;
   }
   printf("Would you like to countinue , please press _1 [yes] or 0[no]\n");
   scanf("%d",&beck);
      } 
    printf(".......Xayir salomat bo'ling.......\n");
    return 0;
  }