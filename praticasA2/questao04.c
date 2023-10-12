/*Faça um programa em C que imprima um qualitativo associado a uma nota lida conforme a tabela: 1 = Ruim; 2 = Insuficiente; 3 = Suficiente, 4 = Bom, 5 = Ótimo, e imprima Nota inválida nos demais casos.*/
#include <stdio.h>

int main(){
int nota = 0;

  printf("qual a nota\n");
  int leitura = scanf("%d", &nota);

  if(leitura){
  
    if(nota ==1){
    printf("nota ruim");
  }
  else if(nota ==2){
     printf("nota insuficiente");
  }
   else if(nota ==3){
     printf("nota suficiente");
  }
   else if(nota == 4){
     printf("nota bom");
  }
   else if(nota == 5){
     printf("nota otima");
  
  }
    else{
      printf("numero invalido");
    }
  }


  return 0;
}
