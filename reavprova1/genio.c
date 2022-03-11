/*
Matriz de m x n
Marquinhos só pode andar na horizontal e vertical, e 
cada posição que anda gasta 30 minutos.
Marquinhos só tem 4 horas (pode andar 8 casas máx), então ele terá de percorrer
o menor caminho possível.

Entrada:
- Dois inteiros m e n / linhas e colunas da matriz
- Matriz, onde L representa a lâmpada mágica, M a posição
de Marquinhos e as outras casas representadas por '-'

Pode receber uma ou mais entradas

*/

#include <stdio.h>
#include <stdlib.h>

void preencher_matriz(int linhas, int colunas, char matriz[linhas][colunas]) {
    int i, j;
    char charac[linhas];
    for (i = 0; i < linhas; i++) {
        scanf("%s", charac);
        for (j = 0; j < colunas; j++) {
            matriz[i][j] = charac[j];
        }
    }
}

/*
Primeiro vamos fazer Marquinhos se igualar verticalmente à 
lâmpada 
*/

int achar_distancia(int linhas, int colunas, char matriz[linhas][colunas], int coords_l[3][2], int coords_m[]) {

    int i, j, l;
    l = 0;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if(matriz[i][j] == 'M') {
                // printf("Achei marquinhos em [%d, %d] \n", i, j);   
                coords_m[0] = i;
                coords_m[1] = j;
            }

            if (matriz[i][j] == 'L') {
                // printf("Achei Lampada em [%d, %d] \n", i, j);   
                coords_l[l][0] = i;
                coords_l[l][1] = j;
                l++;
            }
        }
    }
}

int qual_mais_perto(int linhas, int colunas, int coords_lamp[linhas][colunas], int coords_marquinhos[]) {
    int c;
    int mais_perto_m[3][2];
    int mais_perto;

    int x_marcos = coords_marquinhos[0];
    int y_marcos = coords_marquinhos[1];
    
    int x_lamp;
    int y_lamp;

    int diferenca_x;
    int diferenca_y;
    int prior_distance;
    int distancia = 1000;

    for (c = 0; c < 3; c++) {
        x_lamp = coords_lamp[c][0];
        y_lamp = coords_lamp[c][1];


        diferenca_x = x_lamp - x_marcos;
        diferenca_y = y_lamp - y_marcos;

        diferenca_x = abs(diferenca_x);
        diferenca_y = abs(diferenca_y);

        prior_distance = distancia;

        distancia = diferenca_x + diferenca_y;
        
        if (distancia <= prior_distance) {
            mais_perto = c;
        } 


    }

    if (distancia <= 8) {
        printf("MARQUINHOS SERA APROVADO! ");
        int x = coords_lamp[mais_perto][0];
        int y = coords_lamp[mais_perto][1];
        printf("Coordenadas: (%d,%d)\n", x, y);
    } else {
        printf("AINDA TEM A FINAL :(\n");
    }

    
    
}



void ler_array(int tamanho, int array[]) {
    int i; 
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
}

void ler_matriz_c(int linhas, int colunas, char matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void ler_matriz_i(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}



int main() {

    int linhas, colunas;
    
    while (scanf("%d %d", &linhas, &colunas) != EOF) {
        char matriz[linhas][colunas];
        preencher_matriz(linhas, colunas, matriz);

        int coords_lamps[3][2];
        int coords_marquinhos[2];

        achar_distancia(linhas, colunas, matriz, coords_lamps, coords_marquinhos);

        qual_mais_perto(3, 2, coords_lamps, coords_marquinhos);

    }
    return 0;
}