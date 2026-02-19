#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const int CASAS_TORRE = 5;     // Casas para a Torre (direita)
    const int CASAS_BISPO = 5;     // Casas para o Bispo (diagonal cima-direita)
    const int CASAS_RAINHA = 8;    // Casas para a Rainha (esquerda)

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    // Usamos 'while' para o Bispo: checa condição antes de cada iteração.
    printf("=== Movimento do Bispo (5 casas diagonal cima-direita) ===\n");
    int contador_bispo = 0;  // Contador para casas
    while (contador_bispo < CASAS_BISPO) {
        printf("Cima, Direita\n");  // Combinação para diagonal
        contador_bispo++;            // Incrementa o contador
    }
    printf("\n");

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    // Usamos 'for' para a Torre: contagem fixa de repetições.
    printf("=== Movimento da Torre (5 casas para a direita) ===\n");
    for (int contador_torre = 0; contador_torre < CASAS_TORRE; contador_torre++) {
        printf("Direita\n");  // Direção horizontal
    }
    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Usamos 'do-while' para a Rainha: executa pelo menos uma vez, checa depois.
    printf("=== Movimento da Rainha (8 casas para a esquerda) ===\n");
    int contador_rainha = 0;  // Contador para casas
    do {
        printf("Esquerda\n");  // Direção horizontal
        contador_rainha++;     // Incrementa o contador
    } while (contador_rainha < CASAS_RAINHA);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}