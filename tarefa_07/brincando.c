#include <stdio.h>

void preencher_vetor(int i, int j, int linhas, int colunas, signed long vetor[linhas][colunas]) {

    if (j == colunas) {
        i++; 
        j = 0;
    }

    if (i == linhas) {
        return;
    } else {
        signed long num;
        scanf("%ld", &num);
        vetor[i][j] = num;
        j++;
        preencher_vetor(i, j, linhas, colunas, vetor);

    }

}

float media(int i, int j, int linhas, int colunas, signed long vetor[linhas][colunas], signed long acumulador) {

    if (j == colunas) {
        i++;
        j = 0;
    }

    if (i >= linhas) {
        return (float)(acumulador)/(float)9;
    } else {
        acumulador += vetor[i][j];
        j++;
        media(i, j, linhas, colunas, vetor, acumulador);
    }

}

signed long maior_valor(int i, int j, int linhas, int colunas, signed long vetor[linhas][colunas], signed long maior) {
    if (j == colunas) {
        i++;
        j = 0;
    }

    if (i >= linhas) {
        return maior;
    } else {
        if (vetor[i][j] >= maior) {
            maior = vetor[i][j];
        } else {
            maior = maior;
        }
        
        j++;
        maior_valor(i, j, linhas, colunas, vetor, maior);
    }
}

signed long delta(signed long maior) {
    if (maior >= 0) {
        return 1;
    } else if (maior < 0) {
        return -1;
    }
}

signed long diagonal_principal(int linhas, int colunas, signed long vetor[linhas][colunas], signed long soma) {
    soma = vetor[0][0];
    soma += vetor[1][1];
    soma += vetor[2][2];

    return soma; 
}

int main() 
{   
    const int dimensao_matriz = 3;
    signed long matriz[3][3];

    preencher_vetor(0, 0, dimensao_matriz, dimensao_matriz, matriz);

    //Media
    printf("%.2f ", media(0, 0, 3, 3, matriz, 0));

    //Maior valor
    signed long maior = maior_valor(0, 0, 3, 3, matriz, -2147483647);
    printf("%ld ", maior);

    //Delta
    printf("%d ", delta(maior));

    //Soma da diagonal
    printf("%ld", diagonal_principal(3, 3, matriz, 0));  


    return 0;
}