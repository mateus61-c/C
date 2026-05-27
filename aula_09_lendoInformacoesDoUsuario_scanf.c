#include <stdio.h> // Inclui a biblioteca padrão de entrada e saída

int main() {
    // Declaração das variáveis para armazenar os dados do usuário
    char sexo;
    int idade;
    float peso, altura;

    // Solicita ao usuário que insira os dados
    printf("digite seu sexo (F, f, M, m), idade, peso e altura: ");

    // Lê os dados digitados e os armazena nas variáveis correspondentes
    // %c para caractere, %d para inteiro, %f para ponto flutuante (decimal)
    scanf("%c%d%f%f", &sexo, &idade, &peso, &altura);

    // Exibe os dados coletados na tela, formatando o peso e altura com 2 casas decimais
    printf("\nsexo: %c\nidade: %d\npeso: %.2f\naltura: %.2f\n", sexo, idade, peso, altura);

    return 0; // Indica que o programa terminou com sucesso
}
