#include <stdio.h>


void movimentoTorre(int torre) {
    // 5 casas para direita

    if (torre > 0) {
        printf("Direita\n");

        // decremento
        movimentoTorre(torre - 1);
    }

}


void movimentoBispo(int bispo) {
    // 5 casas diagonal cima e 1 casa para direita

    if (bispo <= 0) return;
    
    if (bispo == 5 ) {

        // externo - diagonal
        for (int i = 0; i < 5; i++) {
            printf("Cima\n");

            // intern0 - direita
            for (int j = 0; j < 1; j++) {
                if (i == 4) {
                    printf("Direita\n");
                }
                
            }
        }
        movimentoBispo(bispo - 1);
    }
}


void movimentoRainha(int rainha) {
    // 8 casas para esquerda

    if (rainha > 0) {
        printf("Esquerda\n");

        movimentoRainha(rainha - 1);
    }
}


void movimentoCavalo() {
    // 2 casas para cima e 1 casa para direita
    // loop avancado - multiplas variaveis e/ou condicoes

    for (int i = 0, j = 0; i < 3 && j < 3; i++, j++) {

        if (i < 2) {
            printf("Cima\n");
            continue;
        }
        
        printf("Direita\n");
        break;
    }

}



int main() {

    printf("\nPrepare-se, a Torre irá se mover!\n");
    movimentoTorre(5);

    printf("\nPrepare-se, o Bispo irá se mover!\n");
    movimentoBispo(5);

    printf("\nPrepare-se, a Rainha irá se mover!\n");
    movimentoRainha(8);

    printf("\nPrepare-se, o Cavalo irá se mover!\n");
    movimentoCavalo();


}