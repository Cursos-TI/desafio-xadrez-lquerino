#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movbispo() {
    printf("\n\n Movimentação do Bispo: \n\n");
    
    char bisp[8] = "Bispo";
    int mov1 = 1, ordm1 = 1;

    while (mov1 <= 5)
    {
        printf("Movimento %d: %s se movimentou para a cima!\n", ordm1, bisp);
        printf("Movimento %d: %s se movimentou para a direita!\n", ordm1, bisp);
        mov1 ++;
        ordm1 ++;
    }
}

void movtorre(){

    char tor[8] = "Torre";
    int mov2 = 1, ordm2 = 1;

    printf("\n\n Movimentação da Torre: \n\n");

    do {
        printf("Movimento %d: %s se movimentou para a direita!\n", ordm2, tor);
        mov2 ++;
        ordm2 ++;

    } while (mov2 <= 5);
}

void movrainha(){

    char rai[8] = "Rainha";

    printf("\n\n Movimentação da Rainha: \n\n");

    for (int mov3 = 1, ordm3 = 1; mov3 <= 8; mov3++, ordm3++){
         printf("Movimento %d: %s se movimentou para a esquerda!\n", ordm3, rai);
    }
}

void movrcavalo(){

    char cav[8] = "Cavalo";

    printf("\n\n Movimentação do Cavalo: \n\n");

    for (int mov4 = 1, ordm4 = 1; mov4 <=1 ; mov4++, ordm4++){

        for (int mov4_1 = 1; mov4_1 <=2 ; mov4_1++){
            printf("Movimento %d: %s se movimentou para a cima!\n", ordm4, cav);
         }
         printf("Movimento %d: %s se movimentou para a direita!\n", ordm4, cav);

         printf("\n");
    }


}

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    char bisp[8] = "Bispo", tor[8] = "Torre", rai[8] = "Rainha", cav[8] = "Cavalo";
    int mov3 = 3, mov5 = 5, mov8 = 8;

    // Exibição da quantidade de movimentos por peça

    printf("Cada peça poderá se movimentar seguindo as orientações: \n\n"); 

    printf("%s se movimenta %d vezes\n", bisp, mov5);
    printf("%s se movimenta %d vezes\n", tor, mov5);
    printf("%s se movimenta %d vezes\n", rai, mov8);
    printf("%s se movimenta %d vezes\n", cav, mov3);

    printf("\n\nIniciando movimentações.... \n\n");

    // Chamando movimentos

    movbispo();
    printf("\n\n");
    movtorre();
    printf("\n\n");
    movrainha();
    printf("\n\n");
    movrcavalo();
    printf("\n\n");
    
    return 0;
}
