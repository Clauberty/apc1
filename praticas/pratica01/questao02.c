#include <stdio.h>

int main(){
float base;
  float altura;
  float area;

  printf("qual é a base do triangulo\n");
  scanf("%f",&base);

  printf("qual é a altura do triangulo\n");
  scanf("%f",&altura);

  area = base * altura /2;
  

  printf("a area desse triangulo é %.1f", area);

  
  return 0;
  
}