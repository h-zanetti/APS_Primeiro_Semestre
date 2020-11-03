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

  // Retornando Vetores
  printf("Vetor 1 = [");
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
  char escolha = ' ';
  printf("Digite '+' para soma\n");
  printf("Digite '-' para subtração\n");
  printf("Digite '*' para multiplicação\n");

  do {
    printf("\nEscolha uma operação: ");
    scanf(" %c", &escolha);
    if(escolha == '+') {
      resultado = soma(vetor1, vetor2);
    } else if (escolha == '-') {
      resultado = subtracao(vetor1, vetor2);
    } else if (escolha == '*') {
      resultado = multiplicacao(vetor1, vetor2);
    } else {
      printf("Operação inválida\n");
    }
  } while(escolha != '+' && escolha != '-' && escolha != '*');

  // Resultado
  printf("Resultado: %d\n", resultado);

  return 0;
}
