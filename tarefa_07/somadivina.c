#include <stdio.h>

void preencher_vetor(int linhas, int colunas, long vetor[linhas][colunas], int i, int j) {

    if (j == colunas) {
        i++;
        j = 0;
    }

    if (i >= linhas) {
        return;
    } else {
        long num;
        scanf("%d", &num);
        vetor[i][j] = num;
        j++;
        preencher_vetor(linhas, colunas, vetor, i, j);
    }
}

void soma(int linhas, int colunas, int i, int j, long matriz_soma[linhas][colunas], long matriz1[linhas][colunas], long matriz2[linhas][colunas]) {

    if (j == colunas) {
        i++;
        j = 0;
    }

    if (i == linhas) {
        return;
    } else {
        long valor1 = matriz1[i][j];
        long valor2 = matriz2[i][j];
        matriz_soma[i][j] = valor1 + valor2;
        j++;
        soma(linhas, colunas, i, j, matriz_soma, matriz1, matriz2);
    }
}

void ler_matriz(int linhas, int colunas, int i, int j, long matriz[linhas][colunas]) {

    if (j == colunas) {
        i++;
        j = 0;
    } 

    if (i == linhas) {
        return;
    } else {
        printf("%d\n", matriz[i][j]);
        j++; 
        ler_matriz(linhas, colunas, i, j, matriz);
    }

}


int main() {
    int n;
    scanf("%d", &n);


    long matriz1[n][n];
    long matriz2[n][n];

    preencher_vetor(n, n, matriz1, 0, 0);
    preencher_vetor(n, n, matriz2, 0, 0);
    
    long matriz_soma[n][n];
    soma(n, n, 0, 0, matriz_soma, matriz1, matriz2);
    
    ler_matriz(n, n, 0, 0, matriz_soma);



    return 0;
}