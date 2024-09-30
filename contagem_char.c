#include <stdio.h>

int main() {

    char texto[100];  // Declara um array de 100 caracteres para armazenar a string
    int contador = 0; // Inicializa um contador de caracteres

    // Solicita ao usuário que digite uma palavra
    printf("Digite uma palavra: ");
    scanf("%s", texto);  // Lê a string digitada pelo usuário (sem espaços)

    // Laço para contar os caracteres até encontrar o caractere nulo ('\0')
    while (texto[contador] != '\0') {
        contador++;  // Incrementa o contador para cada caractere da string
    }

    // Exibe o número total de caracteres na string
    printf("A string tem %d caracteres.", contador);

    return 0;  // Finaliza o programa
}
