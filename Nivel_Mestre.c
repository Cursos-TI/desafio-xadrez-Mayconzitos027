// Desafio Nível Mestre: Movimentando as Peças de Xadrez
// Continuação do Nível Aventureiro, modifica loops simples do movimento da Torre, Bispo e Rainha para função recursiva e incrementa loops complexos ao movimento do cavalo.
// Simula o movimento de Torre, Bispo, Rainha e Cavalo
// Autor: Mayconzito#BR1
// Data: 06/08/2025

#include <stdio.h>

// Função recursiva para movimento da Torre
void movimentoTorre(int casas)
{
    if (casas <= 0)
        return;
    printf("Direita\n");       // Imprime da direção do movimento
    movimentoTorre(casas - 1); // Decremento da função
}

// Função recursiva para movimento vertical do Bispo
void movimentoBispo(int casas)
{
    if (casas <=0)
        return;

    for (int vertical = 1; vertical <= 1; vertical++) // Loop externo: "Cima"
    {
        printf("Cima, ");
        for (int horizontal = 1; horizontal <= 1; horizontal++) // Loop interno: "Direita"
        {
            printf("direita\n");
        }
        
    }
    movimentoBispo(casas - 1); // Recursão
}

// Função recursiva para movimento da Rainha
void movimentoRainha(int casas)
{
    if (casas <= 0)
        return;
    printf("Esquerda\n");       // Imprime da direção do movimento
    movimentoRainha(casas - 1); // Decremento da função
}

int main()
{
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 0;

    // Torre: Mover 5 casas para a direita
    printf("Movimento da Torre:\n");
    movimentoTorre(torre);

    // Bispo: Mover 5 casas na diagonal (para cima e direita) com loops aninhados
    printf("\nMovimento do Bispo:\n");
    movimentoBispo(bispo);

    // Rainha: Mover 8 casas para a esquerda
    printf("\nMovimento da Rainha:\n");
    movimentoRainha(rainha);

    // Cavalo: Movimento em "L" (2 cima, 1 direita)
    // Usa loops aninhados com múltiplas variáveis (vertical, horizontal, cavalo)
    printf("\nMovimento do Cavalo:\n");
    cavalo = 0; // Controla a sequência: 0 e 1 = cima, 2 = direita
    for (int i = 0, vertical = 0, horizontal = 0; i <= 3; i += (cavalo < 2) ? 1 : 2) // Loop externo: itera pelos passos com incremento condicional
    {
        for (int j = 1; j <= 1; j++) // Loop interno: verifica a direção do passo atual
        {
            if (cavalo < 2 && vertical < 2) // Primeiros 2 passos: mover para cima
            {
                printf("Cima\n");
                vertical++;
                cavalo++;
            }
            else if (cavalo == 2 && horizontal < 1) // Último passo: mover para a direita
            {
                printf("Direita\n"); 
                horizontal++;
                break; // Sai do loop interno após completar o "L"
            }
        }
        if (vertical == 2 && horizontal == 1) 
        {
            break;// Sai do loop externo se o movimento foi concluído       
        }
    }

    return 0;
}