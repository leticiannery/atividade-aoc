#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

#define LINHAS 16384
#define COLUNAS 16384

int main() {
    clock_t inicio = clock();

    int **matriz = (int **)malloc(LINHAS * sizeof(int *));
    for (int i = 0; i < LINHAS; i++) {
        matriz[i] = (int *)malloc(COLUNAS * sizeof(int));
    }

    volatile long long soma = 0; 

    for (int c = 0; c < COLUNAS; c++) {
        for (int r = 0; r < LINHAS; r++) {
            soma += matriz[r][c]; 
        }
    }

    for (int i = 0; i < LINHAS; i++) {
        free(matriz[i]);
    }
    free(matriz);

    clock_t fim = clock();
    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;

    printf("Desafio concluído.\n");
    printf("Soma simulada: %lld\n", soma);
    printf("Tempo de execução: %.4f segundos\n", tempo_gasto);
    
    return 0;
}