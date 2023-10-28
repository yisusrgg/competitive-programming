#include <stdio.h>
 int main(){
  double r;

  scanf("%lf", &r);

  double r1 = r + 5.0;
  double r2 = r1 * r1;
  double r3 = r2 / (r/3.0);
  double r4 = r3 * r3 * r3;

  printf("%lf %lf %lf %lf %lf",r,r1,r2,r3,r4);


    return 0;



 }
