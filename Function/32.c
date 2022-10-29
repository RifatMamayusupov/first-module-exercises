#include <stdio.h>
#include <math.h>
// (360> D >0)
  void DegToRad( int D){
  double  radian, Pi=3.14;
  radian= D*(Pi/180);
  printf("%d_degree = %lf_radian\n", D, radian);
    }
  int main (){
    while (1)
      {
    int a, b, c;
      printf(" A >>> ");
    scanf("%d",&a);
      printf(" B >>> ");
    scanf("%d",&b);
      printf(" C >>> ");
    scanf("%d",&c);

    DegToRad(a);
    DegToRad(b);
    DegToRad(c);
     }
    return 0;
  }