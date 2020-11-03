#define TAMANHO_VETOR 10

int soma(int vetor1[TAMANHO_VETOR], int vetor2[TAMANHO_VETOR]) {
  int resultado = 0;
  for(int i=0; i<10; i++) {
    resultado += vetor1[i] + vetor2[i];
  }
  return resultado;
}

int subtracao(int vetor1[TAMANHO_VETOR], int vetor2[TAMANHO_VETOR]) {
  int resultado = 0;
  for(int i=0; i<10; i++) {
    resultado += vetor1[i] - vetor2[i];
  }
  return resultado;
}

int multiplicacao(int vetor1[TAMANHO_VETOR], int vetor2[TAMANHO_VETOR]) {
  int resultado = 0;
  for(int i=0; i<10; i++) {
    resultado += vetor1[i] * vetor2[i];
  }
  return resultado;
}

int preencher_vetor(int vetor[TAMANHO_VETOR]) {
  for(int i=0; i<TAMANHO_VETOR; i++) {
    printf("Digite o %do número: ", i+1);
    scanf("%d", &vetor[i]);
  }
  return 0;
}
