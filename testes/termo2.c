      #include <stdio.h>
      #include <stdlib.h>
      #include <unistd.h>
      #include <time.h>
      #include <string.h>
      #include <ctype.h>
      //#include conio /* não ta declarado a biblioteca*/

      int main (){
        char vol;  
        char continuar;
        char rodada;
        char comparar[6];
        char resposta[6];
        char nome[6];
        char nome1[6];
        char nome2[6];
        char nome3[6];
        char usuario[15];
        int frase;
        int trocar;
        int modo;
        int teste=0;
        int exit=1;
        int acertou;
        int venceu;
        int diferente = 0;
        int extras;
        char dificuldade;
        int leu_certo;

          do{   

            struct player{
            char jogador1[30];
            char jogador2[30];
            int pontos_jogador1;
            int pontos_jogador2;
            };

            struct player player;

            player.pontos_jogador1 = 0;
            player.pontos_jogador2 = 0;     

          leu_certo=system("clear");

            char nomeF[25][6] = {"festa","lapis","misto","moeda","texto","gesto","milho","sexta","livro","filho","tempo","pista","sorte","campo","grupo","lenda","risco","peixe","verbo","prova","balde","caixa","olhos","chave","creme"}; 

            char nomeM[20][6]={"flora","sinal","reino","dieta","toada","voraz","advir","finda","logos","signo","resto","terno","turbo","patio","conta","breve","atomo","fenda","elite","bioma"};

            char nomeD[15][6]={"turvo","igneo","jazia","verve","sarau","alude","tecer","plaga","parco","torpe","tenaz","cozer","alibi","beata","miope"};

            char resposta1[1][6]={"totas"};

            char resposta2[1][6]={"botas"};

            char resposta3[1][6]={"verao"};

            char resposta4[1][6]={"pouco"};

            char resposta5[1][6]={"gongo"};

             leu_certo=system("clear");
             printf("--------------------------------------------- \n");
            printf("\e[0;33m                            \n");
            printf("   _                                         \n");
            printf("\e[0;33m  | |_    ___   _ __   _ __ ____   _____      \n");
            printf("  | __|  / _ | | '__| | '_ ` _  | |  _  |     \n"); 
            printf("  | |_  |  __/ | |    | | | | | | | (_) |     \n ");
            printf(" |___| l____| |_|    |_| |_| |_| |_____|    \e[0m\n");
            printf("\n--------------------------------------------\n ");
             printf("\n\n\e[0;35mEscolha o modo de jogo:\e[0m ");
             printf("\n\n(1)SOLO");
             printf("\n\n(2)VERSUS");
             printf("\n\n(3)EXTRAS");  
             printf("\n\n(4)CRÉDITOS\n");
             printf("\n\n\n\e[0;35mSelecione a opção >\e[0m");
             scanf("%d", &modo);
             getchar();


            leu_certo=system("clear");

             switch(modo){ //gcc -o teste2 teste2.c -lm

              case 1:


                  printf("\n----------------------------------------\n");
                  printf("              \e[0;35m COMO JOGAR \e[0m     ");
                  printf("\n----------------------------------------\n");
                  printf("0 jogador tem que descubrir a palavra em 5 tentativas\n");
                  printf("Depois de cada tentativa, cada letra será\n");
                  printf("Representada por uma cor!\n\n");
                  printf("\e[0;32m| t |\e[0m| u || r || m || a |\n\n");
                  printf("A letra \e[0;32m| t |\e[0m faz parte da palavra e esta na posição correta!\n\n\n\n");

                  printf("| g || r |\e[0;33m| u |\e[0m| p || o |\n\n");
                  printf("A letra \e[0;33m| u |\e[0m faz parte da palavra, mas na posição errada!\n\n\n\n");

                  printf("| d |\e[0;90m| i |\e[0m| e || t || a |\n\n");
                  printf("A letra \e[0;90m| i |\e[0m não faz parte da palavra!\n\n");

                  printf("\n\n\n\n ENTER para continuar");
                  printf("\n");
               getchar();
                leu_certo=system("clear");
                do{
               printf("\e[0;35m       Escolha a dificuldade      \e[0m\n\n");
               printf("-------------------------------------------------\n");
               printf("F = \e[0;32mFácil\e[0m\n\n");
               printf("M = \e[0;34mMédio\e[0m\n\n");
               printf("D = \e[0;31mDíficil\e[0m\n\n");
               printf("--------------------------------------------------\n");
               scanf("%s", &dificuldade);

                  leu_certo=system("clear");

               if(dificuldade == 'F'|| dificuldade == 'f'){ 

                 srand(time(NULL));

                 int num = rand() % 25;

                 for(int i=0;i<=4;i++){

                   nome[i]=nomeF[num][i];

                }

               }

                 if(dificuldade == 'M'|| dificuldade == 'm'){ 

                    srand(time(NULL));

                    int num = rand() % 20;

                    for(int i=0;i<=4;i++){

                      nome[i]=nomeM[num][i];

                   } 
                  }

                  if(dificuldade == 'D'|| dificuldade == 'd'){ 

                    srand(time(NULL));

                    int num = rand() % 15;

                    for(int i=0;i<=4;i++){

                      nome[i]=nomeD[num][i];

                   } 
                  }


                    printf("\e[0;35m	digite uma palavra com 5 letras\e[0m\n");


                     for (int i=0;i<=4;i++){

                     printf("\n----------------------------------------\n");              
                leu_certo=scanf("%s",&comparar);
                     getchar();

                     acertou = strcmp (nome,comparar);

                     printf("%i",acertou);

                     if(acertou==255){
                        printf("\n");
                       for(int i=0;i<=4;i++){

                         printf("\e[0;32m| %c |\e[0m",comparar[i]);  

                       }
                        printf("\n----------------------------------------\n");

                        printf("\n\nVocê Acertou!!");

                        printf("\n----------------------------------------\n");

                       printf("\n");
                       break;
                     }//gcc -o teste teste.c -lm

              for(int i=0;i<=4;i++){  


              if(comparar[i] == nome[i]){
              // letra certa
                diferente = diferente - 1;

              printf("\e[0;32m| %c |\e[0m", comparar[i]);
                } 

              if(comparar[i] != nome[i]){
              teste=teste-2;


              for(int i2 = 0; i2<=4;i2++){

              // letra tem na palavra
              if(comparar[i] == nome[i2] && diferente!=1){
              teste=1;
              diferente = 0;


               printf("\e[0;33m| %c |\e[0m", comparar[i]);

               }
              // letra errada

                 else if (i2==4&&teste!=1){
                 teste=teste++;
                 printf("\e[0;90m| %c |\e[0m", comparar[i]);

                     }
                  }
               }

              }

                printf("\n");
              }

                printf("\na palavra é ");


                for(int i=0;i<=4;i++){

                 printf("\e[0;32m%c\e[0m",nome[i]);

                }
                 printf("\n----------------------------------------\n");
                        printf("\n\e[0;33mDeseja continuar?\e[0m\n S = Sim || N = Nao\n");
                        scanf("%s",&continuar);
                        getchar();   
                  leu_certo=system("clear");
                        }while(continuar=='s'||continuar=='S');
                break;

                  case 2:

                   printf("\n----------------------------------------\n");
                   printf("              \e[0;35m COMO JOGAR \e[0m     ");
                   printf("\n----------------------------------------\n");
                   printf("O jogador1 tem que escolher uma palavra que tenha 5 letras\n");
                   printf("O jogador2 tera que adivinha a palavra \n");
                   printf("Cada vez que um acerta ganhara de 1 a 5 ponto dependendo do seu desempenho \n");
                   printf("A pessoa que tentar acertar a palavra, tera letras em cores para ajuda-la \n");
                   printf("A cor será: \n");
                   printf(" \n");           

                   printf("\n\n");
                   printf("\e[0;32m| t |\e[0m| u || r || m || a |\n\n");
                   printf("a letra \e[0;32m| t |\e[0m faz parte da palavra e esta na posição correta!\n\n\n\n");

                   printf("| g || r |\e[0;33m| u |\e[0m| p || o |\n\n");
                   printf("a letra \e[0;33m| u |\e[0m faz parte da palavra, mas na posição errada!\n\n\n\n");

                   printf("| d |\e[0;90m| i |\e[0m| e || t || a |\n\n");
                   printf("a letra \e[0;90m| i |\e[0m não faz parte da palavra!\n\n\n");

                    printf("enter para continuar!");

                    getchar();

                    leu_certo=system("clear");


                   printf("---------------------------------------------"); 
                   printf("\nnome: \e[0;35mjogador1?\e[0m\n\n");
                leu_certo=scanf("%s", &player.jogador1);
                   getchar();
                   printf("\n---------------------------------------------");
                   printf("\nnome: \e[0;35mjogador2?\e[0m\n");
                leu_certo=scanf("%s", &player.jogador2);
                   getchar();
                    leu_certo=system("clear");
                     printf("---------------------------------------------------");

                             printf("\n%s escolhe a palavra e o %s tenta acertar",player.jogador1,player.jogador2);
                     do{
                             leu_certo=system("clear");

                                  do{

                                  printf("\n---------------------------------------------------");
                                  printf("\n%s coloque a palavra com 5 letras:",player.jogador1);
                              leu_certo=scanf("%s",&nome3);
                                  getchar();

                                    leu_certo=system("clear");
                                  printf("sua palavra é ");

                                  printf("\e[0;35m| %c || %c || %c || %c || %c |\e[0m",nome3[0],nome3[1],nome3[2],nome3[3],nome3[4]);
                                   printf("\n(1)para confirmar (2)para trocar a palavra: ");

                                    scanf("%i",&trocar);
                                    leu_certo=system("clear");
                                  }while( trocar == 2);

                                  printf("%s tente adivinhar a palavra, voce tera 5 tentativas",player.jogador2);


                                  for (int i=0;i<=4;i++){

                                    printf("\n----------------------------------------\n");     
                               leu_certo=scanf("%s",&comparar);
                                    getchar();

                                    venceu = strcmp (nome3,comparar);

                                    printf("%i",venceu);

                                    if(venceu==0){
                                      player.pontos_jogador2 = player.pontos_jogador2 + 1;
                                       printf("\n");
                                      for(int i=0;i<=4;i++){

                                        printf("\e[0;32m| %c |\e[0m", comparar[i]);  

                                      }
                                       printf("\n----------------------------------------\n");

                                       printf("\n\nvocê venceu!!");

                                      printf("\n----------------------------------------\n");

                                      printf("\n");
                                      break;

                                    }


                                  for(int i=0;i<=4;i++){  

                                    if(comparar[i]==nome3[i]){
                                    // letra certa
                                      diferente = 0;

                                    printf("\e[0;32m| %c |\e[0m", comparar[i]);
                                      } 

                                  if(comparar[i]!=nome3[i]){
                                  teste=teste-2;


                                  for(int i2 = 0; i2<=4;i2++){

                                    // letra tem na palavra
                                  if(comparar[i]==nome3[i2]){
                                    teste=1;


                                     printf("\e[0;33m| %c |\e[0m", comparar[i]);

                                  }
                                    // letra errada

                                    else if (i2==4&&teste!=1){
                                       teste=teste++;
                                     printf("\e[0;90m| %c |\e[0m", comparar[i]);

                                     }
                                   }
                                  }

                                  }

                                      printf("\n");
                                  }



                                      printf("\na palavra é ");


                                      for(int i=0;i<=4;i++){

                                       printf("\e[0;32m%c\e[0m",nome3[i]);



                                      }

                           //jogador2

                               do{   

                          printf("\n---------------------------------------------------");
                          printf("\n%s sua vez de escolher a palvra com 5 letras:",player.jogador2);
                      leu_certo=scanf("%s",&nome3);
                          getchar();
                          leu_certo=system("clear");
                          printf("sua palavra é ");

                          printf("\e[0;35m| %c || %c || %c || %c || %c |\e[0m",nome3[0],nome3[1],nome3[2],nome3[3],nome3[4]);
                          printf("\n(1)para confirmar (2)para trocar a palavra: ");

                            scanf("%d",&trocar);
                          leu_certo=system("clear");
                          }while( trocar == 2);

                          printf("%s tente adivinhar a palavra, voce tera 5 tentativas",player.jogador1);



                          for (int i=0;i<=4;i++){

                            printf("\n----------------------------------------\n");     
                            leu_certo=scanf("%s",&comparar);
                            getchar();

                            venceu = strcmp (nome3,comparar);

                            printf("%i",venceu);

                            if(venceu==0){

                              player.pontos_jogador1 = player.pontos_jogador1 + 1 ;

                               printf("\n");
                              for(int i=0;i<=4;i++){

                                printf("\e[0;32m| %c |\e[0m", comparar[i]);  

                              }
                               printf("\n----------------------------------------\n");

                               printf("\n\nVocê venceu!!");
                              break;

                            }


                          for(int i=0;i<=4;i++){  

                            if(comparar[i]==nome3[i]){
                            // letra certa

                            printf("\e[0;32m| %c |\e[0m", comparar[i]);
                              } 

                          if(comparar[i]!=nome3[i]){
                          teste=teste-2;

                          for(int i2 = 0; i2<=4;i2++){

                            // letra tem na palavra
                          if(comparar[i]==nome3[i2]){
                            teste=1;


                             printf("\e[0;33m| %c |\e[0m", comparar[i]);

                          }
                            // letra errada

                            else if (i2==4&&teste!=1){
                               teste=teste++;
                             printf("\e[0;90m| %c |\e[0m", comparar[i]);

                             }
                           }
                          }
                        }
                            printf("\n");
                    }


                              printf("\na palavra é ");


                              for(int i=0;i<=4;i++){

                               printf("\e[0;32m%c\e[0m",nome3[i]);

                              }
                                  printf("\n----------------------------------------\n");
                        printf("\nDeseja começar uma nova rodada? \n S = Sim || N = Nao\n");
                        scanf("%s",&rodada);
                        getchar();   
                       leu_certo=system("clear");
                        }while(rodada=='s'||rodada=='S');
                    leu_certo=system("clear");
                       printf("\n--------------------------------------------------\n");
                       printf("%s acertou %d palavras ",player.jogador1,player.pontos_jogador1);
                       printf("e %s acertou %d palavras",player.jogador2,player.pontos_jogador2);
                       printf("\n--------------------------------------------------\n");

                      break;

                 case 3:
             do{ 
        leu_certo=system ("clear");
               
                   printf("\e[0;36m-------------------------------------------\e[0m\n");
                   printf(" \e[0;33m               Conteúdos Extras            \e[0m\n");
                   printf("\e[0;36m-------------------------------------------\e[0m\n");
                   printf("\n\e[0;34m1-Complete a frase do ditado popular\e[0m\n");
                   printf("\n\e[0;34m2-Surpresa\e[0m\n"); 
                   scanf("%d", &extras);
                   getchar();
                   leu_certo=system("clear");
                   switch(extras){
                     case 1: 
                      printf("\e[0;35mDigite seu nome:\e[0m", usuario); 
                 leu_certo=scanf("%s", &usuario); 
                      leu_certo=system("clear");
                      printf("\n\n\e[0;35mEscolhe a frase:\e[0m\n\n");
                      printf("1-\e[0;33mFrase\e[0m\n\n");
                      printf("2-\e[0;33mFrase\e[0m\n\n");
                      printf("3-\e[0;33mFrase\e[0m\n\n");
                      printf("4-\e[0;33mFrase\e[0m\n\n");
                      printf("5-\e[0;33mFrase\e[0m\n\n");
                      scanf("%d", &frase);
                      getchar();

                   leu_certo=system("clear");

                 if(frase == 1){
                 printf("Deus escreve certo por linhas..."); 
           leu_certo=scanf("%s", &resposta);  
                        
                leu_certo=acertou = strcmp (resposta,resposta1);
              
              if(acertou == 0){
                printf("%s, você acertou", usuario);
               }
                else{
                  printf("Errou a palavra é %s ", resposta1);
                }
               }
                       if(frase == 2){
                      printf("Onde Judas perdeu as..");
           leu_certo=scanf("%s", &resposta);	 
                         
           leu_certo=acertou = strcmp (resposta,resposta2);
                         
                    
               if(acertou == 0){
                          printf("%s, você acertou", usuario);
                 }
              else
                 {
                  printf("Errou a palavra é %s ", resposta2);
                 }
                }
               if(frase == 3){ 
                 
                 printf("Uma andorinha sozinha não faz.."); 
                   leu_certo=scanf("%s", &resposta);
             leu_certo=acertou = strcmp (resposta,resposta3);

                 if(acertou == 0){
                   printf("%s, você acertou", usuario);
                   }	
                   else
                   {
           leu_certo=printf("Errou a palavra é %s", resposta3);
                     }
                 
               }
                            
                      if(frase == 4){
                      printf("De médico e de louco todo mundo tem um.."); 
                      scanf("%s", &resposta);
                  leu_certo=acertou = strcmp (resposta,resposta4);
              
                if(acertou == 0){
                  printf("%s, você acertou", usuario);
                }	
                else
                {
                  printf("Errou a palavra é %s", resposta4);
                }
               }
                      if(frase == 5){
                      printf("Salvo pelo.."); 
                      scanf("%s", &resposta);
                        acertou = strcmp (resposta,resposta5);
              
                if(acertou == 0){
                  printf("%s, você acertou", usuario);
                }	
                else
                {
                  printf("Errou a palavra é %s", resposta5);
                  } 
               }
                      system("clear");

                     break;
                     
                     default:printf("comando inválido");
                   }
                  printf("\n\n\n\e[0;33mDeseja continuar no modo Extras?\e[0m\n");
                  printf(" S = Sim || N = Não\n");
                  scanf("%s", &vol);
                  getchar();
                 }while(vol == 'S' || vol == 's');
    leu_certo=system ("clear");
                  break;

                 case 4:

                  printf("\e[0;36m-------------------------------------------\e[0m\n");
                  printf(" \e[0;33m               Créditos             \e[0m\n");
                  printf("\e[0;36m-------------------------------------------\e[0m\n");

                   leu_certo=system("clear");

                  printf("\e[0;33mOs criadores do Termo:\e[0m\n\n");

                   
                     printf("\n");
                  printf("\e[0;32m-Clauberty Vincius (O MELHOR PROGRAMADOR DO UNIVERSO).\e[0m\n");
                  printf("\e[0;32m-André Rodrigo Marquês Côrtes(O SENHOR DA COMPUTAÇÃO) .\e[0m\n"); 
                        printf("\n"); 
                    printf("\e[0;32m▐▓█▀▀▀▀▀▀▀▀▀▀▀▀▀█▓▌ ▄▄▄▄▄   \n");        
                    printf("▐▓█             █▓▌ █▄▄▄█   \n");      
                    printf("▐▓█  \e[0mclauberty\e[0;32m  █▓▌ █▄▄▄█   \n");      
                    printf("▐▓█             █▓▌ █████   \n");
                    printf("▐▓█▄▄▄▄▄▄▄▄▄▄▄▄▄█▓▌ █████   \n");
                    printf("      ▄▄███▄▄       █████   \n");
                    printf("\e[0m──────────────────────      \n");
                    printf("──────────────────────      \n");
                    printf("──────────────────────      \n");
                    printf("──────────────────────       \n");
                    printf("\e[0;32m▐▓█▀▀▀▀▀▀▀▀▀▀▀▀▀█▓▌ ▄▄▄▄▄   \n");           
                    printf("▐▓█             █▓▌ █▄▄▄█   \n");        
                    printf("▐▓█    \e[0mandre\e[0;32m    █▓▌ █▄▄▄█   \n");        
                    printf("▐▓█             █▓▌ █████   \n");
                    printf("▐▓█▄▄▄▄▄▄▄▄▄▄▄▄▄█▓▌ █████   \n");
                    printf("      ▄▄███▄▄       █████   \n");
                    printf("\e[0m──────────────────────      \n");
                    printf("──────────────────────      \n");
                    printf("──────────────────────      \n");
                    printf("──────────────────────      \n");  
                   
                                  
                   break;
             }

              // system("clear");
               printf("\n\n\n\e[0;33mDeseja voltar ao menu principal ou encerrar? \n\e[0m\n V = voltar | E = encerrar \n");
               scanf("%s",&vol);
               getchar();

           }while(vol == 86 || vol == 118);  

        leu_certo=system("clear");

        printf("\n------------------------------------------------------\n");
        printf("\e[0;33m   Termo foi encerrado!\n   obrigado por jogar!\e[0m\n");
        printf("------------------------------------------------------\n");
            return 0;
      }


 

