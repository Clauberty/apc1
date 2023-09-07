#include <stdio.h>
#define ICMS 0.17f
#define CONFINS 0.076f
#define PIS_PASEP 0.0165f
int main (){
  float  preco_inicial;
  float  preco_imp;
  float  preco_final;
  
  
  printf(" qual é o valor?");
  scanf("%f", &preco_inicial);
  
preco_final = (1+ICMS + CONFINS + PIS_PASEP) * preco_inicial ;
 preco_imp = preco_final - preco_inicial ;
    
  printf("o preço total do seu imposto é %.1f", preco_imp);
  printf("\ntotal do seu produto é %.1f", preco_final);
    

  return 0;
}