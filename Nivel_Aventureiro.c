#include <stdio.h>
// Desafio Nível Aventureiro: Movimentando as Peças de Xadrez
// Simula o movimento de Torre, Bispo, Rainha e Cavalo usando for, while e do-while
// Autor: Mayconzito#BR1
// Data: 31/07/2025

int main()
{
    int torre = 0;
    int bispo = 0;
    int rainha = 0;
    int cavalo = 0;

    // Torre: Mover 5 casas para a direita - (For)
    printf("Movimento da Torre:\n");
    for (torre = 0; torre < 5; torre++) // 5 casas para a direita
    {
        printf("Direita\n"); // Imprime a direção do movimento
    }

    // Bispo: Mover 5 casas na diagonal cima e à direita - (While)
    printf("\nMovimento do Bispo:\n");
    while (bispo < 5) // 5 casas na diagonal
    {
        printf("Cima, Direita\n"); // Imprime direção diagonal
        bispo++;
    }

    // Rainha: Mover 8 casas para a esquerda - (Do While)
    printf("\nMovimento da Rainha:\n");
    do
    {
        printf("Esquerda\n"); // Imprime direção do movimento
        rainha++;
    } while (rainha < 8); // 8 casas para a esquerda

    // Cavalo: Mover 2 casas para baixo e 1 para a esquerda - (For + While)
    printf("\nMovimento do Cavalo:\n");
    for (int i = 0; i < 1; i++) // Loop externo: Movimento em "L" 
    {
        cavalo = 0;
        while (cavalo < 3) // Loop interno: 3 passos por movimento (2 baixo, 1 esquerda)
        {
            if (cavalo < 2) 
            {
                printf("Baixo\n"); // Primeiros 2 passos: Baixo
            } 
            else 
            {
                printf("Esquerda\n"); // Último passo: Esquerda
            }
            cavalo++;
        }
    }

    return 0;
}