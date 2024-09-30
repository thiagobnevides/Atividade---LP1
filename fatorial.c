#include <stdio.h>

// Função que calcula o fatorial de um número inteiro
int fatorial(int valor) {
    int total = 1;  // Inicializa a variável total com 1, já que qualquer número multiplicado por 1 permanece o mesmo
    
    // Laço para calcular o fatorial, multiplicando o total pelo valor atual de 'i' a cada iteração
    for (int i = valor; i > 0; i--) {
        total *= i;  // Acumula a multiplicação no total
    }
    
    // Retorna o resultado final do fatorial
    return total;
}

int main() {

    int num;  // Variável para armazenar o número inserido pelo usuário

    // Solicita ao usuário que insira um número inteiro
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);  // Lê o valor inserido pelo usuário

    // Verifica se o número é negativo, já que o fatorial não é definido para números negativos
    if (num < 0) {
        printf("O fatorial nao e definido para numeros negativos.\n");
        return 1;  // Encerra o programa com um código de erro
    }

    // Exibe o resultado do fatorial chamando a função 'fatorial' e passando o número fornecido
    printf("O resultado de %d! e: %d\n", num, fatorial(num));

    return 0;  // Encerra o programa com sucesso
}