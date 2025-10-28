#include <stdio.h>

int main() {

    int torre = 5, bispo = 5, rainha = 8;

    // Torre (for)

    for (int i = 1; i<= torre; i++) {
        printf("A Torre andou %d casa(s) a direita\n", i);
    }
    printf("\n");

    // Bispo (while)

    int i = 1;
    while(i <= bispo) {
        printf("O Bispo andou %d casa(s) na diagonal (1 para a Direita e 1 para Cima)\n", i);
        i++;
    }

    printf("\n");

    //Rainha (do-while)

    i = 1; 
    do {
        printf("A Rainha andou %d casa(s) para a esquerda\n", i);
        i++;
    } while (i <= rainha);

    printf("\n");

    return 0;
}
