#include <stdio.h>

int main() {
    // TORRE - linha reta horizontalmente ou verticalmente - 5 CASAS PARA DIREITA
    // for (torre = 0; torre <= 5; torre++)
    // BISPO - diagonal - 5 CASAS DIAGONAL PARA CIMA E DIREITA
    // while
    // RAINHA - todas direcoes - 8 CASAS PARA ESQUERDA
    // do while


    int torre;
    int bispo = 0;
    int rainha = 0;

    // começa em 0 e vai rodar apenas 1 vez (0 < 1)
    int movimentoCavalo = 0;

    // Simulando movimento da TORRE
    printf("\nPrepare-se, a Torre irá se mover!\n");
    for (torre = 0; torre < 5; torre++) {
        printf("Direita\n");
    }


    // Simulando movimento do BISPO
    printf("\nPrepare-se, o Bispo irá se mover!\n");
    while (bispo < 5) {
        printf("Cima, Direita\n");
        bispo++;
    }

    // Simulando movimento da RAINHA
    printf("\nPrepare-se, a Rainha irá se mover!\n");
    do {
        printf("Esquerda\n");
        rainha++;
    } while (rainha < 8);


    // Simulando movimento do CAVALO
    printf("\nPrepare-se, o Cavalo irá se mover!\n");

    // rodar 1 vez
    while (movimentoCavalo < 1) {
        // vai rodar 2 vezes o movimento para baixo
        for (int cavalo = 0; cavalo < 2; cavalo++) {
            printf("Baixo\n");
        }

        movimentoCavalo++;
    }

    printf("Esquerda\n");
}