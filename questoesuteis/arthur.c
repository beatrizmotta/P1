#include <stdio.h>
/*
A e E e R
Dada uma matriz quadrada, cada um escolhe um cojunto da
matriz para somar e obrter um resultado. 
Os conjuntos escolhidos foram:

Arthur: linhas pares
Entidade: colunas ímpares
Rodrigo: diagonal principal

Entrada:
X - número de linhas e colunas da matriz
Números que correspondem a matriz.
Ex:
3
1 2 3
4 5 6 
7 8 9

A: 1 + 2 + 3 + 7 + 8 + 9 = 30
E: 2 + 5 + 8 = 15
R: 1 + 5 + 9 = 15

 */

void preencher_matriz(int linhas, int colunas, int i, int matriz[linhas][colunas]) {

    if (i == linhas) {
        return;
    } else {
        // i = 0
        int valor;
        int a;

        for (a = 0; a < colunas; a++)
        {
            scanf("%d", &valor);
            matriz[i][a] = valor;
        }

        i++;
        preencher_matriz(linhas, colunas, i, matriz);
    }

}

// void ler_matriz(int linhas, int colunas, int i, int matriz[linhas][colunas]) {
//     if (i == linhas) {
//         return;
//     } else {
//         int a;
//         for (a = 0; a < colunas; a++) {
//             if (a == colunas - 1) {
//             printf("%d", matriz[i][a]);
//             } else {
//                 printf("%d ", matriz[i][a]);
//             }
//         }
//         printf("\n");
//         i++;
//         ler_matriz(linhas, colunas, i, matriz);
//     }
// }

int pontuacao_arthur(int linhas, int colunas, int i, int matriz[linhas][colunas], int soma) {
    if (i == linhas) {
        return soma;
    } else {
        if (i % 2 == 0) {
            int a;
            for (a = 0; a < colunas; a++) {
                soma = soma + matriz[i][a];
            }
        }
        i++;
        pontuacao_arthur(linhas, colunas, i, matriz, soma);
    }
} 

int pontuacao_entidade(int linhas, int colunas, int j, int matriz[linhas][colunas], int soma) {
    if (j == colunas) {
        return soma;
    } else {
        if (j % 2 != 0) {
            int a;
            for (a = 0; a < linhas; a++) {
                soma = soma + matriz[a][j];
            }
        }
        j++;
        pontuacao_entidade(linhas, colunas, j, matriz, soma);
    }
}

int pontuacao_intrometido(int linhas, int colunas, int i, int j, int matriz[linhas][colunas], int soma) {
    if (i == linhas) {
        return soma;
    } else {
        soma = soma + matriz[i][j];
        i++;
        j++;
        pontuacao_intrometido(linhas, colunas, i, j, matriz, soma);
    }
}

void ganhador(int p_arthur, int p_entidade, int p_intrometido) {
    if (p_arthur > p_entidade && p_arthur > p_intrometido) {

        printf("Arthur venceu!\n");
        printf("Resultado: %d", p_arthur);
        
    } else if ((p_entidade > p_arthur && p_entidade > p_intrometido)) {
        
        printf("A entidade venceu!\n");
        printf("Resultado: %d", p_entidade);

    } else if ((p_intrometido > p_entidade && p_intrometido > p_arthur)) {
        
        printf("O intrometido venceu!\n");
        printf("Resultado: %d", p_intrometido);

    } else {
        if ((p_arthur == p_entidade) && (p_entidade == p_intrometido)) {

            printf("Empate!\n");
            printf("Resultado: %d", p_arthur);

        } else if ((p_arthur == p_entidade) && p_arthur > p_intrometido) {
            printf("Empate!\n");
            printf("Resultado: %d", p_arthur);
            
        } else if ((p_arthur == p_intrometido) && p_arthur > p_entidade) {
            printf("Empate!\n");
            printf("Resultado: %d", p_arthur);

        } else if ((p_intrometido == p_entidade) && p_intrometido > p_arthur) {
            printf("Empate!\n");
            printf("Resultado: %d", p_intrometido);

        } else if ((p_intrometido == p_arthur) && p_intrometido > p_entidade) {
            printf("Empate!\n");
            printf("Resultado: %d", p_intrometido);

        } else if ((p_entidade == p_arthur) && p_entidade > p_intrometido) {
            printf("Empate!\n");
            printf("Resultado: %d", p_entidade);

        } else if ((p_entidade == p_intrometido) && p_entidade> p_arthur) {
            printf("Empate!\n");
            printf("Resultado: %d", p_entidade);

        }

    }
}



int main() {
    int t_matriz;
    scanf("%d", &t_matriz);

    int matriz[t_matriz][t_matriz];
    preencher_matriz(t_matriz, t_matriz, 0, matriz);
    
    int p_A = pontuacao_arthur(t_matriz, t_matriz, 0, matriz, 0);
    int p_E = pontuacao_entidade(t_matriz, t_matriz, 0, matriz, 0);
    int p_I = pontuacao_intrometido(t_matriz, t_matriz, 0, 0, matriz, 0);

    ganhador(p_A, p_E, p_I);


    return 0;
}