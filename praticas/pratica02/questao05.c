#include <stdio.h>
#include <math.h>
int main(){
int gb;
  int bytes;
  int gb_total;
  
printf("quantos gb?");
scanf("%d",&gb);
bytes = 1024 * 1024 * 1024;
  gb_total = bytes * gb;
  printf("converção do valor é : %d", gb_total);

  
}