#include <stdio.h>
#include "calculadora.h"

#define TAMANHO_VETOR 10

int main(void) {
  // Declarando variáveis
  int
    resultado,
    vetor1[TAMANHO_VETOR] = {0,0,0,0,0,0,0,0,0,0},
    vetor2[TAMANHO_VETOR] = {0,0,0,0,0,0,0,0,0,0};

  // Menu interativo
  printf("Calculadora de Vetores [versão 1.0]\n\n");
  printf("Crie o primeiro vetor, você deve digitar 10 números:\n");

  // Recebendo valores do vetor 1
  preencher_vetor(vetor1);

  // Menu interativo
  printf("Crie o segundo vetor, você deve digitar 10 números:\n");

  // Recebendo vetor 2
  preencher_vetor(vetor2);

  // Repetir operações
  char comando = ' ';
  do {
    // Retornando Vetores
    printf("\nVetor 1 = [");
    for(int i=0; i<TAMANHO_VETOR-1; i++) {
      printf("%d, ", vetor1[i]);
    }
    printf("%d]\n", vetor1[TAMANHO_VETOR-1]);

    printf("Vetor 2 = [");
    for(int i=0; i<TAMANHO_VETOR-1; i++) {
      printf("%d, ", vetor2[i]);
    }
    printf("%d]\n", vetor2[TAMANHO_VETOR-1]);

    // Gerenciando operações
    char operacao = ' ';
    printf("Digite '+' para soma\n");
    printf("Digite '-' para subtração\n");
    printf("Digite '*' para multiplicação\n");

    do {
      printf("\nEscolha uma operação: ");
      scanf(" %c", &operacao);
      if(operacao == '+') {
        resultado = soma(vetor1, vetor2);
      } else if (operacao == '-') {
        resultado = subtracao(vetor1, vetor2);
      } else if (operacao == '*') {
        resultado = multiplicacao(vetor1, vetor2);
      } else {
        printf("Operação inválida\n");
      }
    } while(operacao != '+' && operacao != '-' && operacao != '*');

    // Resultado
    printf("Resultado: %d\n", resultado);

    // Defenir repetição
    printf("\nPara finalizar o programa digite 'x'\n");

    do {
      printf("Você deseja realisar outra operação com os mesmos vetores (s/n)? ");
      scanf(" %c", &comando);

      if (comando == 's') {
        continue;

      } else if (comando == 'n'){
        printf("Qual vetor você deseja alterar? Digite 'u' para o vetor 1, 'd' para o vetor 2 e 'a' para ambos... ");
        scanf(" %c", &comando);
        if (comando == 'u') {
          printf("Digite os valores do primeiro vetor:\n");
          preencher_vetor(vetor1);
          comando = 's';
        } else if (comando == 'd') {
          printf("Digite os valores do segundo vetor:\n");
          preencher_vetor(vetor2);
          comando = 's';
        } else if (comando == 'a') {
          printf("Digite os valores do primeiro vetor:\n");
          preencher_vetor(vetor1);
          printf("Digite os valores do segundo vetor:\n");
          preencher_vetor(vetor2);
          comando = 's';
        } else {
          printf("Comando inválido\n");
        }

      } else if (comando == 'x') {
        break;

      } else {
        printf("Comando inválido\n");
      }
    } while(comando != 's' && comando != 'n' && comando != 'x');
  } while(comando != 'x');

  return 0;
}
