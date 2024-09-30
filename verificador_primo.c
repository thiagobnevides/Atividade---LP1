#include <stdio.h>

int main() {
    int num, primo = 1;

    printf("Digite um numero inteiro: ");
    scanf("%d", &num);  // Correção: '&num' para armazenar o valor corretamente

    // Verifica se o número é menor ou igual a 1 (números <= 1 não são primos)
    if (num <= 1) {
        primo = 0;  // Define como não primo
    } 
    else {  
        // Laço que percorre possíveis divisores do número
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {  // Se 'num' for divisível por 'i', não é primo
                primo = 0;  // Marca como não primo
                break;  // Sai do laço, pois já não é primo
            }
        }
    }

    // Exibe o resultado (você poderia adicionar uma saída aqui)
    if (primo) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}