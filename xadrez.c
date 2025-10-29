#include <stdio.h>

// Bispo Recursivo
void bispoRecursivo(int numero) {
    printf("Movimentos Bispo:\n");
    for (int i = 1; i <= numero; i++){
        printf("Cima: %d\n", i);
        printf("Direita: %d\n", i);
    } 
}

// Torre Recursiva
void torreRecursiva(int numero) {
    printf("Movimentos Torre:\n");
        for (int i = 1; i<= numero; i++) {
        printf("Direita: %d\n", i);
    }
    printf("\n");
}

// Rainha Recursiva
void rainhaRecursiva(int numero) {
    int i = 1; 
    printf("Movimentos Rainha:\n");
    do {
        printf("Esquerda: %d\n", i);
        i++;
    } while (i <= numero);

    printf("\n");
}

// Cavalo Recursivo
void cavaloRecursivo(int numero) {
    int i = 1, j = 1; 
    printf("Movimentos Cavalo:\n");
    for(i = 1; i < numero; i++){
        printf("Cima: %d\n", i+1);
    }   while (j < 2){
        printf("Direita: %d\n", j);        
        j++;
    }
}

int main() {

    // Define numeros de casas das pecas
    int torre = 5, bispo = 5, rainha = 8, cavalo = 2;

    // Chamada Blocos
    bispoRecursivo(bispo);
    printf("\n");
    torreRecursiva(torre);
    printf("\n");
    rainhaRecursiva(rainha);
    printf("\n");
    cavaloRecursivo(cavalo);
    printf("\n");

    return 0;
}
