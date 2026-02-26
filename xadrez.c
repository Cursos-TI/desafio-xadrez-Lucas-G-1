#include <stdio.h>

// Desafio de Xadrez - MateCheck (Nível Mestre)
// Este código finaliza o desafio com recursividade para Torre, Bispo e Rainha,
// e loops aninhados complexos com continue/break para o Cavalo.
// Usamos recursão para substituir os loops lineares das peças retas/diagonais,
// e loops aninhados avançados para o Cavalo com condições extras.

void mover_torre_recursivo(int casas_restantes) {
    // Função recursiva para a Torre: imprime "Direita" e chama a si mesma até 0 casas.
    // Caso base: se não restar casas, retorna (fim da recursão).
    if (casas_restantes <= 0) {
        return;
    }
    printf("Direita\n");
    mover_torre_recursivo(casas_restantes - 1);  // Chamada recursiva: diminui 1 casa
}

void mover_bispo_recursivo(int casas_restantes) {
    // Função recursiva para o Bispo: imprime "Cima, Direita" até 0 casas.
    if (casas_restantes <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    mover_bispo_recursivo(casas_restantes - 1);
}

void mover_rainha_recursivo(int casas_restantes) {
    // Função recursiva para a Rainha: imprime "Esquerda" até 0 casas.
    if (casas_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    mover_rainha_recursivo(casas_restantes - 1);
}

int main() {
    // Constantes para número de casas (hard-coded, como pedido)
    const int CASAS_TORRE  = 5;   // Torre: 5 casas direita
    const int CASAS_BISPO  = 5;   // Bispo: 5 casas diagonal cima-direita
    const int CASAS_RAINHA = 8;   // Rainha: 8 casas esquerda
    const int CASAS_VERTICAIS_CAVALO = 2;  // Cavalo: 2 casas para cima
    const int CASAS_HORIZONTAIS_CAVALO = 1; // Cavalo: 1 casa para a direita

    // ==================== MOVIMENTO RECURSIVO DA TORRE ====================
    printf("=== Movimento da Torre (5 casas para a direita) - Recursivo ===\n");
    mover_torre_recursivo(CASAS_TORRE);
    printf("\n");

    // ==================== MOVIMENTO RECURSIVO DO BISPO ====================
    printf("=== Movimento do Bispo (5 casas diagonal cima-direita) - Recursivo ===\n");
    mover_bispo_recursivo(CASAS_BISPO);
    printf("\n");

    // ==================== MOVIMENTO RECURSIVO DA RAINHA ====================
    printf("=== Movimento da Rainha (8 casas para a esquerda) - Recursivo ===\n");
    mover_rainha_recursivo(CASAS_RAINHA);
    printf("\n");

    // ==================== MOVIMENTO DO CAVALO COM LOOPS ANINHADOS COMPLEXOS ====================
    // Requisito: loops aninhados com múltiplas variáveis, condições, continue e break.
    // Simulamos: 2 casas para cima + 1 casa para a direita.
    // Usamos:
    //   - Loop externo 'for' para as partes do "L" (vertical e horizontal)
    //   - Loop interno 'while' com condições extras (continue/break)
    printf("=== Movimento do Cavalo (L: 2 casas para cima, 1 casa para a direita) ===\n");

    int partes_l[2] = {CASAS_VERTICAIS_CAVALO, CASAS_HORIZONTAIS_CAVALO};
    const char *direcoes_l[2] = {"Cima", "Direita"};

    for (int parte = 0; parte < 2; parte++) {  // Loop externo: partes do "L"
        int casas_atual = partes_l[parte];
        int contador = 0;

        while (contador < casas_atual) {  // Loop interno: casas na direção atual
            // Condição extra de exemplo: se contador for ímpar, pula impressão (continue)
            if (contador % 2 == 1) {
                printf("(pulo interno - continue)\n");
                contador++;
                continue;  // Pula o resto do corpo e vai pra próxima iteração
            }

            // Imprime a direção
            printf("%s\n", direcoes_l[parte]);

            contador++;

            // Condição de break: se já imprimiu metade das casas, para o loop interno
            if (contador >= (casas_atual / 2) + 1 && casas_atual > 1) {
                printf("(break precoce - metade atingida)\n");
                break;  // Sai do while interno antes do fim
            }
        }
    }
    printf("\n");

    // ==================== BISPO COM LOOPS ANINHADOS (requisito extra) ====================
    // Loop externo: vertical (Cima), loop interno: horizontal (Direita)
    // Simula exatamente 5 casas diagonal usando aninhamento.
    printf("=== Bispo com Loops Aninhados (externo vertical, interno horizontal) ===\n");
    int casas_total = CASAS_BISPO;
    int vertical = 0;

    while (vertical < casas_total) {  // Loop externo: simula o movimento vertical (Cima)
        int horizontal = 0;
        for (; horizontal < 1; horizontal++) {  // Loop interno: apenas 1 passo horizontal por vertical
            printf("Cima, Direita\n");  // Combinação diagonal
        }
        vertical++;  // Avança na vertical
    }
    printf("\n");

    printf("Fim da simulação de movimentos!\n");

    return 0;
}