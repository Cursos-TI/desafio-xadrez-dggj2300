#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void moverBisbo(int casasCima) {
    if(casasCima > 0) {
        printf("Cima,");
        for(int casasDireita = 1; casasDireita > 0; casasDireita--) {
            printf(" Direita \n");
        }
        moverBisbo(casasCima - 1);
    }
}

void moverRainha(int casas) {
    if(casas > 0) {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

void moverTorre(int casas) {
    if(casas > 0) {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação Bisbo \n");

    moverBisbo(5);
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimentação Torre \n");

    moverTorre(5);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação Rainha \n");

    moverRainha(8);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação Cavalo \n");

    for(int casasCima = 1, casasDireita = 0; casasCima <= 2 && casasDireita <= 1; casasCima++) {
        printf("Cima\n");

        if(casasCima == 2) {
            for(casasDireita = 1; casasDireita <= 1; casasDireita++) {
                printf("Direita\n");
            }
        }
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
