#include <stdio.h>

int main() {
    // TORRE - linha reta horizontalmente ou verticalmente - 5 CASAS PARA DIREITA
    // for (torre = 0; torre <= 5; torre++)
    // BISPO - diagonal - 5 CASAS DIAGONAL PARA CIMA E DIREITA
    // while
    // RAINHA - todas direcoes - 8 CASAS PARA ESQUERDA
    // do while


    int torre;
    int bispo = 1;
    int rainha = 1;

    // Simulando movimento da TORRE
    printf("\nPrepare-se, a Torre irá se mover!\n");
    for (torre = 1; torre <= 5; torre++) {
        printf("Direita\n");
    }


    // Simulando movimento do BISPO
    printf("\nPrepare-se, o Bispo irá se mover!\n");
    while (bispo <= 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Simulando movimento da RAINHA
    printf("\nPrepare-se, a Rainha irá se mover!\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha <= 8);
}