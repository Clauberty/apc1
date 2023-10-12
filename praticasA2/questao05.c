#include <stdio.h>

int main(){
char nome;
  printf("digite uma tecla que seja numero, letras ou caracter especial: ");
    scanf("%c", &nome);
  if(nome>=48 && nome<=57){
    printf("essa tecla é um número");
  }
  else if (nome>=65 && nome <= 90){
    printf("essa tecla é uma letra maiuscula");    
  }
   else if (nome>=97 && nome <= 122){
    printf("essa tecla é uma letra minuscula");    
  }
  else{
    printf("caracter especial");
  }

  return 0;
}