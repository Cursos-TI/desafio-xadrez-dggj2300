#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int casasBispo;
    int casasTorre = 1;
    int casasRainha = 1;
    int casasCavalo = 1;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    printf("Movimentação Bisbo \n");

    for(casasBispo = 1; casasBispo <= 5; casasBispo++) { //repete o processo até mover as casas solicitadas
        printf("Cima, direta \n"); //Imprime a movimentação
    }    

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    printf("\nMovimentação Torre \n");

    while(casasTorre <= 5) { //repete o processo até mover as casas solicitadas
        printf("Direta \n"); //Imprime a movimentação

        casasTorre++;
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("\nMovimentação Rainha \n");

    do {
        printf("Esquerda\n"); //Imprime a movimentação
        casasRainha++;
    } while (casasRainha <= 8); //repete o processo até mover as casas solicitadas

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\nMovimentação Cavalo \n");

    while(casasCavalo--) {
        for(int i = 0; i < 2; i++) {
            printf("cima \n");
        }
        printf("direita \n");
    }

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
