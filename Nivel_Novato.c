#include <stdio.h>
// Desafio Nível Novato: Movimentando as Peças de Xadrez
// Simula o movimento de Torre, Bispo e Rainha usando for, while e do-while
// Autor: Maycon Silva Lopes
// Data: 31/07/2025

int main()
{
    int torre = 1;
    int bispo = 1;
    int rainha = 1;

    // Torre: Mover 5 casas para a direita. (For)
    printf("Movimento da Torre:\n");

    for (torre; torre < 5; torre++) // Determina quantas casas andar(repetição do movimento).
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Bispo: Mover 5 casas na diagonal (para cima e direita). (While)

    printf("\nMovimento do Bispo:\n");

    while (bispo <= 5) // Determina quantas casas andar(repetição do movimento).
    {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Rainha: Mover 8 casas para a esquerda. (Do While)

    printf("\nMovimento da Rainha:\n");

    do
    {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8); // Determina quantas casas andar(repetição do movimento).

    return 0;
}