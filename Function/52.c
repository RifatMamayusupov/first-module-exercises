#include <stdio.h>
#include <math.h>
int ISleapYear(int y, int M){
    if(y % 400==0 && y % 4==0){
      switch (M)
      {
      case 1:
        printf("<<January: %d>>\n",31);
        break;
          case 2:
        printf("<<February: %d>>\n",29);
        break;
          case 3:
        printf("<<March: %d>>\n",31);
        break;
          case 4:
        printf("<<Apreal: %d>>\n",30);
        break;
          case 5:
        printf("<<May: %d>>\n",31);
        break;
          case 6:
        printf("<<June: %d>>\n",30);
        break;
          case 7:
        printf("<<July: %d>>\n",31);
        break;
          case 8:
        printf("<<Auguest: %d>>\n",31);
        break;
          case 9:
        printf("<<September: %d>>\n",30);
        break;
          case 10:
        printf("<<Oktaber: %d>>\n",31);
        break;
          case 11:
        printf("<<November: %d>>\n",30);
        break;
          case 12:
        printf("<<December: %d>>\n",31);
        break;
      
      default:
        printf("Sorry, look at Else section:");
        break;
      }
    }else {
          switch (M)
      {
      case 1:
        printf("<<January: %d>>\n",31);
        break;
          case 2:
        printf("<<February: %d>>\n",28);
        break;
          case 3:
        printf("<<March: %d>>\n",31);
        break;
          case 4:
        printf("<<Apreal: %d>>\n",30);
        break;
          case 5:
        printf("<<May: %d>>\n",31);
        break;
          case 6:
        printf("<<June: %d>>\n",30);
        break;
          case 7:
        printf("<<July: %d>>\n",31);
        break;
          case 8:
        printf("<<Auguest: %d>>\n",31);
        break;
          case 9:
        printf("<<September: %d>>\n",30);
        break;
          case 10:
        printf("<<Oktaber: %d>>\n",31);
        break;
          case 11:
        printf("<<November: %d>>\n",30);
        break;
          case 12:
        printf("<<December: %d>>\n",31);
        break;
      
      default:
        printf("Sorry, look at If section:");
        break;
      }

    }
}
int main (){
    while(1){
    int Year,m1, m2, m3;
     printf("Enter the year:");
    scanf("%d",&Year);
     printf("Enter the first month(the numbers(1.2.3...)):");
    scanf("%d",&m1);
     printf("Enter the second month(the numbers(1.2.3...)):");
    scanf("%d",&m2);
     printf("Enter the third month(the numbers(1.2.3...)):");
    scanf("%d",&m3);
    
    ISleapYear(Year,m1);
    ISleapYear(Year,m2);
    ISleapYear(Year,m3);
      }
    return 0;
}