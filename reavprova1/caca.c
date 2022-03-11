/*

É dada uma matriz multi-dimensional de inteiros.
- Cada inteiro corresponde a uma letra na tabela ASCII.

Entrada:
- Tamanho da palavra
- Palavra com todas as letras maiúsculas
- Quantidade de linhas e colunas da matriz
- A matriz em si

Saída:
Duas linhas
- Casa onde a palavra começa
- Casa onde a palavra termina

Caso não existe a palavra, deve ser impresso um 0

*/

#include <stdio.h>

void preencher_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    int num;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            scanf("%d", &num);
            matriz[i][j] = num;
        }
    }
}
void ler_matriz(int linhas, int colunas, int matriz[linhas][colunas]) {
    int i, j;
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            printf("%c ", matriz[i][j]);
        }
        printf("\n");
    }
}

void ler_array(int tamanho, int array[]) {
    int i; 
    for (i = 0; i < tamanho; i++) {
        printf("%d ", array[i]);
    }
}

void palavra_to_int(char palavra[], int counter, int palavra_int[]) {
    if (palavra[counter] == '\0') {
        return;
    } else {
        palavra_int[counter] = (int) palavra[counter];
        counter++;
        palavra_to_int(palavra, counter, palavra_int);
    }
}

int is_equal(int tamanho, int counter, int equal, int palavra[], int tentativa[]) {
    if (counter == tamanho) {
        return equal;
    } else {
        if (palavra[counter] != tentativa[counter]) {
            equal = 0;
        }
        counter++;
        is_equal(tamanho, counter, equal, palavra, tentativa);
    }
}

int main()
{
    int tamanho;
    scanf("%d", &tamanho);
    

    char palavra[tamanho];
    int palavra_int[tamanho];
    scanf("%s", palavra);

    palavra_to_int(palavra, 0, palavra_int);

    int linhas, colunas;
    scanf("%d %d", &linhas, &colunas);
    

    int matriz[linhas][colunas];

    preencher_matriz(linhas, colunas, matriz);


    int i, j, k;
    
    int casa_inicio[2] = {0, 0};
    int casa_ultima[2] = {0, 0};

    int palavra_tentativa[tamanho];
    for (i = 0; i < linhas; i++) {
        for (j = 0; j < colunas; j++) {
            if (j + tamanho <= colunas) {
                // Palavra Horizontal
                for (k = 0; k < tamanho; k++) {
                    palavra_tentativa[k] = matriz[i][j+k];
                }

                if (is_equal(tamanho, 0, 1, palavra_int, palavra_tentativa)) {
                    
                    casa_inicio[0] = i+1;
                    casa_inicio[1] = j+1;
                    casa_ultima[0] = i+1;
                    casa_ultima[1] = j + tamanho;

                    break;
                }

            } 
            if (i + tamanho <= linhas) {
                // Palavra Vertical
                for (k = 0; k < tamanho; k++) {
                    palavra_tentativa[k] = matriz[i+k][j];
                }

                if (is_equal(tamanho, 0, 1, palavra_int, palavra_tentativa)) {
                    
                    casa_inicio[0] = i+1;
                    casa_inicio[1] = j+1;
                    casa_ultima[0] = i + tamanho;
                    casa_ultima[1] = j+1;
                    break;
                }
            } 


        }
    }

    if (casa_inicio[0] != 0) {
        printf("%c", casa_inicio[0]+64);
        printf("%d\n", casa_inicio[1]);

        printf("%c", casa_ultima[0]+64);
        printf("%d\n", casa_ultima[1]);
    } else {
        printf("0");
    }

    return 0;
}