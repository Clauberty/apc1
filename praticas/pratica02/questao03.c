#include <stdio.h>
#define pi 3.1416f
int main(){
float raio;
  const float PI = 3.1416;
  float perimetro;
  float diametro;

  printf("qual é o raio da sua pizza?\n");
    scanf("%f", &raio);
  
 perimetro = 2 * PI * raio;
  diametro = 2 * raio;

  printf("o diâmetro da sua pizza é %.1f", diametro);
  printf(" e o perimetro %.1f", perimetro);
  
  return 0;
}