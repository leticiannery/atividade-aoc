//leticia e lais
#include <stdio.h>
#include <time.h>

#define LINHAS 4096
#define COLUNAS 4096

int matriz[LINHAS][COLUNAS];

int main() {
    clock_t inicio = clock();

    volatile long long soma = 0; 

    for (int c = 0; c < COLUNAS; c++) {
        for (int r = 0; r < LINHAS; r++) {
            soma += matriz[r][c]; 
        }
    }

    clock_t fim = clock();
    double tempo_gasto = ((double)(fim - inicio)) / CLOCKS_PER_SEC;
    
    return 0;
}
