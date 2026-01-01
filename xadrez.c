#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

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
    
    #include <stdio.h>
int main(){
        int bispo = 0;
        int rainha = 0;
    //movimentaçao da Toree 5 para direita
    for (int i = 0; i < 5; i++){
        printf(" Direita\n");
    }
    while (bispo < 2) {
        //movimentaçao do bispo 2 para diagonal direita
        for (int j = 0; j < 2; j++){
            printf(" Diagonal Esquerda\n");
            printf(" Diagonal Direita\n");
        }
        bispo++;

    }
    do 
    {
        //movimentaçao da rainha 3 frente, esquerda e direita
        for (int k = 0; k < 3; k++){
            printf(" Frente\n");
            printf("volta\n");
            printf(" esquerda\n");
            printf(" Direita\n");
        }
        rainha++;
    } while (rainha < 1);

    return 0;

}
