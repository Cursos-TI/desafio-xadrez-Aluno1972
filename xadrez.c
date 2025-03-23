#include <stdio.h>

int main(){

    int Torre = 5;
    int Bispo = 5;
    int Rainha = 8;

    // mover a torre 5 casa para a direita
    printf("Movimento da Torre. \n");       
        for (int i = 0; i < Torre; i++) {
        printf("Direita \n"); //Imprime a direção do movimento

    }

    // mover a torre 5 casa para a direita
    printf("Movimento do Bispo. \n");
    int i = 0;
    while (i < Bispo) {
        printf("Cima Direita\n"); //Imprime a direção do movimento
        i++;
    }

    // mover a torre 5 casa para a direita
    printf("Movimento da Rainha. \n");
    i = 0;
    do {
        printf("Esquerda\n"); //Imprime a direção do movimento
        i++;
    } while (i < Rainha);

    return 0; // Indica que o programa foi executado com sucesso

}