#include <stdio.h>

// Função que calcula a soma dos elementos de um vetor
int soma(int *vetor, int tamanho) { 
  int soma = 0;  // Variável para armazenar a soma
  for (int i = 0; i < tamanho; i++) {
    soma += vetor[i];  // Soma cada elemento do vetor
  }
  return soma;  // Retorna a soma total
}

int main() {
  int tamanho = 5;  // Define o tamanho do vetor
  int vetor[5];     // Declara o vetor com 5 elementos

  // Solicita ao usuário a entrada de 5 números inteiros
  printf("Digite 5 numeros inteiros:\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &vetor[i]);  // Lê os números e os armazena no vetor
  }

  // Chama a função 'soma' e armazena o resultado na variável 'total'
  int total = soma(vetor, tamanho); 

  // Exibe a soma total dos elementos
  printf("A soma de todos os elementos: %d\n", total);

  return 0;
}
