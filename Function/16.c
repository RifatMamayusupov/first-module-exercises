#include <stdio.h>
#include <math.h>
void Doira_Area(int R){
    double Pi=3.14, S;
    S=Pi*pow(R,2);
    printf("Doirani Yuzi:%lf\n",S);
}
int main (){
    while (1){
    
    int Radious1, Radious2, Radious3;
      printf("Enter the Radious1 term:");
    scanf("%d",&Radious1);
      printf("Enter the Radious2 term:");
    scanf("%d",&Radious2);
      printf("Enter the Radious3 term:");
    scanf("%d",&Radious3);

       Doira_Area(Radious1);
       Doira_Area(Radious2);
       Doira_Area(Radious3);
    } 

       return 0;
}