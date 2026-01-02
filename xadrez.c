
#include <stdio.h>

/* =====================================================
   FUNÇÕES RECURSIVAS – NÍVEL MESTRE
   ===================================================== */

void moverBispo(int casas) {
    if (casas > 0) {
        moverBispo(casas - 1);
        printf("Bispo: Diagonal Direita para cima\n");
    }
}

void moverTorre(int casas) {
    if (casas > 0) {
        moverTorre(casas - 1);
        printf("Torre: Direita\n");
    }
}

void moverRainha(int casas) {
    if (casas > 0) {
        moverRainha(casas - 1);
        printf("Rainha: Esquerda\n");
    }
}

/* =====================================================
   FUNÇÃO PRINCIPAL
   ===================================================== */

int main() {

    int bispo = 0;
    int rainha = 0;
    int escolha;

    /* =====================================================
       TORRE – LOOP
       ===================================================== */
    for (int i = 0; i < 5; i++) {
        printf("Direita (Torre - Loop)\n");
    }

    /* =====================================================
       BISPO – LOOPS ANINHADOS
       ===================================================== */
    while (bispo < 2) {
        for (int j = 0; j < 2; j++) {
            printf("Diagonal Esquerda (Bispo - Loop)\n");
            printf("Diagonal Direita (Bispo - Loop)\n");
        }
        bispo++;
    }

    /* =====================================================
       RAINHA – DO WHILE
       ===================================================== */
    do {
        for (int k = 0; k < 3; k++) {
            printf("Frente (Rainha - Loop)\n");
            printf("Volta (Rainha - Loop)\n");
            printf("Esquerda (Rainha - Loop)\n");
            printf("Direita (Rainha - Loop)\n");
        }
        rainha++;
    } while (rainha < 1);

    /* =====================================================
       CAVALO – MOVIMENTO EM L
       ===================================================== */
    printf("\nMovimento do Cavalo 🐎\n");

    for (int c = 1; c <= 2; c++) {

        printf("\nJogada %d do cavalo\n", c);
        printf("Escolha o lado:\n");
        printf("1 - Direita\n");
        printf("2 - Esquerda\n");
        printf("Opcao: ");
        scanf("%d", &escolha);

        printf("Frente (Cavalo)\n");
        printf("Frente (Cavalo)\n");

        if (escolha == 1) {
            printf("Direita (Cavalo)\n");
        } else if (escolha == 2) {
            printf("Esquerda (Cavalo)\n");
        } else {
            printf("Opcao invalida!\n");
        }
    }

    /* =====================================================
       NÍVEL MESTRE – FUNÇÕES RECURSIVAS
       ===================================================== */
    printf("\n--- Movimentos Recursivos ---\n");

    moverBispo(5);
    moverTorre(8);
    moverRainha(8);

    return 0;
}
