#include <stdio.h>
#include <math.h>
int main(){
int  b;
int a;
int c;
  double delta;
  double x1, x2;

  a = -1;
  b = 2;
  c = 1;
  
  delta = (pow(b, 2))-4*a*c;
x1 = (- b + sqrt(delta))/2*a ;
x2 = (- b - sqrt(delta))/2*a ;
  printf("\n %dx^2 %dx %d \n", a, b, c);
  printf("valor do x1 = %.1f e x2 = %.1f", x1,x2);

  return 0;
}